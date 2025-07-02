// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect4.h for the primary calling header

#include "Vconnect4__pch.h"
#include "Vconnect4___024root.h"

void Vconnect4___024root___eval_triggers__ico(Vconnect4___024root* vlSelf);
void Vconnect4___024root___eval_ico(Vconnect4___024root* vlSelf);

bool Vconnect4___024root___eval_phase__ico(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_phase__ico\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconnect4___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vconnect4___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconnect4___024root___eval_act(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_act\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vconnect4___024root___eval_triggers__act(Vconnect4___024root* vlSelf);

bool Vconnect4___024root___eval_phase__act(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_phase__act\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconnect4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vconnect4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vconnect4___024root___eval_nba(Vconnect4___024root* vlSelf);

bool Vconnect4___024root___eval_phase__nba(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_phase__nba\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconnect4___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__ico(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__nba(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__act(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG

void Vconnect4___024root___eval(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vconnect4___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/connect4.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconnect4___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vconnect4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/connect4.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vconnect4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/connect4.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vconnect4___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vconnect4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconnect4___024root___eval_debug_assertions(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_debug_assertions\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.op_valid & 0xfeU)))) {
        Verilated::overWidthError("op_valid");}
    if (VL_UNLIKELY(((vlSelfRef.op_player_id & 0xfeU)))) {
        Verilated::overWidthError("op_player_id");}
    if (VL_UNLIKELY(((vlSelfRef.op_col_id & 0xf8U)))) {
        Verilated::overWidthError("op_col_id");}
    if (VL_UNLIKELY(((vlSelfRef.re_ready & 0xfeU)))) {
        Verilated::overWidthError("re_ready");}
}
#endif  // VL_DEBUG
