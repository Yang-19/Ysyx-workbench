// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: RTMD hierarchy table

#include "Vtop__pch.h"
#include "verilated_rtmd.h"

#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif

#define VL_RTMD_OFFSETOF(scopeType, scope, member) \
    (offsetof(Vtop__Syms, scope) + offsetof(scopeType, member))

VL_CONSTINIT_CXX20 extern const VlRtmdHierRow Vtop__RtmdHierTable__chunk__0[] = {
    /*0*/ VlRtmdHierRow::Push{"$root", VlRtmdHierRow::Push::Kind::ROOT, VlRtmdHierRow::HierFlags::HAS_VARS | VlRtmdHierRow::HierFlags::HAS_TRACED_VARS}, // push
    /*1*/ VlRtmdHierRow::Push{"$rootio", VlRtmdHierRow::Push::Kind::ROOTIO, VlRtmdHierRow::HierFlags::HAS_VARS | VlRtmdHierRow::HierFlags::HAS_TRACED_VARS}, // push
    /*2*/ VlRtmdHierRow::Var{"a", 0, 0, VL_RTMD_OFFSETOF(Vtop___024root, vlInst.TOP, __VprimaryPorts.a), VlRtmdHierRow::VarFlags::IS_TRACED},
    /*3*/ VlRtmdHierRow::Var{"b", 0, 0, VL_RTMD_OFFSETOF(Vtop___024root, vlInst.TOP, __VprimaryPorts.b), VlRtmdHierRow::VarFlags::IS_TRACED},
    /*4*/ VlRtmdHierRow::Var{"f", 1, 0, VL_RTMD_OFFSETOF(Vtop___024root, vlInst.TOP, __VprimaryPorts.f), VlRtmdHierRow::VarFlags::IS_TRACED},
    /*5*/ VlRtmdHierRow::Pop{}, // pop #1
    /*6*/ VlRtmdHierRow::Instance{"top"},
    /*7*/ VlRtmdHierRow::Push{"top", VlRtmdHierRow::Push::Kind::MODULE, VlRtmdHierRow::HierFlags::HAS_VARS | VlRtmdHierRow::HierFlags::HAS_TRACED_VARS}, // push
    /*8*/ VlRtmdHierRow::Var{"a", 0, 0, VL_RTMD_OFFSETOF(Vtop___024root, vlInst.TOP, __VprimaryPorts.a), VlRtmdHierRow::VarFlags::IS_TRACED},
    /*9*/ VlRtmdHierRow::Var{"b", 0, 0, VL_RTMD_OFFSETOF(Vtop___024root, vlInst.TOP, __VprimaryPorts.b), VlRtmdHierRow::VarFlags::IS_TRACED},
    /*10*/ VlRtmdHierRow::Var{"f", 1, 0, VL_RTMD_OFFSETOF(Vtop___024root, vlInst.TOP, __VprimaryPorts.f), VlRtmdHierRow::VarFlags::IS_TRACED},
    /*11*/ VlRtmdHierRow::Pop{}, // pop #7
    /*12*/ VlRtmdHierRow::Instance{"$unit"},
    /*13*/ VlRtmdHierRow::Push{"$unit", VlRtmdHierRow::Push::Kind::PACKAGE, 0}, // push
    /*14*/ VlRtmdHierRow::Pop{}, // pop #13
    /*15*/ VlRtmdHierRow::Pop{}, // pop #0
};

#undef VL_RTMD_OFFSETOF

#if defined(__GNUC__)
# pragma GCC diagnostic pop
#endif
