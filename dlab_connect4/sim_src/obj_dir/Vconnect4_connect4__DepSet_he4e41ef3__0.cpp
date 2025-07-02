// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect4.h for the primary calling header

#include "Vconnect4__pch.h"
#include "Vconnect4_connect4.h"

VL_INLINE_OPT void Vconnect4_connect4___ico_sequent__TOP__connect4__0(Vconnect4_connect4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vconnect4_connect4___ico_sequent__TOP__connect4__0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wj__DOT__occupied = vlSelfRef.occupied;
    vlSelfRef.wj__DOT__whos = vlSelfRef.whos;
    vlSelfRef.wj__DOT__op_fire = ((IData)(vlSelfRef.wj_op_ready) 
                                  & (IData)(vlSelfRef.wj_op_valid));
    vlSelfRef.wj__DOT__re_fire = ((IData)(vlSelfRef.wj_re_ready) 
                                  & (IData)(vlSelfRef.wj_re_valid));
    vlSelfRef.wj__DOT__occupied_all = 0U;
    vlSelfRef.wj__DOT__whos_all = 0U;
    vlSelfRef.wj__DOT__c0 = 0U;
    vlSelfRef.wj__DOT__c1 = 0U;
    vlSelfRef.wj__DOT__c2 = 0U;
    vlSelfRef.wj__DOT__c3 = 0U;
    vlSelfRef.wj__DOT__r0 = 0U;
    vlSelfRef.wj__DOT__r1 = 0U;
    vlSelfRef.wj__DOT__r2 = 0U;
    vlSelfRef.wj__DOT__r3 = 0U;
    vlSelfRef.wj__DOT__op_ready_nxt = vlSelfRef.wj_op_ready;
    vlSelfRef.wj__DOT__re_valid_nxt = vlSelfRef.wj_re_valid;
    vlSelfRef.wj__DOT__re_is_finished_nxt = vlSelfRef.wj_re_is_finished;
    vlSelfRef.wj__DOT__S_nxt = vlSelfRef.wj__DOT__S;
    vlSelfRef.wj__DOT__rlim_nxt = vlSelfRef.wj__DOT__rlim;
    vlSelfRef.wj__DOT__llim_nxt = vlSelfRef.wj__DOT__llim;
    vlSelfRef.wj__DOT__tlim_nxt = vlSelfRef.wj__DOT__tlim;
    vlSelfRef.wj__DOT__blim_nxt = vlSelfRef.wj__DOT__blim;
    vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__c;
    vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__r;
    if ((0U == (IData)(vlSelfRef.wj__DOT__S))) {
        if (vlSelfRef.wj__DOT__op_fire) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 0U;
            vlSelfRef.wj__DOT__op_ready_nxt = 0U;
            vlSelfRef.wj__DOT__llim_nxt = 6U;
            vlSelfRef.wj__DOT__blim_nxt = 2U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c2 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c3 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 0U;
            vlSelfRef.wj__DOT__llim_nxt = 3U;
            vlSelfRef.wj__DOT__blim_nxt = 5U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r1 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r2 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r3 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 3U;
            vlSelfRef.wj__DOT__llim_nxt = 3U;
            vlSelfRef.wj__DOT__blim_nxt = 5U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r1 = (7U & ((IData)(vlSelfRef.wj__DOT__r) 
                                       - (IData)(1U)));
        vlSelfRef.wj__DOT__c2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r2 = (7U & ((IData)(vlSelfRef.wj__DOT__r) 
                                       - (IData)(2U)));
        vlSelfRef.wj__DOT__c3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r3 = (7U & ((IData)(vlSelfRef.wj__DOT__r) 
                                       - (IData)(3U)));
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 0U;
            vlSelfRef.wj__DOT__llim_nxt = 3U;
            vlSelfRef.wj__DOT__blim_nxt = 2U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 0U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.wj__DOT__S))) {
        if (vlSelfRef.wj__DOT__re_fire) {
            vlSelfRef.wj__DOT__re_valid_nxt = 0U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 0U;
            vlSelfRef.wj__DOT__op_ready_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 0U;
        }
    }
}

