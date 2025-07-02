// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconnect4.h for the primary calling header

#ifndef VERILATED_VCONNECT4___024ROOT_H_
#define VERILATED_VCONNECT4___024ROOT_H_  // guard

#include "verilated.h"
class Vconnect4_connect4;


class Vconnect4__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconnect4___024root final : public VerilatedModule {
  public:
    // CELLS
    Vconnect4_connect4* connect4;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(op_ready,0,0);
    VL_IN8(op_valid,0,0);
    VL_IN8(op_player_id,0,0);
    VL_IN8(op_col_id,2,0);
    VL_IN8(re_ready,0,0);
    VL_OUT8(re_valid,0,0);
    VL_OUT8(re_err,0,0);
    VL_OUT8(re_is_finished,0,0);
    VL_OUT8(re_winner,0,0);
    VL_OUT8(re_tie,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__connect4__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__connect4__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconnect4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconnect4___024root(Vconnect4__Syms* symsp, const char* v__name);
    ~Vconnect4___024root();
    VL_UNCOPYABLE(Vconnect4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
