// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect4.h for the primary calling header

#include "Vconnect4__pch.h"
#include "Vconnect4___024root.h"

VL_ATTR_COLD void Vconnect4___024root___eval_initial(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_initial\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vconnect4___024root___eval_final(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_final\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__stl(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconnect4___024root___eval_phase__stl(Vconnect4___024root* vlSelf);

VL_ATTR_COLD void Vconnect4___024root___eval_settle(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_settle\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vconnect4___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/connect4.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconnect4___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__stl(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___dump_triggers__stl\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconnect4___024root___eval_triggers__stl(Vconnect4___024root* vlSelf);
VL_ATTR_COLD void Vconnect4___024root___eval_stl(Vconnect4___024root* vlSelf);

VL_ATTR_COLD bool Vconnect4___024root___eval_phase__stl(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_phase__stl\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconnect4___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vconnect4___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__ico(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___dump_triggers__ico\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__act(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___dump_triggers__act\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge connect4.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge connect4.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__nba(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___dump_triggers__nba\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge connect4.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge connect4.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconnect4___024root___ctor_var_reset(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___ctor_var_reset\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->op_ready = VL_RAND_RESET_I(1);
    vlSelf->op_valid = VL_RAND_RESET_I(1);
    vlSelf->op_player_id = VL_RAND_RESET_I(1);
    vlSelf->op_col_id = VL_RAND_RESET_I(3);
    vlSelf->re_ready = VL_RAND_RESET_I(1);
    vlSelf->re_valid = VL_RAND_RESET_I(1);
    vlSelf->re_err = VL_RAND_RESET_I(1);
    vlSelf->re_is_finished = VL_RAND_RESET_I(1);
    vlSelf->re_winner = VL_RAND_RESET_I(1);
    vlSelf->re_tie = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__connect4__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__connect4__rst_n__0 = VL_RAND_RESET_I(1);
}