VL_INLINE_OPT void Vconnect4_connect4___ico_sequent__TOP__connect4__1(Vconnect4_connect4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vconnect4_connect4___ico_sequent__TOP__connect4__1\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wj__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.wj__DOT__clk = vlSelfRef.clk;
    vlSelfRef.op_fire = ((IData)(vlSelfRef.op_ready) 
                         & (IData)(vlSelfRef.op_valid));
    vlSelfRef.re_fire = ((IData)(vlSelfRef.re_ready) 
                         & (IData)(vlSelfRef.re_valid));
    vlSelfRef.wj_op_fire = ((IData)(vlSelfRef.wj_op_ready) 
                            & (IData)(vlSelfRef.wj_op_valid));
    vlSelfRef.wj_re_fire = ((IData)(vlSelfRef.wj_re_ready) 
                            & (IData)(vlSelfRef.wj_re_valid));
    vlSelfRef.col_full = (0x7fU & (IData)(vlSelfRef.occupied));
    vlSelfRef.op_ready_nxt = vlSelfRef.op_ready;
    vlSelfRef.re_valid_nxt = vlSelfRef.re_valid;
    vlSelfRef.re_err_nxt = vlSelfRef.re_err;
    vlSelfRef.re_is_finished_nxt = vlSelfRef.re_is_finished;
    vlSelfRef.re_winner_nxt = vlSelfRef.re_winner;
    vlSelfRef.re_tie_nxt = vlSelfRef.re_tie;
    vlSelfRef.S_nxt = vlSelfRef.S;
    vlSelfRef.occupied_nxt = vlSelfRef.occupied;
    vlSelfRef.whos_nxt = vlSelfRef.whos;
    vlSelfRef.player_id_nxt = vlSelfRef.player_id;
    vlSelfRef.col_id_nxt = vlSelfRef.col_id;
    vlSelfRef.row_id_nxt = vlSelfRef.row_id;
    vlSelfRef.wj_op_valid_nxt = vlSelfRef.wj_op_valid;
    vlSelfRef.wj_re_ready_nxt = vlSelfRef.wj_re_ready;
    if ((0U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.op_fire) {
            vlSelfRef.op_ready_nxt = 0U;
            vlSelfRef.player_id_nxt = vlSelfRef.op_player_id;
            vlSelfRef.col_id_nxt = vlSelfRef.op_col_id;
            if (((6U >= (IData)(vlSelfRef.op_col_id)) 
                 && (1U & ((IData)(vlSelfRef.col_full) 
                           >> (IData)(vlSelfRef.op_col_id))))) {
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.re_err_nxt = 1U;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_winner_nxt = 0U;
                vlSelfRef.re_tie_nxt = 0U;
                vlSelfRef.S_nxt = 4U;
            } else {
                vlSelfRef.occupied_nxt = (vlSelfRef.occupied_nxt 
                                          | (0x3ffffffffffULL 
                                             & ((QData)((IData)(1U)) 
                                                << (IData)(vlSelfRef.op_col_id))));
                vlSelfRef.whos_nxt = (((~ (1ULL << (IData)(vlSelfRef.op_col_id))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x3ffffffffffULL 
                                         & ((QData)((IData)(vlSelfRef.op_player_id)) 
                                            << (IData)(vlSelfRef.op_col_id))));
                vlSelfRef.row_id_nxt = 0U;
                vlSelfRef.S_nxt = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.S))) {
        if (((5U == (IData)(vlSelfRef.row_id)) | ((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.row_id))) 
                                                       + (IData)(vlSelfRef.col_id)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.row_id))) 
                                                                     + (IData)(vlSelfRef.col_id))))))))) {
            vlSelfRef.wj_op_valid_nxt = 1U;
            vlSelfRef.S_nxt = 2U;
        } else {
            vlSelfRef.__Vlvbound_he09ab045__0 = 0U;
            vlSelfRef.__Vlvbound_h1937b198__0 = 0U;
            if ((0x29U >= (0x3fU & (((IData)(7U) * (IData)(vlSelfRef.row_id)) 
                                    + (IData)(vlSelfRef.col_id))))) {
                vlSelfRef.occupied_nxt = (((~ (1ULL 
                                               << (0x3fU 
                                                   & (((IData)(7U) 
                                                       * (IData)(vlSelfRef.row_id)) 
                                                      + (IData)(vlSelfRef.col_id))))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x3ffffffffffULL 
                                             & ((QData)((IData)(vlSelfRef.__Vlvbound_he09ab045__0)) 
                                                << 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.row_id)) 
                                                    + (IData)(vlSelfRef.col_id))))));
                vlSelfRef.whos_nxt = (((~ (1ULL << 
                                           (0x3fU & 
                                            (((IData)(7U) 
                                              * (IData)(vlSelfRef.row_id)) 
                                             + (IData)(vlSelfRef.col_id))))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x3ffffffffffULL 
                                         & ((QData)((IData)(vlSelfRef.__Vlvbound_h1937b198__0)) 
                                            << (0x3fU 
                                                & (((IData)(7U) 
                                                    * (IData)(vlSelfRef.row_id)) 
                                                   + (IData)(vlSelfRef.col_id))))));
            }
            vlSelfRef.row_id_nxt = (7U & ((IData)(1U) 
                                          + (IData)(vlSelfRef.row_id)));
            vlSelfRef.S_nxt = 1U;
            vlSelfRef.__Vlvbound_ha9697794__0 = 1U;
            vlSelfRef.__Vlvbound_h0ff1056b__0 = vlSelfRef.op_player_id;
            if ((0x29U >= (0x3fU & (((IData)(7U) * 
                                     ((IData)(1U) + (IData)(vlSelfRef.row_id))) 
                                    + (IData)(vlSelfRef.col_id))))) {
                vlSelfRef.occupied_nxt = (((~ (1ULL 
                                               << (0x3fU 
                                                   & (((IData)(7U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.row_id))) 
                                                      + (IData)(vlSelfRef.col_id))))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x3ffffffffffULL 
                                             & ((QData)((IData)(vlSelfRef.__Vlvbound_ha9697794__0)) 
                                                << 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.row_id))) 
                                                    + (IData)(vlSelfRef.col_id))))));
                vlSelfRef.whos_nxt = (((~ (1ULL << 
                                           (0x3fU & 
                                            (((IData)(7U) 
                                              * ((IData)(1U) 
                                                 + (IData)(vlSelfRef.row_id))) 
                                             + (IData)(vlSelfRef.col_id))))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x3ffffffffffULL 
                                         & ((QData)((IData)(vlSelfRef.__Vlvbound_h0ff1056b__0)) 
                                            << (0x3fU 
                                                & (((IData)(7U) 
                                                    * 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.row_id))) 
                                                   + (IData)(vlSelfRef.col_id))))));
            }
        }
    } else if ((2U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.wj_op_fire) {
            vlSelfRef.wj_re_ready_nxt = 1U;
            vlSelfRef.wj_op_valid_nxt = 0U;
            vlSelfRef.S_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.wj_re_fire) {
            vlSelfRef.wj_re_ready_nxt = 0U;
            vlSelfRef.re_valid_nxt = 1U;
            vlSelfRef.re_err_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = ((IData)(vlSelfRef.wj_re_is_finished) 
                                            | (0x7fU 
                                               == (IData)(vlSelfRef.col_full)));
            vlSelfRef.re_winner_nxt = ((IData)(vlSelfRef.wj_re_is_finished)
                                        ? (1U & (IData)(vlSelfRef.player_id))
                                        : 0U);
            vlSelfRef.S_nxt = 4U;
            vlSelfRef.re_tie_nxt = ((0x7fU == (IData)(vlSelfRef.col_full)) 
                                    & (~ (IData)(vlSelfRef.wj_re_is_finished)));
        }
    } else if ((4U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.re_fire) {
            vlSelfRef.op_ready_nxt = 1U;
            vlSelfRef.re_valid_nxt = 0U;
            vlSelfRef.re_err_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = 0U;
            vlSelfRef.re_winner_nxt = 0U;
            vlSelfRef.re_tie_nxt = 0U;
            if (vlSelfRef.re_is_finished) {
                vlSelfRef.occupied_nxt = 0ULL;
                vlSelfRef.whos_nxt = 0ULL;
                vlSelfRef.player_id_nxt = 0U;
                vlSelfRef.col_id_nxt = 0U;
                vlSelfRef.row_id_nxt = 0U;
            }
            vlSelfRef.S_nxt = 0U;
        }
    }
}

