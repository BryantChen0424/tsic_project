// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconnect4__Syms.h"


void Vconnect4___024root__trace_chg_0_sub_0(Vconnect4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconnect4___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_chg_0\n"); );
    // Init
    Vconnect4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect4___024root*>(voidSelf);
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconnect4___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconnect4___024root__trace_chg_0_sub_0(Vconnect4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_chg_0_sub_0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.op_ready));
    bufp->chgBit(oldp+3,(vlSelfRef.op_valid));
    bufp->chgBit(oldp+4,(vlSelfRef.op_player_id));
    bufp->chgCData(oldp+5,(vlSelfRef.op_col_id),3);
    bufp->chgBit(oldp+6,(vlSelfRef.re_ready));
    bufp->chgBit(oldp+7,(vlSelfRef.re_valid));
    bufp->chgBit(oldp+8,(vlSelfRef.re_err));
    bufp->chgBit(oldp+9,(vlSelfRef.re_is_finished));
    bufp->chgBit(oldp+10,(vlSelfRef.re_winner));
    bufp->chgBit(oldp+11,(vlSelfRef.re_tie));
    bufp->chgBit(oldp+12,(vlSymsp->TOP__connect4.clk));
    bufp->chgBit(oldp+13,(vlSymsp->TOP__connect4.rst_n));
    bufp->chgBit(oldp+14,(vlSymsp->TOP__connect4.op_ready));
    bufp->chgBit(oldp+15,(vlSymsp->TOP__connect4.op_valid));
    bufp->chgBit(oldp+16,(vlSymsp->TOP__connect4.op_player_id));
    bufp->chgCData(oldp+17,(vlSymsp->TOP__connect4.op_col_id),3);
    bufp->chgBit(oldp+18,(vlSymsp->TOP__connect4.re_ready));
    bufp->chgBit(oldp+19,(vlSymsp->TOP__connect4.re_valid));
    bufp->chgBit(oldp+20,(vlSymsp->TOP__connect4.re_err));
    bufp->chgBit(oldp+21,(vlSymsp->TOP__connect4.re_is_finished));
    bufp->chgBit(oldp+22,(vlSymsp->TOP__connect4.re_winner));
    bufp->chgBit(oldp+23,(vlSymsp->TOP__connect4.re_tie));
    bufp->chgBit(oldp+24,(vlSymsp->TOP__connect4.op_ready_nxt));
    bufp->chgBit(oldp+25,(vlSymsp->TOP__connect4.re_valid_nxt));
    bufp->chgBit(oldp+26,(vlSymsp->TOP__connect4.re_err_nxt));
    bufp->chgBit(oldp+27,(vlSymsp->TOP__connect4.re_is_finished_nxt));
    bufp->chgBit(oldp+28,(vlSymsp->TOP__connect4.re_winner_nxt));
    bufp->chgBit(oldp+29,(vlSymsp->TOP__connect4.re_tie_nxt));
    bufp->chgCData(oldp+30,(vlSymsp->TOP__connect4.S),4);
    bufp->chgCData(oldp+31,(vlSymsp->TOP__connect4.S_nxt),4);
    bufp->chgQData(oldp+32,(vlSymsp->TOP__connect4.occupied),42);
    bufp->chgQData(oldp+34,(vlSymsp->TOP__connect4.whos),42);
    bufp->chgQData(oldp+36,(vlSymsp->TOP__connect4.occupied_nxt),42);
    bufp->chgQData(oldp+38,(vlSymsp->TOP__connect4.whos_nxt),42);
    bufp->chgBit(oldp+40,(vlSymsp->TOP__connect4.player_id));
    bufp->chgBit(oldp+41,(vlSymsp->TOP__connect4.player_id_nxt));
    bufp->chgCData(oldp+42,(vlSymsp->TOP__connect4.col_id),3);
    bufp->chgCData(oldp+43,(vlSymsp->TOP__connect4.col_id_nxt),3);
    bufp->chgCData(oldp+44,(vlSymsp->TOP__connect4.row_id),3);
    bufp->chgCData(oldp+45,(vlSymsp->TOP__connect4.row_id_nxt),3);
    bufp->chgBit(oldp+46,(vlSymsp->TOP__connect4.wj_op_ready));
    bufp->chgBit(oldp+47,(vlSymsp->TOP__connect4.wj_op_valid));
    bufp->chgBit(oldp+48,(vlSymsp->TOP__connect4.wj_op_valid_nxt));
    bufp->chgBit(oldp+49,(vlSymsp->TOP__connect4.wj_re_ready));
    bufp->chgBit(oldp+50,(vlSymsp->TOP__connect4.wj_re_ready_nxt));
    bufp->chgBit(oldp+51,(vlSymsp->TOP__connect4.wj_re_valid));
    bufp->chgBit(oldp+52,(vlSymsp->TOP__connect4.wj_re_is_finished));
    bufp->chgBit(oldp+53,(vlSymsp->TOP__connect4.op_fire));
    bufp->chgBit(oldp+54,(vlSymsp->TOP__connect4.re_fire));
    bufp->chgBit(oldp+55,(vlSymsp->TOP__connect4.wj_op_fire));
    bufp->chgBit(oldp+56,(vlSymsp->TOP__connect4.wj_re_fire));
    bufp->chgCData(oldp+57,(vlSymsp->TOP__connect4.col_full),7);
    bufp->chgIData(oldp+58,(vlSymsp->TOP__connect4.i),32);
    bufp->chgBit(oldp+59,(vlSymsp->TOP__connect4.wj__DOT__clk));
    bufp->chgBit(oldp+60,(vlSymsp->TOP__connect4.wj__DOT__rst_n));
    bufp->chgQData(oldp+61,(vlSymsp->TOP__connect4.wj__DOT__occupied),42);
    bufp->chgQData(oldp+63,(vlSymsp->TOP__connect4.wj__DOT__whos),42);
    bufp->chgBit(oldp+65,(vlSymsp->TOP__connect4.wj__DOT__op_ready));
    bufp->chgBit(oldp+66,(vlSymsp->TOP__connect4.wj__DOT__op_valid));
    bufp->chgBit(oldp+67,(vlSymsp->TOP__connect4.wj__DOT__re_ready));
    bufp->chgBit(oldp+68,(vlSymsp->TOP__connect4.wj__DOT__re_valid));
    bufp->chgBit(oldp+69,(vlSymsp->TOP__connect4.wj__DOT__re_is_finished));
    bufp->chgBit(oldp+70,(vlSymsp->TOP__connect4.wj__DOT__op_ready_nxt));
    bufp->chgBit(oldp+71,(vlSymsp->TOP__connect4.wj__DOT__re_valid_nxt));
    bufp->chgBit(oldp+72,(vlSymsp->TOP__connect4.wj__DOT__re_is_finished_nxt));
    bufp->chgCData(oldp+73,(vlSymsp->TOP__connect4.wj__DOT__S),4);
    bufp->chgCData(oldp+74,(vlSymsp->TOP__connect4.wj__DOT__S_nxt),4);
    bufp->chgCData(oldp+75,(vlSymsp->TOP__connect4.wj__DOT__rlim),3);
    bufp->chgCData(oldp+76,(vlSymsp->TOP__connect4.wj__DOT__rlim_nxt),3);
    bufp->chgCData(oldp+77,(vlSymsp->TOP__connect4.wj__DOT__llim),3);
    bufp->chgCData(oldp+78,(vlSymsp->TOP__connect4.wj__DOT__llim_nxt),3);
    bufp->chgCData(oldp+79,(vlSymsp->TOP__connect4.wj__DOT__tlim),3);
    bufp->chgCData(oldp+80,(vlSymsp->TOP__connect4.wj__DOT__tlim_nxt),3);
    bufp->chgCData(oldp+81,(vlSymsp->TOP__connect4.wj__DOT__blim),3);
    bufp->chgCData(oldp+82,(vlSymsp->TOP__connect4.wj__DOT__blim_nxt),3);
    bufp->chgCData(oldp+83,(vlSymsp->TOP__connect4.wj__DOT__c),3);
    bufp->chgCData(oldp+84,(vlSymsp->TOP__connect4.wj__DOT__c_nxt),3);
    bufp->chgCData(oldp+85,(vlSymsp->TOP__connect4.wj__DOT__r),3);
    bufp->chgCData(oldp+86,(vlSymsp->TOP__connect4.wj__DOT__r_nxt),3);
    bufp->chgBit(oldp+87,(vlSymsp->TOP__connect4.wj__DOT__op_fire));
    bufp->chgBit(oldp+88,(vlSymsp->TOP__connect4.wj__DOT__re_fire));
    bufp->chgBit(oldp+89,(vlSymsp->TOP__connect4.wj__DOT__occupied_all));
    bufp->chgBit(oldp+90,(vlSymsp->TOP__connect4.wj__DOT__whos_all));
    bufp->chgCData(oldp+91,(vlSymsp->TOP__connect4.wj__DOT__c0),3);
    bufp->chgCData(oldp+92,(vlSymsp->TOP__connect4.wj__DOT__c1),3);
    bufp->chgCData(oldp+93,(vlSymsp->TOP__connect4.wj__DOT__c2),3);
    bufp->chgCData(oldp+94,(vlSymsp->TOP__connect4.wj__DOT__c3),3);
    bufp->chgCData(oldp+95,(vlSymsp->TOP__connect4.wj__DOT__r0),3);
    bufp->chgCData(oldp+96,(vlSymsp->TOP__connect4.wj__DOT__r1),3);
    bufp->chgCData(oldp+97,(vlSymsp->TOP__connect4.wj__DOT__r2),3);
    bufp->chgCData(oldp+98,(vlSymsp->TOP__connect4.wj__DOT__r3),3);
}

void Vconnect4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_cleanup\n"); );
    // Init
    Vconnect4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect4___024root*>(voidSelf);
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
