// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect4.h for the primary calling header

#include "Vconnect4__pch.h"
#include "Vconnect4__Syms.h"
#include "Vconnect4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__ico(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG

void Vconnect4___024root___eval_triggers__ico(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_triggers__ico\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconnect4___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vconnect4_connect4___ico_sequent__TOP__connect4__0(Vconnect4_connect4* vlSelf);
void Vconnect4___024root___ico_sequent__TOP__0(Vconnect4___024root* vlSelf);
void Vconnect4_connect4___ico_sequent__TOP__connect4__1(Vconnect4_connect4* vlSelf);

void Vconnect4___024root___eval_ico(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_ico\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vconnect4_connect4___ico_sequent__TOP__connect4__0((&vlSymsp->TOP__connect4));
        Vconnect4___024root___ico_sequent__TOP__0(vlSelf);
        Vconnect4_connect4___ico_sequent__TOP__connect4__1((&vlSymsp->TOP__connect4));
    }
}

VL_INLINE_OPT void Vconnect4___024root___ico_sequent__TOP__0(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___ico_sequent__TOP__0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__connect4.rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__connect4.clk = vlSelfRef.clk;
    vlSymsp->TOP__connect4.re_ready = vlSelfRef.re_ready;
    vlSymsp->TOP__connect4.op_col_id = vlSelfRef.op_col_id;
    vlSymsp->TOP__connect4.op_player_id = vlSelfRef.op_player_id;
    vlSymsp->TOP__connect4.op_valid = vlSelfRef.op_valid;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__act(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG

void Vconnect4___024root___eval_triggers__act(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_triggers__act\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__connect4.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__connect4__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSymsp->TOP__connect4.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__connect4__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__connect4__clk__0 
        = vlSymsp->TOP__connect4.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__connect4__rst_n__0 
        = vlSymsp->TOP__connect4.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconnect4___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vconnect4_connect4___nba_sequent__TOP__connect4__0(Vconnect4_connect4* vlSelf);
void Vconnect4___024root___nba_sequent__TOP__0(Vconnect4___024root* vlSelf);

void Vconnect4___024root___eval_nba(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_nba\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconnect4_connect4___nba_sequent__TOP__connect4__0((&vlSymsp->TOP__connect4));
        Vconnect4___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vconnect4___024root___nba_sequent__TOP__0(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___nba_sequent__TOP__0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.re_tie = vlSymsp->TOP__connect4.re_tie;
    vlSelfRef.re_is_finished = vlSymsp->TOP__connect4.re_is_finished;
    vlSelfRef.re_winner = vlSymsp->TOP__connect4.re_winner;
    vlSelfRef.re_valid = vlSymsp->TOP__connect4.re_valid;
    vlSelfRef.op_ready = vlSymsp->TOP__connect4.op_ready;
    vlSelfRef.re_err = vlSymsp->TOP__connect4.re_err;
}
