// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbagh_chal__Syms.h"


VL_ATTR_COLD void Vbagh_chal___024root__trace_init_sub__TOP__bagh_chal__0(Vbagh_chal___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbagh_chal___024root__trace_init_sub__TOP__0(Vbagh_chal___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_init_sub__TOP__0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("bagh_chal", VerilatedTracePrefixType::SCOPE_MODULE);
    Vbagh_chal___024root__trace_init_sub__TOP__bagh_chal__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"op_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"op_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"op_j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"re_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"re_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"re_is_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"re_possible_ops",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"re_selectable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+12,0,"o_goats_in_hand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"o_goats_killed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_init_sub__TOP__bagh_chal__0(Vbagh_chal___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_init_sub__TOP__bagh_chal__0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+14,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"op_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"op_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"op_j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"re_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"re_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"re_is_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"re_possible_ops",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"re_selectable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+25,0,"o_goats_in_hand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"o_goats_killed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+95,0,"S_GCH_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"S_GCH_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"S_GPL_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"S_GMV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"S_GCHECK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"S_GPL_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"S_TCH_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"S_TCH_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"S_TPL_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"S_TMV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"S_TPL_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"OP_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"OP_GCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"OP_GRCHPL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"OP_GPL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"OP_TCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"OP_TRCHPL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"GOAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"TIGER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"GOAT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+107,0,"TIGER_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+27,0,"op_ready_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"re_valid_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"re_is_finished_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"re_possible_ops_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"S_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"occupied",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+34,0,"occupied_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+35,0,"whos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+36,0,"whos_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+37,0,"ci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"ci_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"cj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"cj_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"pi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"pi_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"pj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"pj_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"goats_in_hand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"goats_in_hand_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"goats_killed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"goats_killed_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"t0i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"t0i_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"t0j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"t0j_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"t1i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"t1i_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"t1j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"t1j_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"t2i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"t2i_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"t2j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"t2j_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"t3i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"t3i_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"t3j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"t3j_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"check_tiger_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"check_tiger_id_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"op_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"re_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"i_dist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"j_dist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"opij2idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"cij2idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"pij2idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"su_ci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"su_cj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+76,0,"su_o_tigers_cantmove",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"su_o_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+78,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("su", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"occupied",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+80,0,"whos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+81,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"cj",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"goats_in_hand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+85,0,"o_tigers_cantmove",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"o_update",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+95,0,"S_GCH_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"S_GCH_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"S_GPL_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"S_GMV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"S_GCHECK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"S_GPL_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"S_TCH_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"S_TCH_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"S_TPL_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"S_TMV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"S_TPL_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"GOAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"TIGER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"GOAT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+107,0,"TIGER_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+87,0,"all_vacant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+88,0,"all_goat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+89,0,"all_tiger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+90,0,"cgoat_can_goto",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+91,0,"ctiger_can_goto",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+92,0,"ctiger_can_jumpto",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+93,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+94,0,"jdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_init_top(Vbagh_chal___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_init_top\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbagh_chal___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbagh_chal___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbagh_chal___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbagh_chal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbagh_chal___024root__trace_register(Vbagh_chal___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_register\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbagh_chal___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbagh_chal___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbagh_chal___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbagh_chal___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_const_0_sub_0(Vbagh_chal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbagh_chal___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_const_0\n"); );
    // Init
    Vbagh_chal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbagh_chal___024root*>(voidSelf);
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbagh_chal___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_const_0_sub_0(Vbagh_chal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_const_0_sub_0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+95,(0U),32);
    bufp->fullIData(oldp+96,(1U),32);
    bufp->fullIData(oldp+97,(2U),32);
    bufp->fullIData(oldp+98,(3U),32);
    bufp->fullIData(oldp+99,(4U),32);
    bufp->fullIData(oldp+100,(5U),32);
    bufp->fullIData(oldp+101,(6U),32);
    bufp->fullIData(oldp+102,(7U),32);
    bufp->fullIData(oldp+103,(8U),32);
    bufp->fullIData(oldp+104,(9U),32);
    bufp->fullIData(oldp+105,(0xaU),32);
    bufp->fullIData(oldp+106,(0U),25);
    bufp->fullIData(oldp+107,(0x1ffffffU),25);
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_full_0_sub_0(Vbagh_chal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbagh_chal___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_full_0\n"); );
    // Init
    Vbagh_chal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbagh_chal___024root*>(voidSelf);
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbagh_chal___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_full_0_sub_0(Vbagh_chal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbagh_chal___024root__trace_full_0_sub_0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.op_ready));
    bufp->fullBit(oldp+4,(vlSelfRef.op_valid));
    bufp->fullCData(oldp+5,(vlSelfRef.op_i),5);
    bufp->fullCData(oldp+6,(vlSelfRef.op_j),5);
    bufp->fullBit(oldp+7,(vlSelfRef.re_ready));
    bufp->fullBit(oldp+8,(vlSelfRef.re_valid));
    bufp->fullBit(oldp+9,(vlSelfRef.re_is_finished));
    bufp->fullCData(oldp+10,(vlSelfRef.re_possible_ops),4);
    bufp->fullIData(oldp+11,(vlSelfRef.re_selectable),25);
    bufp->fullCData(oldp+12,(vlSelfRef.o_goats_in_hand),5);
    bufp->fullCData(oldp+13,(vlSelfRef.o_goats_killed),5);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__bagh_chal.clk));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__bagh_chal.rst_n));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__bagh_chal.op_ready));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__bagh_chal.op_valid));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__bagh_chal.op_i),5);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__bagh_chal.op_j),5);
    bufp->fullBit(oldp+20,(vlSymsp->TOP__bagh_chal.re_ready));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__bagh_chal.re_valid));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__bagh_chal.re_is_finished));
    bufp->fullCData(oldp+23,(vlSymsp->TOP__bagh_chal.re_possible_ops),4);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__bagh_chal.re_selectable),25);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__bagh_chal.o_goats_in_hand),5);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__bagh_chal.o_goats_killed),5);
    bufp->fullBit(oldp+27,(vlSymsp->TOP__bagh_chal.op_ready_nxt));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__bagh_chal.re_valid_nxt));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__bagh_chal.re_is_finished_nxt));
    bufp->fullCData(oldp+30,(vlSymsp->TOP__bagh_chal.re_possible_ops_nxt),4);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__bagh_chal.S),4);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__bagh_chal.S_nxt),4);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__bagh_chal.occupied),25);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__bagh_chal.occupied_nxt),25);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__bagh_chal.whos),25);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__bagh_chal.whos_nxt),25);
    bufp->fullCData(oldp+37,(vlSymsp->TOP__bagh_chal.ci),5);
    bufp->fullCData(oldp+38,(vlSymsp->TOP__bagh_chal.ci_nxt),5);
    bufp->fullCData(oldp+39,(vlSymsp->TOP__bagh_chal.cj),5);
    bufp->fullCData(oldp+40,(vlSymsp->TOP__bagh_chal.cj_nxt),5);
    bufp->fullCData(oldp+41,(vlSymsp->TOP__bagh_chal.pi),5);
    bufp->fullCData(oldp+42,(vlSymsp->TOP__bagh_chal.pi_nxt),5);
    bufp->fullCData(oldp+43,(vlSymsp->TOP__bagh_chal.pj),5);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__bagh_chal.pj_nxt),5);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__bagh_chal.goats_in_hand),5);
    bufp->fullCData(oldp+46,(vlSymsp->TOP__bagh_chal.goats_in_hand_nxt),5);
    bufp->fullCData(oldp+47,(vlSymsp->TOP__bagh_chal.goats_killed),5);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__bagh_chal.goats_killed_nxt),5);
    bufp->fullCData(oldp+49,(vlSymsp->TOP__bagh_chal.t0i),5);
    bufp->fullCData(oldp+50,(vlSymsp->TOP__bagh_chal.t0i_nxt),5);
    bufp->fullCData(oldp+51,(vlSymsp->TOP__bagh_chal.t0j),5);
    bufp->fullCData(oldp+52,(vlSymsp->TOP__bagh_chal.t0j_nxt),5);
    bufp->fullCData(oldp+53,(vlSymsp->TOP__bagh_chal.t1i),5);
    bufp->fullCData(oldp+54,(vlSymsp->TOP__bagh_chal.t1i_nxt),5);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__bagh_chal.t1j),5);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__bagh_chal.t1j_nxt),5);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__bagh_chal.t2i),5);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__bagh_chal.t2i_nxt),5);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__bagh_chal.t2j),5);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__bagh_chal.t2j_nxt),5);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__bagh_chal.t3i),5);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__bagh_chal.t3i_nxt),5);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__bagh_chal.t3j),5);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__bagh_chal.t3j_nxt),5);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__bagh_chal.check_tiger_id),4);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__bagh_chal.check_tiger_id_nxt),4);
    bufp->fullBit(oldp+67,(vlSymsp->TOP__bagh_chal.op_fire));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__bagh_chal.re_fire));
    bufp->fullCData(oldp+69,(vlSymsp->TOP__bagh_chal.i_dist),5);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__bagh_chal.j_dist),5);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__bagh_chal.opij2idx),5);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__bagh_chal.cij2idx),5);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__bagh_chal.pij2idx),5);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__bagh_chal.su_ci),5);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__bagh_chal.su_cj),5);
    bufp->fullBit(oldp+76,(vlSymsp->TOP__bagh_chal.su_o_tigers_cantmove));
    bufp->fullIData(oldp+77,(vlSymsp->TOP__bagh_chal.su_o_update),25);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__bagh_chal.idx),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__bagh_chal.su__DOT__occupied),25);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__bagh_chal.su__DOT__whos),25);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__bagh_chal.su__DOT__S),4);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__bagh_chal.su__DOT__ci),5);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__bagh_chal.su__DOT__cj),5);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__bagh_chal.su__DOT__goats_in_hand),5);
    bufp->fullBit(oldp+85,(vlSymsp->TOP__bagh_chal.su__DOT__o_tigers_cantmove));
    bufp->fullIData(oldp+86,(vlSymsp->TOP__bagh_chal.su__DOT__o_update),25);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__bagh_chal.su__DOT__all_vacant),25);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__bagh_chal.su__DOT__all_goat),25);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__bagh_chal.su__DOT__all_tiger),25);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__bagh_chal.su__DOT__cgoat_can_goto),25);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__bagh_chal.su__DOT__ctiger_can_goto),25);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__bagh_chal.su__DOT__ctiger_can_jumpto),25);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__bagh_chal.su__DOT__idx),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__bagh_chal.su__DOT__jdx),32);
}
