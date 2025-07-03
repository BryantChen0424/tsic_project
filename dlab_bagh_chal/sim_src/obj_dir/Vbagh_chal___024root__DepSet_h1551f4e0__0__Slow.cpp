// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbagh_chal.h for the primary calling header

#include "Vbagh_chal__pch.h"
#include "Vbagh_chal___024root.h"

VL_ATTR_COLD void Vbagh_chal___024root___eval_final(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_final\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__stl(Vbagh_chal___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbagh_chal___024root___eval_phase__stl(Vbagh_chal___024root* vlSelf);

VL_ATTR_COLD void Vbagh_chal___024root___eval_settle(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_settle\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbagh_chal___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/bagh_chal.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbagh_chal___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__stl(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___dump_triggers__stl\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vbagh_chal___024root___eval_triggers__stl(Vbagh_chal___024root* vlSelf);
VL_ATTR_COLD void Vbagh_chal___024root___eval_stl(Vbagh_chal___024root* vlSelf);

VL_ATTR_COLD bool Vbagh_chal___024root___eval_phase__stl(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_phase__stl\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbagh_chal___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbagh_chal___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__ico(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___dump_triggers__ico\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__act(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___dump_triggers__act\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge bagh_chal.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge bagh_chal.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__nba(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___dump_triggers__nba\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge bagh_chal.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge bagh_chal.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbagh_chal___024root___ctor_var_reset(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___ctor_var_reset\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->op_ready = VL_RAND_RESET_I(1);
    vlSelf->op_valid = VL_RAND_RESET_I(1);
    vlSelf->op_i = VL_RAND_RESET_I(5);
    vlSelf->op_j = VL_RAND_RESET_I(5);
    vlSelf->re_ready = VL_RAND_RESET_I(1);
    vlSelf->re_valid = VL_RAND_RESET_I(1);
    vlSelf->re_is_finished = VL_RAND_RESET_I(1);
    vlSelf->re_possible_ops = VL_RAND_RESET_I(4);
    vlSelf->re_selectable = VL_RAND_RESET_I(25);
    vlSelf->o_goats_in_hand = VL_RAND_RESET_I(5);
    vlSelf->o_goats_killed = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__bagh_chal__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__bagh_chal__rst_n__0 = VL_RAND_RESET_I(1);
}
