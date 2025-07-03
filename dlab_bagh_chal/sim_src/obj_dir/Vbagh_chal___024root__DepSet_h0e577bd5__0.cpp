// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbagh_chal.h for the primary calling header

#include "Vbagh_chal__pch.h"
#include "Vbagh_chal__Syms.h"
#include "Vbagh_chal___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__ico(Vbagh_chal___024root* vlSelf);
#endif  // VL_DEBUG

void Vbagh_chal___024root___eval_triggers__ico(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_triggers__ico\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbagh_chal___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vbagh_chal___024root___ico_sequent__TOP__0(Vbagh_chal___024root* vlSelf);
void Vbagh_chal_bagh_chal___ico_sequent__TOP__bagh_chal__0(Vbagh_chal_bagh_chal* vlSelf);
void Vbagh_chal___024root___ico_sequent__TOP__1(Vbagh_chal___024root* vlSelf);

void Vbagh_chal___024root___eval_ico(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_ico\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbagh_chal___024root___ico_sequent__TOP__0(vlSelf);
        Vbagh_chal_bagh_chal___ico_sequent__TOP__bagh_chal__0((&vlSymsp->TOP__bagh_chal));
        Vbagh_chal___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vbagh_chal___024root___ico_sequent__TOP__0(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___ico_sequent__TOP__0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__bagh_chal.rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__bagh_chal.clk = vlSelfRef.clk;
    vlSymsp->TOP__bagh_chal.re_ready = vlSelfRef.re_ready;
    vlSymsp->TOP__bagh_chal.op_j = vlSelfRef.op_j;
    vlSymsp->TOP__bagh_chal.op_i = vlSelfRef.op_i;
    vlSymsp->TOP__bagh_chal.op_valid = vlSelfRef.op_valid;
}

VL_INLINE_OPT void Vbagh_chal___024root___ico_sequent__TOP__1(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___ico_sequent__TOP__1\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.re_selectable = vlSymsp->TOP__bagh_chal.re_selectable;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbagh_chal___024root___dump_triggers__act(Vbagh_chal___024root* vlSelf);
#endif  // VL_DEBUG

void Vbagh_chal___024root___eval_triggers__act(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_triggers__act\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__bagh_chal.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bagh_chal__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSymsp->TOP__bagh_chal.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bagh_chal__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__bagh_chal__clk__0 
        = vlSymsp->TOP__bagh_chal.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bagh_chal__rst_n__0 
        = vlSymsp->TOP__bagh_chal.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbagh_chal___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vbagh_chal_bagh_chal___nba_sequent__TOP__bagh_chal__0(Vbagh_chal_bagh_chal* vlSelf);
void Vbagh_chal___024root___nba_sequent__TOP__0(Vbagh_chal___024root* vlSelf);

void Vbagh_chal___024root___eval_nba(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___eval_nba\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbagh_chal_bagh_chal___nba_sequent__TOP__bagh_chal__0((&vlSymsp->TOP__bagh_chal));
        Vbagh_chal___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbagh_chal___024root___nba_sequent__TOP__0(Vbagh_chal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root___nba_sequent__TOP__0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.re_possible_ops = vlSymsp->TOP__bagh_chal.re_possible_ops;
    vlSelfRef.re_is_finished = vlSymsp->TOP__bagh_chal.re_is_finished;
    vlSelfRef.op_ready = vlSymsp->TOP__bagh_chal.op_ready;
    vlSelfRef.re_valid = vlSymsp->TOP__bagh_chal.re_valid;
    vlSelfRef.o_goats_killed = vlSymsp->TOP__bagh_chal.o_goats_killed;
    vlSelfRef.o_goats_in_hand = vlSymsp->TOP__bagh_chal.o_goats_in_hand;
    vlSelfRef.re_selectable = vlSymsp->TOP__bagh_chal.re_selectable;
}
