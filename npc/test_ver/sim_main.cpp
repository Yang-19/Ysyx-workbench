#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"

#include <cstdio>
#include <cstdlib>
#include <cassert>

int main(int argc, char** argv) {

    // Create simulation context
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    // Enable waveform tracing
    contextp->traceEverOn(true);

    // Create RTL simulation model
    Vtop* top = new Vtop{contextp};

    // Create FST waveform writer
    VerilatedFstC tfp;
    top->trace(&tfp, 99);
    tfp.open("waveform.fst");

    // Run simulation
    while (!contextp->gotFinish() && contextp->time() < 1000) {

        // Generate random inputs
        int a = rand() & 1;
        int b = rand() & 1;

        // Drive RTL inputs
        top->a = a;
        top->b = b;

        // Evaluate RTL
        top->eval();

        // Check result
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == (a ^ b));

        // Record waveform
        tfp.dump(contextp->time());

        // Advance simulation time
        contextp->timeInc(1);
    }

    // Finalize simulation
    top->final();
    tfp.close();

    // Release dynamically allocated objects
    delete top;
    delete contextp;

    return 0;
}
