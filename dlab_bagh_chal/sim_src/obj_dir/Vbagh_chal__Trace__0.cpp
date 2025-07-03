// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbagh_chal__Syms.h"


void Vbagh_chal___024root__trace_chg_0_sub_0(Vbagh_chal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbagh_chal___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_chg_0\n"); );
    // Init
    Vbagh_chal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbagh_chal___024root*>(voidSelf);
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbagh_chal___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbagh_chal___024root__trace_chg_0_sub_0(Vbagh_chal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_chg_0_sub_0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.op_ready));
    bufp->chgBit(oldp+3,(vlSelfRef.op_valid));
    bufp->chgCData(oldp+4,(vlSelfRef.op_i),5);
    bufp->chgCData(oldp+5,(vlSelfRef.op_j),5);
    bufp->chgBit(oldp+6,(vlSelfRef.re_ready));
    bufp->chgBit(oldp+7,(vlSelfRef.re_valid));
    bufp->chgBit(oldp+8,(vlSelfRef.re_is_finished));
    bufp->chgCData(oldp+9,(vlSelfRef.re_possible_ops),4);
    bufp->chgIData(oldp+10,(vlSelfRef.re_selectable),25);
    bufp->chgCData(oldp+11,(vlSelfRef.o_goats_in_hand),5);
    bufp->chgCData(oldp+12,(vlSelfRef.o_goats_killed),5);
    bufp->chgBit(oldp+13,(vlSymsp->TOP__bagh_chal.clk));
    bufp->chgBit(oldp+14,(vlSymsp->TOP__bagh_chal.rst_n));
    bufp->chgBit(oldp+15,(vlSymsp->TOP__bagh_chal.op_ready));
    bufp->chgBit(oldp+16,(vlSymsp->TOP__bagh_chal.op_valid));
    bufp->chgCData(oldp+17,(vlSymsp->TOP__bagh_chal.op_i),5);
    bufp->chgCData(oldp+18,(vlSymsp->TOP__bagh_chal.op_j),5);
    bufp->chgBit(oldp+19,(vlSymsp->TOP__bagh_chal.re_ready));
    bufp->chgBit(oldp+20,(vlSymsp->TOP__bagh_chal.re_valid));
    bufp->chgBit(oldp+21,(vlSymsp->TOP__bagh_chal.re_is_finished));
    bufp->chgCData(oldp+22,(vlSymsp->TOP__bagh_chal.re_possible_ops),4);
    bufp->chgIData(oldp+23,(vlSymsp->TOP__bagh_chal.re_selectable),25);
    bufp->chgCData(oldp+24,(vlSymsp->TOP__bagh_chal.o_goats_in_hand),5);
    bufp->chgCData(oldp+25,(vlSymsp->TOP__bagh_chal.o_goats_killed),5);
    bufp->chgBit(oldp+26,(vlSymsp->TOP__bagh_chal.op_ready_nxt));
    bufp->chgBit(oldp+27,(vlSymsp->TOP__bagh_chal.re_valid_nxt));
    bufp->chgBit(oldp+28,(vlSymsp->TOP__bagh_chal.re_is_finished_nxt));
    bufp->chgCData(oldp+29,(vlSymsp->TOP__bagh_chal.re_possible_ops_nxt),4);
    bufp->chgCData(oldp+30,(vlSymsp->TOP__bagh_chal.S),4);
    bufp->chgCData(oldp+31,(vlSymsp->TOP__bagh_chal.S_nxt),4);
    bufp->chgIData(oldp+32,(vlSymsp->TOP__bagh_chal.occupied),25);
    bufp->chgIData(oldp+33,(vlSymsp->TOP__bagh_chal.occupied_nxt),25);
    bufp->chgIData(oldp+34,(vlSymsp->TOP__bagh_chal.whos),25);
    bufp->chgIData(oldp+35,(vlSymsp->TOP__bagh_chal.whos_nxt),25);
    bufp->chgCData(oldp+36,(vlSymsp->TOP__bagh_chal.ci),5);
    bufp->chgCData(oldp+37,(vlSymsp->TOP__bagh_chal.ci_nxt),5);
    bufp->chgCData(oldp+38,(vlSymsp->TOP__bagh_chal.cj),5);
    bufp->chgCData(oldp+39,(vlSymsp->TOP__bagh_chal.cj_nxt),5);
    bufp->chgCData(oldp+40,(vlSymsp->TOP__bagh_chal.pi),5);
    bufp->chgCData(oldp+41,(vlSymsp->TOP__bagh_chal.pi_nxt),5);
    bufp->chgCData(oldp+42,(vlSymsp->TOP__bagh_chal.pj),5);
    bufp->chgCData(oldp+43,(vlSymsp->TOP__bagh_chal.pj_nxt),5);
    bufp->chgCData(oldp+44,(vlSymsp->TOP__bagh_chal.goats_in_hand),5);
    bufp->chgCData(oldp+45,(vlSymsp->TOP__bagh_chal.goats_in_hand_nxt),5);
    bufp->chgCData(oldp+46,(vlSymsp->TOP__bagh_chal.goats_killed),5);
    bufp->chgCData(oldp+47,(vlSymsp->TOP__bagh_chal.goats_killed_nxt),5);
    bufp->chgCData(oldp+48,(vlSymsp->TOP__bagh_chal.t0i),5);
    bufp->chgCData(oldp+49,(vlSymsp->TOP__bagh_chal.t0i_nxt),5);
    bufp->chgCData(oldp+50,(vlSymsp->TOP__bagh_chal.t0j),5);
    bufp->chgCData(oldp+51,(vlSymsp->TOP__bagh_chal.t0j_nxt),5);
    bufp->chgCData(oldp+52,(vlSymsp->TOP__bagh_chal.t1i),5);
    bufp->chgCData(oldp+53,(vlSymsp->TOP__bagh_chal.t1i_nxt),5);
    bufp->chgCData(oldp+54,(vlSymsp->TOP__bagh_chal.t1j),5);
    bufp->chgCData(oldp+55,(vlSymsp->TOP__bagh_chal.t1j_nxt),5);
    bufp->chgCData(oldp+56,(vlSymsp->TOP__bagh_chal.t2i),5);
    bufp->chgCData(oldp+57,(vlSymsp->TOP__bagh_chal.t2i_nxt),5);
    bufp->chgCData(oldp+58,(vlSymsp->TOP__bagh_chal.t2j),5);
    bufp->chgCData(oldp+59,(vlSymsp->TOP__bagh_chal.t2j_nxt),5);
    bufp->chgCData(oldp+60,(vlSymsp->TOP__bagh_chal.t3i),5);
    bufp->chgCData(oldp+61,(vlSymsp->TOP__bagh_chal.t3i_nxt),5);
    bufp->chgCData(oldp+62,(vlSymsp->TOP__bagh_chal.t3j),5);
    bufp->chgCData(oldp+63,(vlSymsp->TOP__bagh_chal.t3j_nxt),5);
    bufp->chgCData(oldp+64,(vlSymsp->TOP__bagh_chal.check_tiger_id),4);
    bufp->chgCData(oldp+65,(vlSymsp->TOP__bagh_chal.check_tiger_id_nxt),4);
    bufp->chgBit(oldp+66,(vlSymsp->TOP__bagh_chal.op_fire));
    bufp->chgBit(oldp+67,(vlSymsp->TOP__bagh_chal.re_fire));
    bufp->chgCData(oldp+68,(vlSymsp->TOP__bagh_chal.i_dist),5);
    bufp->chgCData(oldp+69,(vlSymsp->TOP__bagh_chal.j_dist),5);
    bufp->chgCData(oldp+70,(vlSymsp->TOP__bagh_chal.opij2idx),5);
    bufp->chgCData(oldp+71,(vlSymsp->TOP__bagh_chal.cij2idx),5);
    bufp->chgCData(oldp+72,(vlSymsp->TOP__bagh_chal.pij2idx),5);
    bufp->chgCData(oldp+73,(vlSymsp->TOP__bagh_chal.su_ci),5);
    bufp->chgCData(oldp+74,(vlSymsp->TOP__bagh_chal.su_cj),5);
    bufp->chgBit(oldp+75,(vlSymsp->TOP__bagh_chal.su_o_tigers_cantmove));
    bufp->chgIData(oldp+76,(vlSymsp->TOP__bagh_chal.su_o_update),25);
    bufp->chgIData(oldp+77,(vlSymsp->TOP__bagh_chal.idx),32);
    bufp->chgIData(oldp+78,(vlSymsp->TOP__bagh_chal.su__DOT__occupied),25);
    bufp->chgIData(oldp+79,(vlSymsp->TOP__bagh_chal.su__DOT__whos),25);
    bufp->chgCData(oldp+80,(vlSymsp->TOP__bagh_chal.su__DOT__S),4);
    bufp->chgCData(oldp+81,(vlSymsp->TOP__bagh_chal.su__DOT__ci),5);
    bufp->chgCData(oldp+82,(vlSymsp->TOP__bagh_chal.su__DOT__cj),5);
    bufp->chgCData(oldp+83,(vlSymsp->TOP__bagh_chal.su__DOT__goats_in_hand),5);
    bufp->chgBit(oldp+84,(vlSymsp->TOP__bagh_chal.su__DOT__o_tigers_cantmove));
    bufp->chgIData(oldp+85,(vlSymsp->TOP__bagh_chal.su__DOT__o_update),25);
    bufp->chgIData(oldp+86,(vlSymsp->TOP__bagh_chal.su__DOT__all_vacant),25);
    bufp->chgIData(oldp+87,(vlSymsp->TOP__bagh_chal.su__DOT__all_goat),25);
    bufp->chgIData(oldp+88,(vlSymsp->TOP__bagh_chal.su__DOT__all_tiger),25);
    bufp->chgIData(oldp+89,(vlSymsp->TOP__bagh_chal.su__DOT__cgoat_can_goto),25);
    bufp->chgIData(oldp+90,(vlSymsp->TOP__bagh_chal.su__DOT__ctiger_can_goto),25);
    bufp->chgIData(oldp+91,(vlSymsp->TOP__bagh_chal.su__DOT__ctiger_can_jumpto),25);
    bufp->chgIData(oldp+92,(vlSymsp->TOP__bagh_chal.su__DOT__idx),32);
    bufp->chgIData(oldp+93,(vlSymsp->TOP__bagh_chal.su__DOT__jdx),32);
}

void Vbagh_chal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_cleanup\n"); );
    // Init
    Vbagh_chal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbagh_chal___024root*>(voidSelf);
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
