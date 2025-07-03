// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbagh_chal.h for the primary calling header

#include "Vbagh_chal__pch.h"
#include "Vbagh_chal___024root.h"

void Vbagh_chal___024root___eval_triggers__ico(Vbagh_chal___024root* vlSelf);
void Vbagh_chal___024root___eval_ico(Vbagh_chal___024root* vlSelf);

bool Vbagh_chal___024root___eval_phase__ico(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_phase__ico\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbagh_chal___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbagh_chal___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbagh_chal___024root___eval_act(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_act\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbagh_chal___024root___eval_triggers__act(Vbagh_chal___024root* vlSelf);

bool Vbagh_chal___024root___eval_phase__act(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_phase__act\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbagh_chal___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbagh_chal___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vbagh_chal___024root___eval_nba(Vbagh_chal___024root* vlSelf);

bool Vbagh_chal___024root___eval_phase__nba(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_phase__nba\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbagh_chal___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__ico(Vbagh_chal___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__nba(Vbagh_chal___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__act(Vbagh_chal___024root* vlSelf);
#endif  // VL_DEBUG

void Vbagh_chal___024root___eval(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vbagh_chal___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/bagh_chal.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbagh_chal___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbagh_chal___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/bagh_chal.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbagh_chal___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/bagh_chal.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbagh_chal___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbagh_chal___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbagh_chal___024root___eval_debug_assertions(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_debug_assertions\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.op_valid & 0xfeU)))) {
        Verilated::overWidthError("op_valid");}
    if (VL_UNLIKELY(((vlSelfRef.op_i & 0xe0U)))) {
        Verilated::overWidthError("op_i");}
    if (VL_UNLIKELY(((vlSelfRef.op_j & 0xe0U)))) {
        Verilated::overWidthError("op_j");}
    if (VL_UNLIKELY(((vlSelfRef.re_ready & 0xfeU)))) {
        Verilated::overWidthError("re_ready");}
}
#endif  // VL_DEBUG