VL_INLINE_OPT void Vconnect4_connect4___nba_sequent__TOP__connect4__0(Vconnect4_connect4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vconnect4_connect4___nba_sequent__TOP__connect4__0\n"); );
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.wj__DOT__S = vlSelfRef.wj__DOT__S_nxt;
        vlSelfRef.wj__DOT__llim = vlSelfRef.wj__DOT__llim_nxt;
        vlSelfRef.wj__DOT__rlim = vlSelfRef.wj__DOT__rlim_nxt;
        vlSelfRef.wj__DOT__tlim = vlSelfRef.wj__DOT__tlim_nxt;
        vlSelfRef.wj__DOT__blim = vlSelfRef.wj__DOT__blim_nxt;
        vlSelfRef.wj__DOT__c = vlSelfRef.wj__DOT__c_nxt;
        vlSelfRef.wj__DOT__r = vlSelfRef.wj__DOT__r_nxt;
        vlSelfRef.S = vlSelfRef.S_nxt;
        vlSelfRef.row_id = vlSelfRef.row_id_nxt;
        vlSelfRef.col_id = vlSelfRef.col_id_nxt;
        vlSelfRef.whos = vlSelfRef.whos_nxt;
        vlSelfRef.occupied = vlSelfRef.occupied_nxt;
    } else {
        vlSelfRef.wj__DOT__S = 0U;
        vlSelfRef.wj__DOT__llim = 0U;
        vlSelfRef.wj__DOT__rlim = 0U;
        vlSelfRef.wj__DOT__tlim = 0U;
        vlSelfRef.wj__DOT__blim = 0U;
        vlSelfRef.wj__DOT__c = 0U;
        vlSelfRef.wj__DOT__r = 0U;
        vlSelfRef.S = 0U;
        vlSelfRef.row_id = 0U;
        vlSelfRef.col_id = 0U;
        vlSelfRef.whos = 0ULL;
        vlSelfRef.occupied = 0ULL;
    }
    vlSelfRef.player_id = ((IData)(vlSelfRef.rst_n) 
                           && (IData)(vlSelfRef.player_id_nxt));
    vlSelfRef.re_tie = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.re_tie_nxt));
    vlSelfRef.re_is_finished = ((IData)(vlSelfRef.rst_n) 
                                && (IData)(vlSelfRef.re_is_finished_nxt));
    vlSelfRef.re_winner = ((IData)(vlSelfRef.rst_n) 
                           && (IData)(vlSelfRef.re_winner_nxt));
    vlSelfRef.re_valid = ((IData)(vlSelfRef.rst_n) 
                          && (IData)(vlSelfRef.re_valid_nxt));
    vlSelfRef.op_ready = ((1U & (~ (IData)(vlSelfRef.rst_n))) 
                          || (IData)(vlSelfRef.op_ready_nxt));
    vlSelfRef.re_err = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.re_err_nxt));
    vlSelfRef.wj_re_valid = ((IData)(vlSelfRef.rst_n) 
                             && (IData)(vlSelfRef.wj__DOT__re_valid_nxt));
    vlSelfRef.wj_re_is_finished = ((IData)(vlSelfRef.rst_n) 
                                   && (IData)(vlSelfRef.wj__DOT__re_is_finished_nxt));
    vlSelfRef.wj_op_ready = ((1U & (~ (IData)(vlSelfRef.rst_n))) 
                             || (IData)(vlSelfRef.wj__DOT__op_ready_nxt));
    vlSelfRef.wj_op_valid = ((IData)(vlSelfRef.rst_n) 
                             && (IData)(vlSelfRef.wj_op_valid_nxt));
    vlSelfRef.wj_re_ready = ((IData)(vlSelfRef.rst_n) 
                             && (IData)(vlSelfRef.wj_re_ready_nxt));
    vlSelfRef.wj__DOT__re_valid = vlSelfRef.wj_re_valid;
    vlSelfRef.wj__DOT__re_is_finished = vlSelfRef.wj_re_is_finished;
    vlSelfRef.wj__DOT__op_ready = vlSelfRef.wj_op_ready;
    vlSelfRef.wj__DOT__whos = vlSelfRef.whos;
    vlSelfRef.wj__DOT__occupied = vlSelfRef.occupied;
    vlSelfRef.wj__DOT__op_valid = vlSelfRef.wj_op_valid;
    vlSelfRef.wj__DOT__re_ready = vlSelfRef.wj_re_ready;
    vlSelfRef.wj__DOT__op_fire = ((IData)(vlSelfRef.wj_op_ready) 
                                  & (IData)(vlSelfRef.wj_op_valid));
    vlSelfRef.wj__DOT__re_fire = ((IData)(vlSelfRef.wj_re_ready) 
                                  & (IData)(vlSelfRef.wj_re_valid));
    vlSelfRef.wj__DOT__occupied_all = 0U;
    vlSelfRef.wj__DOT__whos_all = 0U;
    vlSelfRef.wj__DOT__c0 = 0U;
    vlSelfRef.wj__DOT__c1 = 0U;
    vlSelfRef.wj__DOT__c2 = 0U;
    vlSelfRef.wj__DOT__c3 = 0U;
    vlSelfRef.wj__DOT__r0 = 0U;
    vlSelfRef.wj__DOT__r1 = 0U;
    vlSelfRef.wj__DOT__r2 = 0U;
    vlSelfRef.wj__DOT__r3 = 0U;
    vlSelfRef.wj__DOT__op_ready_nxt = vlSelfRef.wj_op_ready;
    vlSelfRef.wj__DOT__re_valid_nxt = vlSelfRef.wj_re_valid;
    vlSelfRef.wj__DOT__re_is_finished_nxt = vlSelfRef.wj_re_is_finished;
    vlSelfRef.wj__DOT__S_nxt = vlSelfRef.wj__DOT__S;
    vlSelfRef.wj__DOT__rlim_nxt = vlSelfRef.wj__DOT__rlim;
    vlSelfRef.wj__DOT__llim_nxt = vlSelfRef.wj__DOT__llim;
    vlSelfRef.wj__DOT__tlim_nxt = vlSelfRef.wj__DOT__tlim;
    vlSelfRef.wj__DOT__blim_nxt = vlSelfRef.wj__DOT__blim;
    vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__c;
    vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__r;
    if ((0U == (IData)(vlSelfRef.wj__DOT__S))) {
        if (vlSelfRef.wj__DOT__op_fire) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 0U;
            vlSelfRef.wj__DOT__op_ready_nxt = 0U;
            vlSelfRef.wj__DOT__llim_nxt = 6U;
            vlSelfRef.wj__DOT__blim_nxt = 2U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c2 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c3 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 0U;
            vlSelfRef.wj__DOT__llim_nxt = 3U;
            vlSelfRef.wj__DOT__blim_nxt = 5U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r1 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r2 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r3 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 3U;
            vlSelfRef.wj__DOT__llim_nxt = 3U;
            vlSelfRef.wj__DOT__blim_nxt = 5U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r1 = (7U & ((IData)(vlSelfRef.wj__DOT__r) 
                                       - (IData)(1U)));
        vlSelfRef.wj__DOT__c2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r2 = (7U & ((IData)(vlSelfRef.wj__DOT__r) 
                                       - (IData)(2U)));
        vlSelfRef.wj__DOT__c3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r3 = (7U & ((IData)(vlSelfRef.wj__DOT__r) 
                                       - (IData)(3U)));
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__rlim_nxt = 0U;
            vlSelfRef.wj__DOT__tlim_nxt = 0U;
            vlSelfRef.wj__DOT__llim_nxt = 3U;
            vlSelfRef.wj__DOT__blim_nxt = 2U;
            vlSelfRef.wj__DOT__c_nxt = vlSelfRef.wj__DOT__rlim_nxt;
            vlSelfRef.wj__DOT__r_nxt = vlSelfRef.wj__DOT__tlim_nxt;
            vlSelfRef.wj__DOT__S_nxt = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.wj__DOT__S))) {
        vlSelfRef.wj__DOT__c0 = vlSelfRef.wj__DOT__c;
        if (((IData)(vlSelfRef.wj__DOT__c) == (IData)(vlSelfRef.wj__DOT__llim))) {
            vlSelfRef.wj__DOT__c_nxt = (7U & (IData)(vlSelfRef.wj__DOT__rlim));
            vlSelfRef.wj__DOT__r_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__r)));
        } else {
            vlSelfRef.wj__DOT__c_nxt = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.wj__DOT__c)));
            vlSelfRef.wj__DOT__r_nxt = (7U & (IData)(vlSelfRef.wj__DOT__r));
        }
        vlSelfRef.wj__DOT__r0 = vlSelfRef.wj__DOT__r;
        vlSelfRef.wj__DOT__c1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r2 = (7U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__c3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__c)));
        vlSelfRef.wj__DOT__r3 = (7U & ((IData)(3U) 
                                       + (IData)(vlSelfRef.wj__DOT__r)));
        vlSelfRef.wj__DOT__occupied_all = (((0x29U 
                                             >= (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.occupied 
                                                           >> 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                           & (((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.occupied 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                 & ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.occupied 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c3))))))))));
        vlSelfRef.wj__DOT__whos_all = (1U & ((((0x29U 
                                                >= 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                    + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                               && (1U 
                                                   & (IData)(
                                                             (vlSelfRef.whos 
                                                              >> 
                                                              (0x3fU 
                                                               & (((IData)(7U) 
                                                                   * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                  + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                              & (((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                       + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.whos 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                     + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                 & (((0x29U 
                                                      >= 
                                                      (0x3fU 
                                                       & (((IData)(7U) 
                                                           * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                          + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                     && (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.whos 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & (((IData)(7U) 
                                                                         * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                        + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                    & ((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c3)))))))))) 
                                             | (~ (
                                                   ((0x29U 
                                                     >= 
                                                     (0x3fU 
                                                      & (((IData)(7U) 
                                                          * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                         + (IData)(vlSelfRef.wj__DOT__c0)))) 
                                                    && (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.whos 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (((IData)(7U) 
                                                                        * (IData)(vlSelfRef.wj__DOT__r0)) 
                                                                       + (IData)(vlSelfRef.wj__DOT__c0))))))) 
                                                   | (((0x29U 
                                                        >= 
                                                        (0x3fU 
                                                         & (((IData)(7U) 
                                                             * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                            + (IData)(vlSelfRef.wj__DOT__c1)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.whos 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (((IData)(7U) 
                                                                           * (IData)(vlSelfRef.wj__DOT__r1)) 
                                                                          + (IData)(vlSelfRef.wj__DOT__c1))))))) 
                                                      | (((0x29U 
                                                           >= 
                                                           (0x3fU 
                                                            & (((IData)(7U) 
                                                                * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                               + (IData)(vlSelfRef.wj__DOT__c2)))) 
                                                          && (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.whos 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (((IData)(7U) 
                                                                              * (IData)(vlSelfRef.wj__DOT__r2)) 
                                                                             + (IData)(vlSelfRef.wj__DOT__c2))))))) 
                                                         | ((0x29U 
                                                             >= 
                                                             (0x3fU 
                                                              & (((IData)(7U) 
                                                                  * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                 + (IData)(vlSelfRef.wj__DOT__c3)))) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.whos 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (((IData)(7U) 
                                                                                * (IData)(vlSelfRef.wj__DOT__r3)) 
                                                                               + (IData)(vlSelfRef.wj__DOT__c3)))))))))))));
        if (((IData)(vlSelfRef.wj__DOT__occupied_all) 
             & (IData)(vlSelfRef.wj__DOT__whos_all))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        } else if ((((IData)(vlSelfRef.wj__DOT__c) 
                     == (IData)(vlSelfRef.wj__DOT__llim)) 
                    & ((IData)(vlSelfRef.wj__DOT__r) 
                       == (IData)(vlSelfRef.wj__DOT__blim)))) {
            vlSelfRef.wj__DOT__re_valid_nxt = 1U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 0U;
            vlSelfRef.wj__DOT__S_nxt = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.wj__DOT__S))) {
        if (vlSelfRef.wj__DOT__re_fire) {
            vlSelfRef.wj__DOT__re_valid_nxt = 0U;
            vlSelfRef.wj__DOT__re_is_finished_nxt = 0U;
            vlSelfRef.wj__DOT__op_ready_nxt = 1U;
            vlSelfRef.wj__DOT__S_nxt = 0U;
        }
    }
    vlSelfRef.op_fire = ((IData)(vlSelfRef.op_ready) 
                         & (IData)(vlSelfRef.op_valid));
    vlSelfRef.re_fire = ((IData)(vlSelfRef.re_ready) 
                         & (IData)(vlSelfRef.re_valid));
    vlSelfRef.wj_op_fire = ((IData)(vlSelfRef.wj_op_ready) 
                            & (IData)(vlSelfRef.wj_op_valid));
    vlSelfRef.wj_re_fire = ((IData)(vlSelfRef.wj_re_ready) 
                            & (IData)(vlSelfRef.wj_re_valid));
    vlSelfRef.col_full = (0x7fU & (IData)(vlSelfRef.occupied));
    vlSelfRef.op_ready_nxt = vlSelfRef.op_ready;
    vlSelfRef.re_valid_nxt = vlSelfRef.re_valid;
    vlSelfRef.re_err_nxt = vlSelfRef.re_err;
    vlSelfRef.re_is_finished_nxt = vlSelfRef.re_is_finished;
    vlSelfRef.re_winner_nxt = vlSelfRef.re_winner;
    vlSelfRef.re_tie_nxt = vlSelfRef.re_tie;
    vlSelfRef.S_nxt = vlSelfRef.S;
    vlSelfRef.occupied_nxt = vlSelfRef.occupied;
    vlSelfRef.whos_nxt = vlSelfRef.whos;
    vlSelfRef.player_id_nxt = vlSelfRef.player_id;
    vlSelfRef.col_id_nxt = vlSelfRef.col_id;
    vlSelfRef.row_id_nxt = vlSelfRef.row_id;
    vlSelfRef.wj_op_valid_nxt = vlSelfRef.wj_op_valid;
    vlSelfRef.wj_re_ready_nxt = vlSelfRef.wj_re_ready;
    if ((0U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.op_fire) {
            vlSelfRef.op_ready_nxt = 0U;
            vlSelfRef.player_id_nxt = vlSelfRef.op_player_id;
            vlSelfRef.col_id_nxt = vlSelfRef.op_col_id;
            if (((6U >= (IData)(vlSelfRef.op_col_id)) 
                 && (1U & ((IData)(vlSelfRef.col_full) 
                           >> (IData)(vlSelfRef.op_col_id))))) {
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.re_err_nxt = 1U;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_winner_nxt = 0U;
                vlSelfRef.re_tie_nxt = 0U;
                vlSelfRef.S_nxt = 4U;
            } else {
                vlSelfRef.occupied_nxt = (vlSelfRef.occupied_nxt 
                                          | (0x3ffffffffffULL 
                                             & ((QData)((IData)(1U)) 
                                                << (IData)(vlSelfRef.op_col_id))));
                vlSelfRef.whos_nxt = (((~ (1ULL << (IData)(vlSelfRef.op_col_id))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x3ffffffffffULL 
                                         & ((QData)((IData)(vlSelfRef.op_player_id)) 
                                            << (IData)(vlSelfRef.op_col_id))));
                vlSelfRef.row_id_nxt = 0U;
                vlSelfRef.S_nxt = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.S))) {
        if (((5U == (IData)(vlSelfRef.row_id)) | ((0x29U 
                                                   >= 
                                                   (0x3fU 
                                                    & (((IData)(7U) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.row_id))) 
                                                       + (IData)(vlSelfRef.col_id)))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.occupied 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (((IData)(7U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.row_id))) 
                                                                     + (IData)(vlSelfRef.col_id))))))))) {
            vlSelfRef.wj_op_valid_nxt = 1U;
            vlSelfRef.S_nxt = 2U;
        } else {
            vlSelfRef.__Vlvbound_he09ab045__0 = 0U;
            vlSelfRef.__Vlvbound_h1937b198__0 = 0U;
            if ((0x29U >= (0x3fU & (((IData)(7U) * (IData)(vlSelfRef.row_id)) 
                                    + (IData)(vlSelfRef.col_id))))) {
                vlSelfRef.occupied_nxt = (((~ (1ULL 
                                               << (0x3fU 
                                                   & (((IData)(7U) 
                                                       * (IData)(vlSelfRef.row_id)) 
                                                      + (IData)(vlSelfRef.col_id))))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x3ffffffffffULL 
                                             & ((QData)((IData)(vlSelfRef.__Vlvbound_he09ab045__0)) 
                                                << 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * (IData)(vlSelfRef.row_id)) 
                                                    + (IData)(vlSelfRef.col_id))))));
                vlSelfRef.whos_nxt = (((~ (1ULL << 
                                           (0x3fU & 
                                            (((IData)(7U) 
                                              * (IData)(vlSelfRef.row_id)) 
                                             + (IData)(vlSelfRef.col_id))))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x3ffffffffffULL 
                                         & ((QData)((IData)(vlSelfRef.__Vlvbound_h1937b198__0)) 
                                            << (0x3fU 
                                                & (((IData)(7U) 
                                                    * (IData)(vlSelfRef.row_id)) 
                                                   + (IData)(vlSelfRef.col_id))))));
            }
            vlSelfRef.row_id_nxt = (7U & ((IData)(1U) 
                                          + (IData)(vlSelfRef.row_id)));
            vlSelfRef.S_nxt = 1U;
            vlSelfRef.__Vlvbound_ha9697794__0 = 1U;
            vlSelfRef.__Vlvbound_h0ff1056b__0 = vlSelfRef.op_player_id;
            if ((0x29U >= (0x3fU & (((IData)(7U) * 
                                     ((IData)(1U) + (IData)(vlSelfRef.row_id))) 
                                    + (IData)(vlSelfRef.col_id))))) {
                vlSelfRef.occupied_nxt = (((~ (1ULL 
                                               << (0x3fU 
                                                   & (((IData)(7U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.row_id))) 
                                                      + (IData)(vlSelfRef.col_id))))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x3ffffffffffULL 
                                             & ((QData)((IData)(vlSelfRef.__Vlvbound_ha9697794__0)) 
                                                << 
                                                (0x3fU 
                                                 & (((IData)(7U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.row_id))) 
                                                    + (IData)(vlSelfRef.col_id))))));
                vlSelfRef.whos_nxt = (((~ (1ULL << 
                                           (0x3fU & 
                                            (((IData)(7U) 
                                              * ((IData)(1U) 
                                                 + (IData)(vlSelfRef.row_id))) 
                                             + (IData)(vlSelfRef.col_id))))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x3ffffffffffULL 
                                         & ((QData)((IData)(vlSelfRef.__Vlvbound_h0ff1056b__0)) 
                                            << (0x3fU 
                                                & (((IData)(7U) 
                                                    * 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.row_id))) 
                                                   + (IData)(vlSelfRef.col_id))))));
            }
        }
    } else if ((2U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.wj_op_fire) {
            vlSelfRef.wj_re_ready_nxt = 1U;
            vlSelfRef.wj_op_valid_nxt = 0U;
            vlSelfRef.S_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.wj_re_fire) {
            vlSelfRef.wj_re_ready_nxt = 0U;
            vlSelfRef.re_valid_nxt = 1U;
            vlSelfRef.re_err_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = ((IData)(vlSelfRef.wj_re_is_finished) 
                                            | (0x7fU 
                                               == (IData)(vlSelfRef.col_full)));
            vlSelfRef.re_winner_nxt = ((IData)(vlSelfRef.wj_re_is_finished)
                                        ? (1U & (IData)(vlSelfRef.player_id))
                                        : 0U);
            vlSelfRef.S_nxt = 4U;
            vlSelfRef.re_tie_nxt = ((0x7fU == (IData)(vlSelfRef.col_full)) 
                                    & (~ (IData)(vlSelfRef.wj_re_is_finished)));
        }
    } else if ((4U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.re_fire) {
            vlSelfRef.op_ready_nxt = 1U;
            vlSelfRef.re_valid_nxt = 0U;
            vlSelfRef.re_err_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = 0U;
            vlSelfRef.re_winner_nxt = 0U;
            vlSelfRef.re_tie_nxt = 0U;
            if (vlSelfRef.re_is_finished) {
                vlSelfRef.occupied_nxt = 0ULL;
                vlSelfRef.whos_nxt = 0ULL;
                vlSelfRef.player_id_nxt = 0U;
                vlSelfRef.col_id_nxt = 0U;
                vlSelfRef.row_id_nxt = 0U;
            }
            vlSelfRef.S_nxt = 0U;
        }
    }
}
