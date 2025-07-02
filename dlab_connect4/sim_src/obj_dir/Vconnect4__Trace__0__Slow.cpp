// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconnect4__Syms.h"


VL_ATTR_COLD void Vconnect4___024root__trace_init_sub__TOP__connect4__0(Vconnect4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconnect4___024root__trace_init_sub__TOP__0(Vconnect4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_init_sub__TOP__0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("connect4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconnect4___024root__trace_init_sub__TOP__connect4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"op_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"op_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"op_player_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"op_col_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"re_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"re_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"re_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"re_is_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"re_winner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"re_tie",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vconnect4___024root__trace_init_sub__TOP__connect4__0(Vconnect4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_init_sub__TOP__connect4__0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"op_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"op_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"op_player_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"op_col_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+19,0,"re_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"re_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"re_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"re_is_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"re_winner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"re_tie",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"S_WAIT_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"S_DROP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"S_GO_JUDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"S_JUDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"S_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"op_ready_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"re_valid_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"re_err_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"re_is_finished_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"re_winner_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"re_tie_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"S_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+33,0,"occupied",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+35,0,"whos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+37,0,"occupied_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+39,0,"whos_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+41,0,"player_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"player_id_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"col_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"col_id_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"row_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"row_id_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+47,0,"wj_op_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"wj_op_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"wj_op_valid_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"wj_re_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"wj_re_ready_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"wj_re_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"wj_re_is_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"op_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"re_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"wj_op_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"wj_re_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"col_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+59,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("wj", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+62,0,"occupied",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+64,0,"whos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+66,0,"op_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"op_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"re_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"re_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"re_is_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"S_DETECT_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"S_DETECT_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"S_DETECT_RISE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"S_DETECT_FALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"S_RE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"op_ready_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"re_valid_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"re_is_finished_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"S_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+76,0,"rlim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"rlim_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"llim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"llim_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"tlim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"tlim_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+82,0,"blim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"blim_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+85,0,"c_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"r_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+88,0,"op_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"re_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"occupied_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"whos_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+94,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+95,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"r0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"r3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconnect4___024root__trace_init_top(Vconnect4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_init_top\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconnect4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconnect4___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconnect4___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconnect4___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconnect4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconnect4___024root__trace_register(Vconnect4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_register\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconnect4___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconnect4___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconnect4___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconnect4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconnect4___024root__trace_const_0_sub_0(Vconnect4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconnect4___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_const_0\n"); );
    // Init
    Vconnect4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect4___024root*>(voidSelf);
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconnect4___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconnect4___024root__trace_const_0_sub_0(Vconnect4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_const_0_sub_0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+100,(0U),32);
    bufp->fullIData(oldp+101,(1U),32);
    bufp->fullIData(oldp+102,(2U),32);
    bufp->fullIData(oldp+103,(3U),32);
    bufp->fullIData(oldp+104,(4U),32);
    bufp->fullIData(oldp+105,(5U),32);
}

VL_ATTR_COLD void Vconnect4___024root__trace_full_0_sub_0(Vconnect4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconnect4___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_full_0\n"); );
    // Init
    Vconnect4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect4___024root*>(voidSelf);
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconnect4___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconnect4___024root__trace_full_0_sub_0(Vconnect4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconnect4___024root__trace_full_0_sub_0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.op_ready));
    bufp->fullBit(oldp+4,(vlSelfRef.op_valid));
    bufp->fullBit(oldp+5,(vlSelfRef.op_player_id));
    bufp->fullCData(oldp+6,(vlSelfRef.op_col_id),3);
    bufp->fullBit(oldp+7,(vlSelfRef.re_ready));
    bufp->fullBit(oldp+8,(vlSelfRef.re_valid));
    bufp->fullBit(oldp+9,(vlSelfRef.re_err));
    bufp->fullBit(oldp+10,(vlSelfRef.re_is_finished));
    bufp->fullBit(oldp+11,(vlSelfRef.re_winner));
    bufp->fullBit(oldp+12,(vlSelfRef.re_tie));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__connect4.clk));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__connect4.rst_n));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__connect4.op_ready));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__connect4.op_valid));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__connect4.op_player_id));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__connect4.op_col_id),3);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__connect4.re_ready));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__connect4.re_valid));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__connect4.re_err));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__connect4.re_is_finished));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__connect4.re_winner));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__connect4.re_tie));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__connect4.op_ready_nxt));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__connect4.re_valid_nxt));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__connect4.re_err_nxt));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__connect4.re_is_finished_nxt));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__connect4.re_winner_nxt));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__connect4.re_tie_nxt));
    bufp->fullCData(oldp+31,(vlSymsp->TOP__connect4.S),4);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__connect4.S_nxt),4);
    bufp->fullQData(oldp+33,(vlSymsp->TOP__connect4.occupied),42);
    bufp->fullQData(oldp+35,(vlSymsp->TOP__connect4.whos),42);
    bufp->fullQData(oldp+37,(vlSymsp->TOP__connect4.occupied_nxt),42);
    bufp->fullQData(oldp+39,(vlSymsp->TOP__connect4.whos_nxt),42);
    bufp->fullBit(oldp+41,(vlSymsp->TOP__connect4.player_id));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__connect4.player_id_nxt));
    bufp->fullCData(oldp+43,(vlSymsp->TOP__connect4.col_id),3);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__connect4.col_id_nxt),3);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__connect4.row_id),3);
    bufp->fullCData(oldp+46,(vlSymsp->TOP__connect4.row_id_nxt),3);
    bufp->fullBit(oldp+47,(vlSymsp->TOP__connect4.wj_op_ready));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__connect4.wj_op_valid));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__connect4.wj_op_valid_nxt));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__connect4.wj_re_ready));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__connect4.wj_re_ready_nxt));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__connect4.wj_re_valid));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__connect4.wj_re_is_finished));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__connect4.op_fire));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__connect4.re_fire));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__connect4.wj_op_fire));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__connect4.wj_re_fire));
    bufp->fullCData(oldp+58,(vlSymsp->TOP__connect4.col_full),7);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__connect4.i),32);
    bufp->fullBit(oldp+60,(vlSymsp->TOP__connect4.wj__DOT__clk));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__connect4.wj__DOT__rst_n));
    bufp->fullQData(oldp+62,(vlSymsp->TOP__connect4.wj__DOT__occupied),42);
    bufp->fullQData(oldp+64,(vlSymsp->TOP__connect4.wj__DOT__whos),42);
    bufp->fullBit(oldp+66,(vlSymsp->TOP__connect4.wj__DOT__op_ready));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__connect4.wj__DOT__op_valid));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__connect4.wj__DOT__re_ready));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__connect4.wj__DOT__re_valid));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__connect4.wj__DOT__re_is_finished));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__connect4.wj__DOT__op_ready_nxt));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__connect4.wj__DOT__re_valid_nxt));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__connect4.wj__DOT__re_is_finished_nxt));
    bufp->fullCData(oldp+74,(vlSymsp->TOP__connect4.wj__DOT__S),4);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__connect4.wj__DOT__S_nxt),4);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__connect4.wj__DOT__rlim),3);
    bufp->fullCData(oldp+77,(vlSymsp->TOP__connect4.wj__DOT__rlim_nxt),3);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__connect4.wj__DOT__llim),3);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__connect4.wj__DOT__llim_nxt),3);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__connect4.wj__DOT__tlim),3);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__connect4.wj__DOT__tlim_nxt),3);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__connect4.wj__DOT__blim),3);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__connect4.wj__DOT__blim_nxt),3);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__connect4.wj__DOT__c),3);
    bufp->fullCData(oldp+85,(vlSymsp->TOP__connect4.wj__DOT__c_nxt),3);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__connect4.wj__DOT__r),3);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__connect4.wj__DOT__r_nxt),3);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__connect4.wj__DOT__op_fire));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__connect4.wj__DOT__re_fire));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__connect4.wj__DOT__occupied_all));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__connect4.wj__DOT__whos_all));
    bufp->fullCData(oldp+92,(vlSymsp->TOP__connect4.wj__DOT__c0),3);
    bufp->fullCData(oldp+93,(vlSymsp->TOP__connect4.wj__DOT__c1),3);
    bufp->fullCData(oldp+94,(vlSymsp->TOP__connect4.wj__DOT__c2),3);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__connect4.wj__DOT__c3),3);
    bufp->fullCData(oldp+96,(vlSymsp->TOP__connect4.wj__DOT__r0),3);
    bufp->fullCData(oldp+97,(vlSymsp->TOP__connect4.wj__DOT__r1),3);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__connect4.wj__DOT__r2),3);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__connect4.wj__DOT__r3),3);
}
