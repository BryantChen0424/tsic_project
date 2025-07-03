// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbagh_chal.h for the primary calling header

#ifndef VERILATED_VBAGH_CHAL_BAGH_CHAL_H_
#define VERILATED_VBAGH_CHAL_BAGH_CHAL_H_  // guard

#include "verilated.h"


class Vbagh_chal__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbagh_chal_bagh_chal final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_OUT8(op_ready,0,0);
        VL_IN8(op_valid,0,0);
        VL_IN8(op_i,4,0);
        VL_IN8(op_j,4,0);
        VL_IN8(re_ready,0,0);
        VL_OUT8(re_valid,0,0);
        VL_OUT8(re_is_finished,0,0);
        VL_OUT8(re_possible_ops,3,0);
        VL_OUT8(o_goats_in_hand,4,0);
        VL_OUT8(o_goats_killed,4,0);
        CData/*0:0*/ op_ready_nxt;
        CData/*0:0*/ re_valid_nxt;
        CData/*0:0*/ re_is_finished_nxt;
        CData/*3:0*/ re_possible_ops_nxt;
        CData/*3:0*/ S;
        CData/*3:0*/ S_nxt;
        CData/*4:0*/ ci;
        CData/*4:0*/ ci_nxt;
        CData/*4:0*/ cj;
        CData/*4:0*/ cj_nxt;
        CData/*4:0*/ pi;
        CData/*4:0*/ pi_nxt;
        CData/*4:0*/ pj;
        CData/*4:0*/ pj_nxt;
        CData/*4:0*/ goats_in_hand;
        CData/*4:0*/ goats_in_hand_nxt;
        CData/*4:0*/ goats_killed;
        CData/*4:0*/ goats_killed_nxt;
        CData/*4:0*/ t0i;
        CData/*4:0*/ t0i_nxt;
        CData/*4:0*/ t0j;
        CData/*4:0*/ t0j_nxt;
        CData/*4:0*/ t1i;
        CData/*4:0*/ t1i_nxt;
        CData/*4:0*/ t1j;
        CData/*4:0*/ t1j_nxt;
        CData/*4:0*/ t2i;
        CData/*4:0*/ t2i_nxt;
        CData/*4:0*/ t2j;
        CData/*4:0*/ t2j_nxt;
        CData/*4:0*/ t3i;
        CData/*4:0*/ t3i_nxt;
        CData/*4:0*/ t3j;
        CData/*4:0*/ t3j_nxt;
        CData/*3:0*/ check_tiger_id;
        CData/*3:0*/ check_tiger_id_nxt;
        CData/*0:0*/ op_fire;
        CData/*0:0*/ re_fire;
        CData/*4:0*/ i_dist;
        CData/*4:0*/ j_dist;
        CData/*4:0*/ opij2idx;
        CData/*4:0*/ cij2idx;
        CData/*4:0*/ pij2idx;
        CData/*4:0*/ su_ci;
        CData/*4:0*/ su_cj;
        CData/*0:0*/ su_o_tigers_cantmove;
        CData/*0:0*/ __Vlvbound_ha134e953__0;
        CData/*0:0*/ __Vlvbound_h13906274__0;
        CData/*0:0*/ __Vlvbound_h5d1d6572__0;
        CData/*0:0*/ __Vlvbound_h823c4ae0__0;
        CData/*0:0*/ __Vlvbound_ha134e953__1;
        CData/*0:0*/ __Vlvbound_h13906274__1;
    };
    struct {
        CData/*0:0*/ __Vlvbound_h5d1d6572__1;
        CData/*0:0*/ __Vlvbound_h823c4ae0__1;
        CData/*0:0*/ __Vlvbound_h8ccd81e1__0;
        CData/*0:0*/ __Vlvbound_hc9a42266__0;
        CData/*3:0*/ su__DOT__S;
        CData/*4:0*/ su__DOT__ci;
        CData/*4:0*/ su__DOT__cj;
        CData/*4:0*/ su__DOT__goats_in_hand;
        CData/*0:0*/ su__DOT__o_tigers_cantmove;
        VL_OUT(re_selectable,24,0);
        IData/*24:0*/ occupied;
        IData/*24:0*/ occupied_nxt;
        IData/*24:0*/ whos;
        IData/*24:0*/ whos_nxt;
        IData/*24:0*/ su_o_update;
        IData/*31:0*/ idx;
        IData/*24:0*/ su__DOT__occupied;
        IData/*24:0*/ su__DOT__whos;
        IData/*24:0*/ su__DOT__o_update;
        IData/*24:0*/ su__DOT__all_vacant;
        IData/*24:0*/ su__DOT__all_goat;
        IData/*24:0*/ su__DOT__all_tiger;
        IData/*24:0*/ su__DOT__cgoat_can_goto;
        IData/*24:0*/ su__DOT__ctiger_can_goto;
        IData/*24:0*/ su__DOT__ctiger_can_jumpto;
        IData/*31:0*/ su__DOT__idx;
        IData/*31:0*/ su__DOT__jdx;
    };

    // INTERNAL VARIABLES
    Vbagh_chal__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ S_GCH_OP = 0U;
    static constexpr IData/*31:0*/ S_GCH_RE = 1U;
    static constexpr IData/*31:0*/ S_GPL_OP = 2U;
    static constexpr IData/*31:0*/ S_GMV = 3U;
    static constexpr IData/*31:0*/ S_GCHECK = 4U;
    static constexpr IData/*31:0*/ S_GPL_RE = 5U;
    static constexpr IData/*31:0*/ S_TCH_OP = 6U;
    static constexpr IData/*31:0*/ S_TCH_RE = 7U;
    static constexpr IData/*31:0*/ S_TPL_OP = 8U;
    static constexpr IData/*31:0*/ S_TMV = 9U;
    static constexpr IData/*31:0*/ S_TPL_RE = 0x0000000aU;
    static constexpr IData/*31:0*/ OP_N = 0U;
    static constexpr IData/*31:0*/ OP_GCH = 1U;
    static constexpr IData/*31:0*/ OP_GRCHPL = 2U;
    static constexpr IData/*31:0*/ OP_GPL = 3U;
    static constexpr IData/*31:0*/ OP_TCH = 4U;
    static constexpr IData/*31:0*/ OP_TRCHPL = 5U;
    static constexpr IData/*31:0*/ GOAT = 0U;
    static constexpr IData/*31:0*/ TIGER = 1U;
    static constexpr IData/*24:0*/ GOAT_MASK = 0U;
    static constexpr IData/*24:0*/ TIGER_MASK = 0x01ffffffU;
    static constexpr IData/*31:0*/ su__DOT__S_GCH_OP = 0U;
    static constexpr IData/*31:0*/ su__DOT__S_GCH_RE = 1U;
    static constexpr IData/*31:0*/ su__DOT__S_GPL_OP = 2U;
    static constexpr IData/*31:0*/ su__DOT__S_GMV = 3U;
    static constexpr IData/*31:0*/ su__DOT__S_GCHECK = 4U;
    static constexpr IData/*31:0*/ su__DOT__S_GPL_RE = 5U;
    static constexpr IData/*31:0*/ su__DOT__S_TCH_OP = 6U;
    static constexpr IData/*31:0*/ su__DOT__S_TCH_RE = 7U;
    static constexpr IData/*31:0*/ su__DOT__S_TPL_OP = 8U;
    static constexpr IData/*31:0*/ su__DOT__S_TMV = 9U;
    static constexpr IData/*31:0*/ su__DOT__S_TPL_RE = 0x0000000aU;
    static constexpr IData/*31:0*/ su__DOT__GOAT = 0U;
    static constexpr IData/*31:0*/ su__DOT__TIGER = 1U;
    static constexpr IData/*24:0*/ su__DOT__GOAT_MASK = 0U;
    static constexpr IData/*24:0*/ su__DOT__TIGER_MASK = 0x01ffffffU;

    // CONSTRUCTORS
    Vbagh_chal_bagh_chal(Vbagh_chal__Syms* symsp, const char* v__name);
    ~Vbagh_chal_bagh_chal();
    VL_UNCOPYABLE(Vbagh_chal_bagh_chal);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
