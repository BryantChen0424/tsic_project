// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect4.h for the primary calling header

#include "Vconnect4__pch.h"
#include "Vconnect4__Syms.h"
#include "Vconnect4___024root.h"

VL_ATTR_COLD void Vconnect4___024root___eval_static(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_static\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__connect4__clk__0 
        = vlSymsp->TOP__connect4.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__connect4__rst_n__0 
        = vlSymsp->TOP__connect4.rst_n;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconnect4___024root___dump_triggers__stl(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconnect4___024root___eval_triggers__stl(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_triggers__stl\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconnect4___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vconnect4___024root___stl_sequent__TOP__0(Vconnect4___024root* vlSelf);
VL_ATTR_COLD void Vconnect4_connect4___stl_sequent__TOP__connect4__0(Vconnect4_connect4* vlSelf);

VL_ATTR_COLD void Vconnect4___024root___eval_stl(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___eval_stl\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vconnect4___024root___stl_sequent__TOP__0(vlSelf);
        Vconnect4_connect4___stl_sequent__TOP__connect4__0((&vlSymsp->TOP__connect4));
    }
}

VL_ATTR_COLD void Vconnect4___024root___stl_sequent__TOP__0(Vconnect4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root___stl_sequent__TOP__0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.re_tie = vlSymsp->TOP__connect4.re_tie;
    vlSelfRef.re_winner = vlSymsp->TOP__connect4.re_winner;
    vlSelfRef.re_is_finished = vlSymsp->TOP__connect4.re_is_finished;
    vlSelfRef.re_err = vlSymsp->TOP__connect4.re_err;
    vlSelfRef.re_valid = vlSymsp->TOP__connect4.re_valid;
    vlSelfRef.op_ready = vlSymsp->TOP__connect4.op_ready;
    vlSymsp->TOP__connect4.rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__connect4.clk = vlSelfRef.clk;
    vlSymsp->TOP__connect4.re_ready = vlSelfRef.re_ready;
    vlSymsp->TOP__connect4.op_col_id = vlSelfRef.op_col_id;
    vlSymsp->TOP__connect4.op_player_id = vlSelfRef.op_player_id;
    vlSymsp->TOP__connect4.op_valid = vlSelfRef.op_valid;
}
