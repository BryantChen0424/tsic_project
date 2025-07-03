// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbagh_chal.h for the primary calling header

#include "Vbagh_chal__pch.h"
#include "Vbagh_chal_bagh_chal.h"

VL_INLINE_OPT void Vbagh_chal_bagh_chal___ico_sequent__TOP__bagh_chal__0(Vbagh_chal_bagh_chal* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbagh_chal_bagh_chal___ico_sequent__TOP__bagh_chal__0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.su__DOT__occupied = vlSelfRef.occupied;
    vlSelfRef.su__DOT__whos = vlSelfRef.whos;
    vlSelfRef.su__DOT__all_vacant = (0x1ffffffU & (~ vlSelfRef.occupied));
    vlSelfRef.su__DOT__all_goat = (vlSelfRef.occupied 
                                   & (~ vlSelfRef.whos));
    vlSelfRef.su__DOT__all_tiger = (vlSelfRef.occupied 
                                    & vlSelfRef.whos);
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffffeU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | ((1U & (~ 
                                                   ((0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                            && (((((1U 
                                                    == 
                                                    (- 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                || (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    & ((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffffdU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    (- 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(1U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 1U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffffbU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(2U))))))) 
                                            << 2U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffff7U 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    (- 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(3U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 3U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffffefU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(4U))))))) 
                                            << 4U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffffdfU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(1U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(1U)))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 5U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffffbfU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(1U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(1U))))))) 
                                            << 6U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffff7fU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(1U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(1U)))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(2U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 7U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffeffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(1U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(3U))))))) 
                                            << 8U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffdffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(1U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(1U)))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(4U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 9U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffbffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(2U)))) 
                                                     & ((1U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                            << 0xaU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fff7ffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(2U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(2U)))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(1U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0xbU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffefffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(2U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(2U))))))) 
                                            << 0xcU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffdfffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(2U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(2U)))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(3U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0xdU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffbfffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(2U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(4U))))))) 
                                            << 0xeU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ff7fffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(3U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(3U)))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0xfU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1feffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(3U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(1U))))))) 
                                            << 0x10U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fdffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(3U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(3U)))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(2U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x11U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fbffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(3U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(3U))))))) 
                                            << 0x12U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1f7ffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(3U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(3U)))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(4U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x13U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1efffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(4U)))) 
                                                     & ((1U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                            << 0x14U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1dfffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(4U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(4U)))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(1U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x15U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1bfffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(4U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(2U))))))) 
                                            << 0x16U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x17fffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(4U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(4U)))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(3U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x17U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0xffffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(4U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(4U))))))) 
                                            << 0x18U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffffeU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | ((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     & ((1U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffffdU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 1U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffffbU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(2U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U))))))) 
                                             << 2U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffff7U 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 3U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffffefU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(4U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U))))))) 
                                             << 4U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffffdfU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 5U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffffbfU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(1U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(1U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U))))))) 
                                             << 6U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffff7fU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 7U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffeffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(1U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(3U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U))))))) 
                                             << 8U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffdffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 9U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffbffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(2U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & ((1U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                             << 0xaU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fff7ffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0xbU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffefffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(2U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(2U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U))))))) 
                                             << 0xcU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffdfffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0xdU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffbfffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(2U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(4U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U))))))) 
                                             << 0xeU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ff7fffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0xfU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1feffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(3U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(1U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U))))))) 
                                             << 0x10U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fdffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x11U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fbffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(3U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(3U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U))))))) 
                                             << 0x12U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1f7ffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x13U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1efffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(4U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & ((1U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                             << 0x14U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1dfffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x15U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1bfffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(4U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(2U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U))))))) 
                                             << 0x16U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x17fffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x17U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0xffffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(4U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(4U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U))))))) 
                                             << 0x18U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffffeU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | ((1U 
                                                & (~ 
                                                   ((0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                               && ((((((2U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        & (0U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                   || ((((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        & ((2U 
                                                            == 
                                                            (- 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                           | (2U 
                                                              == 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))) 
                                                       & ((0x18U 
                                                           >= 
                                                           (0x1fU 
                                                            & (VL_MULS_III(32, (IData)(5U), 
                                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                            + 
                                                                            VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                               + 
                                                               (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                + 
                                                                VL_DIVS_III(32, 
                                                                            (- 
                                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                          && (1U 
                                                              & (vlSelfRef.su__DOT__all_goat 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                     + 
                                                                     (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                      + 
                                                                      VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffffdU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U)))) 
                                                        & (0U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(1U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 1U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffffbU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       & (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(2U)))) 
                                                         & (0U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(2U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(2U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(2U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(2U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 2U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffff7U 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U)))) 
                                                        & (0U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(3U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 3U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffffefU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       & (4U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(4U)))) 
                                                         & (0U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(4U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(4U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(4U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(4U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 4U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffffdfU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        & (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 5U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffffbfU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(1U)))) 
                                                       & (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(1U)))) 
                                                         & (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(1U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(1U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(1U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(1U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(1U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 6U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffff7fU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U)))) 
                                                        & (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(2U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 7U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffeffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(1U)))) 
                                                       & (3U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(3U)))) 
                                                         & (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(3U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(1U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(3U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(3U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(3U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 8U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffdffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U)))) 
                                                        & (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(4U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 9U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffbffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(2U)))) 
                                                       & (0U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         & (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          (- 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(2U)))) 
                                                         & ((2U 
                                                             == 
                                                             (- 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             (- 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0xaU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fff7ffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U)))) 
                                                        & (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(1U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0xbU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffefffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(2U)))) 
                                                       & (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(2U)))) 
                                                         & (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(2U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(2U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(2U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(2U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(2U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0xcU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffdfffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U)))) 
                                                        & (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(3U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0xdU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffbfffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(2U)))) 
                                                       & (4U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(4U)))) 
                                                         & (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(4U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(2U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(4U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(4U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(4U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0xeU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ff7fffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        & (3U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0xfU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1feffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(3U)))) 
                                                       & (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(1U)))) 
                                                         & (3U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(1U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(3U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(1U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(1U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(1U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x10U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fdffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U)))) 
                                                        & (3U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(2U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x11U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fbffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(3U)))) 
                                                       & (3U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(3U)))) 
                                                         & (3U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(3U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(3U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(3U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(3U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(3U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x12U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1f7ffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U)))) 
                                                        & (3U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(4U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x13U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1efffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(4U)))) 
                                                       & (0U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         & (4U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          (- 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(4U)))) 
                                                         & ((2U 
                                                             == 
                                                             (- 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             (- 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x14U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1dfffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U)))) 
                                                        & (4U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(1U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x15U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1bfffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(4U)))) 
                                                       & (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(2U)))) 
                                                         & (4U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(2U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(4U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(2U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(2U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(2U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x16U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x17fffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U)))) 
                                                        & (4U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(3U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x17U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0xffffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(4U)))) 
                                                       & (4U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(4U)))) 
                                                         & (4U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(4U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(4U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(4U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(4U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(4U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x18U));
    vlSelfRef.su_o_tigers_cantmove = (1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       ((vlSelfRef.su__DOT__ctiger_can_goto 
                                                         | vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                                        & vlSelfRef.su__DOT__all_vacant)))));
    vlSelfRef.su_o_update = ((1U == (IData)(vlSelfRef.S))
                              ? (vlSelfRef.su__DOT__all_goat 
                                 | (vlSelfRef.su__DOT__cgoat_can_goto 
                                    & vlSelfRef.su__DOT__all_vacant))
                              : ((5U == (IData)(vlSelfRef.S))
                                  ? vlSelfRef.su__DOT__all_tiger
                                  : ((7U == (IData)(vlSelfRef.S))
                                      ? (vlSelfRef.su__DOT__all_tiger 
                                         | ((vlSelfRef.su__DOT__ctiger_can_goto 
                                             | vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            & vlSelfRef.su__DOT__all_vacant))
                                      : ((0xaU == (IData)(vlSelfRef.S))
                                          ? ((0U < (IData)(vlSelfRef.goats_in_hand))
                                              ? vlSelfRef.su__DOT__all_vacant
                                              : vlSelfRef.su__DOT__all_goat)
                                          : 0U))));
    vlSelfRef.su__DOT__o_update = vlSelfRef.su_o_update;
    vlSelfRef.re_selectable = ((IData)(vlSelfRef.re_valid)
                                ? (0x1ffffffU & vlSelfRef.su_o_update)
                                : 0U);
    vlSelfRef.su__DOT__o_tigers_cantmove = vlSelfRef.su_o_tigers_cantmove;
    vlSelfRef.op_fire = ((IData)(vlSelfRef.op_ready) 
                         & (IData)(vlSelfRef.op_valid));
    vlSelfRef.re_fire = ((IData)(vlSelfRef.re_ready) 
                         & (IData)(vlSelfRef.re_valid));
    vlSelfRef.opij2idx = (0x1fU & (((IData)(5U) * (IData)(vlSelfRef.op_i)) 
                                   + (IData)(vlSelfRef.op_j)));
    vlSelfRef.cij2idx = (0x1fU & (VL_MULS_III(32, (IData)(5U), 
                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci))) 
                                  + VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj))));
    vlSelfRef.pij2idx = (0x1fU & (VL_MULS_III(32, (IData)(5U), 
                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.pi))) 
                                  + VL_EXTENDS_II(5,5, (IData)(vlSelfRef.pj))));
    vlSelfRef.op_ready_nxt = vlSelfRef.op_ready;
    vlSelfRef.re_valid_nxt = vlSelfRef.re_valid;
    vlSelfRef.re_is_finished_nxt = vlSelfRef.re_is_finished;
    vlSelfRef.re_possible_ops_nxt = vlSelfRef.re_possible_ops;
    vlSelfRef.S_nxt = vlSelfRef.S;
    vlSelfRef.occupied_nxt = vlSelfRef.occupied;
    vlSelfRef.whos_nxt = vlSelfRef.whos;
    vlSelfRef.ci_nxt = vlSelfRef.ci;
    vlSelfRef.cj_nxt = vlSelfRef.cj;
    vlSelfRef.pi_nxt = vlSelfRef.pi;
    vlSelfRef.pj_nxt = vlSelfRef.pj;
    vlSelfRef.goats_in_hand_nxt = vlSelfRef.goats_in_hand;
    vlSelfRef.goats_killed_nxt = vlSelfRef.goats_killed;
    vlSelfRef.t0i_nxt = vlSelfRef.t0i;
    vlSelfRef.t1i_nxt = vlSelfRef.t1i;
    vlSelfRef.t2i_nxt = vlSelfRef.t2i;
    vlSelfRef.t3i_nxt = vlSelfRef.t3i;
    vlSelfRef.t0j_nxt = vlSelfRef.t0j;
    vlSelfRef.t1j_nxt = vlSelfRef.t1j;
    vlSelfRef.t2j_nxt = vlSelfRef.t2j;
    vlSelfRef.t3j_nxt = vlSelfRef.t3j;
    vlSelfRef.check_tiger_id_nxt = vlSelfRef.check_tiger_id;
    if (((((((((0U == (IData)(vlSelfRef.S)) | (1U == (IData)(vlSelfRef.S))) 
              | (2U == (IData)(vlSelfRef.S))) | (3U 
                                                 == (IData)(vlSelfRef.S))) 
            | (4U == (IData)(vlSelfRef.S))) | (5U == (IData)(vlSelfRef.S))) 
          | (6U == (IData)(vlSelfRef.S))) | (7U == (IData)(vlSelfRef.S)))) {
        if ((0U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.op_fire) {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.ci_nxt = vlSelfRef.op_i;
                vlSelfRef.cj_nxt = vlSelfRef.op_j;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 2U;
                vlSelfRef.S_nxt = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.re_fire) {
                vlSelfRef.op_ready_nxt = 1U;
                vlSelfRef.re_valid_nxt = 0U;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 0U;
                vlSelfRef.S_nxt = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.op_fire) {
                if (((0x18U >= (IData)(vlSelfRef.opij2idx)) 
                     && (1U & (vlSelfRef.occupied >> (IData)(vlSelfRef.opij2idx))))) {
                    vlSelfRef.op_ready_nxt = 0U;
                    vlSelfRef.re_valid_nxt = 1U;
                    vlSelfRef.ci_nxt = vlSelfRef.op_i;
                    vlSelfRef.cj_nxt = vlSelfRef.op_j;
                    vlSelfRef.re_is_finished_nxt = 0U;
                    vlSelfRef.re_possible_ops_nxt = 2U;
                    vlSelfRef.S_nxt = 1U;
                } else {
                    vlSelfRef.op_ready_nxt = 0U;
                    vlSelfRef.pi_nxt = vlSelfRef.op_i;
                    vlSelfRef.pj_nxt = vlSelfRef.op_j;
                    vlSelfRef.S_nxt = 3U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.S))) {
            if ((0U == (IData)(vlSelfRef.goats_in_hand))) {
                vlSelfRef.__Vlvbound_ha134e953__0 = 0U;
                vlSelfRef.__Vlvbound_h13906274__0 = 0U;
                if ((0x18U >= (IData)(vlSelfRef.cij2idx))) {
                    vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                                   << (IData)(vlSelfRef.cij2idx))) 
                                               & vlSelfRef.occupied_nxt) 
                                              | (0x1ffffffU 
                                                 & ((IData)(vlSelfRef.__Vlvbound_ha134e953__0) 
                                                    << (IData)(vlSelfRef.cij2idx))));
                    vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                               << (IData)(vlSelfRef.cij2idx))) 
                                           & vlSelfRef.whos_nxt) 
                                          | (0x1ffffffU 
                                             & ((IData)(vlSelfRef.__Vlvbound_h13906274__0) 
                                                << (IData)(vlSelfRef.cij2idx))));
                }
            } else {
                vlSelfRef.goats_in_hand_nxt = (0x1fU 
                                               & ((IData)(vlSelfRef.goats_in_hand) 
                                                  - (IData)(1U)));
            }
            vlSelfRef.re_is_finished_nxt = vlSelfRef.su_o_tigers_cantmove;
            vlSelfRef.re_possible_ops_nxt = 4U;
            vlSelfRef.S_nxt = 4U;
            vlSelfRef.__Vlvbound_h5d1d6572__0 = 1U;
            vlSelfRef.__Vlvbound_h823c4ae0__0 = 0U;
            if ((0x18U >= (IData)(vlSelfRef.pij2idx))) {
                vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                               << (IData)(vlSelfRef.pij2idx))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x1ffffffU 
                                             & ((IData)(vlSelfRef.__Vlvbound_h5d1d6572__0) 
                                                << (IData)(vlSelfRef.pij2idx))));
                vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                           << (IData)(vlSelfRef.pij2idx))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_h823c4ae0__0) 
                                            << (IData)(vlSelfRef.pij2idx))));
            }
        } else if ((4U == (IData)(vlSelfRef.S))) {
            if ((3U == (IData)(vlSelfRef.check_tiger_id))) {
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.re_is_finished_nxt = vlSelfRef.su_o_tigers_cantmove;
                vlSelfRef.check_tiger_id_nxt = 0U;
                vlSelfRef.S_nxt = 5U;
            } else {
                vlSelfRef.re_valid_nxt = (1U & (~ (IData)(vlSelfRef.su_o_tigers_cantmove)));
                vlSelfRef.re_is_finished_nxt = 0U;
                if (vlSelfRef.su_o_tigers_cantmove) {
                    vlSelfRef.check_tiger_id_nxt = 
                        (0xfU & ((IData)(1U) + (IData)(vlSelfRef.check_tiger_id)));
                    vlSelfRef.S_nxt = 4U;
                } else {
                    vlSelfRef.check_tiger_id_nxt = 0U;
                    vlSelfRef.S_nxt = 5U;
                }
            }
        } else if ((5U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.re_fire) {
                vlSelfRef.op_ready_nxt = 1U;
                vlSelfRef.ci_nxt = 0U;
                vlSelfRef.re_valid_nxt = 0U;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 0U;
                vlSelfRef.cj_nxt = 0U;
                vlSelfRef.pi_nxt = 0U;
                vlSelfRef.pj_nxt = 0U;
                if (vlSelfRef.re_is_finished) {
                    vlSelfRef.S_nxt = 2U;
                    vlSelfRef.occupied_nxt = (1U | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (1U | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 1U;
                    vlSelfRef.ci_nxt = 0U;
                    vlSelfRef.cj_nxt = 0U;
                    vlSelfRef.pi_nxt = 0U;
                    vlSelfRef.pj_nxt = 0U;
                    vlSelfRef.goats_in_hand_nxt = 0x14U;
                    vlSelfRef.goats_killed_nxt = 0U;
                    vlSelfRef.t0i_nxt = 0U;
                    vlSelfRef.t0j_nxt = 0U;
                    vlSelfRef.t1i_nxt = 0U;
                    vlSelfRef.t1j_nxt = 4U;
                    vlSelfRef.t2i_nxt = 4U;
                    vlSelfRef.t2j_nxt = 0U;
                    vlSelfRef.t3i_nxt = 4U;
                    vlSelfRef.t3j_nxt = 4U;
                    vlSelfRef.check_tiger_id_nxt = 0U;
                    vlSelfRef.occupied_nxt = (0x1fffffdU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffffdU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 2U;
                    vlSelfRef.occupied_nxt = (0x1fffffbU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffffbU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 3U;
                    vlSelfRef.occupied_nxt = (0x1fffff7U 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffff7U 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 4U;
                    vlSelfRef.occupied_nxt = (0x10U 
                                              | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x10U | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 5U;
                    vlSelfRef.occupied_nxt = (0x1ffffdfU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffffdfU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 6U;
                    vlSelfRef.occupied_nxt = (0x1ffffbfU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffffbfU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 7U;
                    vlSelfRef.occupied_nxt = (0x1ffff7fU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffff7fU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 8U;
                    vlSelfRef.occupied_nxt = (0x1fffeffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffeffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 9U;
                    vlSelfRef.occupied_nxt = (0x1fffdffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffdffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xaU;
                    vlSelfRef.occupied_nxt = (0x1fffbffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffbffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xbU;
                    vlSelfRef.occupied_nxt = (0x1fff7ffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fff7ffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xcU;
                    vlSelfRef.occupied_nxt = (0x1ffefffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffefffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xdU;
                    vlSelfRef.occupied_nxt = (0x1ffdfffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffdfffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xeU;
                    vlSelfRef.occupied_nxt = (0x1ffbfffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffbfffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xfU;
                    vlSelfRef.occupied_nxt = (0x1ff7fffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ff7fffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x10U;
                    vlSelfRef.occupied_nxt = (0x1feffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1feffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x11U;
                    vlSelfRef.occupied_nxt = (0x1fdffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fdffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x12U;
                    vlSelfRef.occupied_nxt = (0x1fbffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fbffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x13U;
                    vlSelfRef.occupied_nxt = (0x1f7ffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1f7ffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x14U;
                    vlSelfRef.occupied_nxt = (0x100000U 
                                              | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x100000U 
                                          | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x15U;
                    vlSelfRef.occupied_nxt = (0x1dfffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1dfffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x16U;
                    vlSelfRef.occupied_nxt = (0x1bfffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1bfffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x17U;
                    vlSelfRef.occupied_nxt = (0x17fffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x17fffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x18U;
                    vlSelfRef.occupied_nxt = (0x1000000U 
                                              | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1000000U 
                                          | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x19U;
                } else {
                    vlSelfRef.S_nxt = 6U;
                }
            }
        } else if ((6U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.op_fire) {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.ci_nxt = vlSelfRef.op_i;
                vlSelfRef.cj_nxt = vlSelfRef.op_j;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 5U;
                vlSelfRef.S_nxt = 7U;
            }
        } else if (vlSelfRef.re_fire) {
            vlSelfRef.op_ready_nxt = 1U;
            vlSelfRef.re_valid_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = 0U;
            vlSelfRef.re_possible_ops_nxt = 0U;
            vlSelfRef.S_nxt = 8U;
        }
    } else if ((8U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.op_fire) {
            if (((0x18U >= (IData)(vlSelfRef.opij2idx)) 
                 && (1U & (vlSelfRef.occupied >> (IData)(vlSelfRef.opij2idx))))) {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.ci_nxt = vlSelfRef.op_i;
                vlSelfRef.cj_nxt = vlSelfRef.op_j;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 5U;
                vlSelfRef.S_nxt = 7U;
            } else {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.pi_nxt = vlSelfRef.op_i;
                vlSelfRef.pj_nxt = vlSelfRef.op_j;
                vlSelfRef.S_nxt = 9U;
            }
        }
    } else if ((9U == (IData)(vlSelfRef.S))) {
        vlSelfRef.__Vlvbound_ha134e953__1 = 0U;
        vlSelfRef.re_valid_nxt = 1U;
        vlSelfRef.re_possible_ops_nxt = ((0U == (IData)(vlSelfRef.goats_in_hand))
                                          ? 1U : 3U);
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t0i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t0j)))) {
            vlSelfRef.t0i_nxt = vlSelfRef.pi;
            vlSelfRef.t0j_nxt = vlSelfRef.pj;
        }
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t1i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t1j)))) {
            vlSelfRef.t1i_nxt = vlSelfRef.pi;
            vlSelfRef.t1j_nxt = vlSelfRef.pj;
        }
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t2i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t2j)))) {
            vlSelfRef.t2i_nxt = vlSelfRef.pi;
            vlSelfRef.t2j_nxt = vlSelfRef.pj;
        }
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t3i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t3j)))) {
            vlSelfRef.t3i_nxt = vlSelfRef.pi;
            vlSelfRef.t3j_nxt = vlSelfRef.pj;
        }
        vlSelfRef.S_nxt = 0xaU;
        vlSelfRef.__Vlvbound_h13906274__1 = 0U;
        if ((0x18U >= (IData)(vlSelfRef.cij2idx))) {
            vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                           << (IData)(vlSelfRef.cij2idx))) 
                                       & vlSelfRef.occupied_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_ha134e953__1) 
                                            << (IData)(vlSelfRef.cij2idx))));
            vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.cij2idx))) 
                                   & vlSelfRef.whos_nxt) 
                                  | (0x1ffffffU & ((IData)(vlSelfRef.__Vlvbound_h13906274__1) 
                                                   << (IData)(vlSelfRef.cij2idx))));
        }
        vlSelfRef.__Vlvbound_h5d1d6572__1 = 1U;
        vlSelfRef.__Vlvbound_h823c4ae0__1 = 1U;
        if ((0x18U >= (IData)(vlSelfRef.pij2idx))) {
            vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                           << (IData)(vlSelfRef.pij2idx))) 
                                       & vlSelfRef.occupied_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_h5d1d6572__1) 
                                            << (IData)(vlSelfRef.pij2idx))));
            vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.pij2idx))) 
                                   & vlSelfRef.whos_nxt) 
                                  | (0x1ffffffU & ((IData)(vlSelfRef.__Vlvbound_h823c4ae0__1) 
                                                   << (IData)(vlSelfRef.pij2idx))));
        }
        vlSelfRef.i_dist = (0x1fU & ((IData)(vlSelfRef.pi) 
                                     - (IData)(vlSelfRef.ci)));
        vlSelfRef.j_dist = (0x1fU & ((IData)(vlSelfRef.pj) 
                                     - (IData)(vlSelfRef.cj)));
        if ((((~ (IData)(vlSelfRef.i_dist)) & ((IData)(vlSelfRef.pi) 
                                               != (IData)(vlSelfRef.ci))) 
             | ((~ (IData)(vlSelfRef.j_dist)) & ((IData)(vlSelfRef.pj) 
                                                 != (IData)(vlSelfRef.cj))))) {
            vlSelfRef.__Vlvbound_h8ccd81e1__0 = 0U;
            vlSelfRef.goats_killed_nxt = (0x1fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.goats_killed)));
            vlSelfRef.__Vlvbound_hc9a42266__0 = 0U;
            if ((0x18U >= (0x1fU & (VL_MULS_III(32, (IData)(5U), 
                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                 + 
                                                 VL_DIVS_III(32, 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                    + (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                       + VL_DIVS_III(32, 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))) {
                vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                               << (0x1fU 
                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                  (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                      + 
                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                       + 
                                                       VL_DIVS_III(32, 
                                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x1ffffffU 
                                             & ((IData)(vlSelfRef.__Vlvbound_h8ccd81e1__0) 
                                                << 
                                                (0x1fU 
                                                 & (VL_MULS_III(32, (IData)(5U), 
                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                    + 
                                                    (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                     + 
                                                     VL_DIVS_III(32, 
                                                                 VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))));
                vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                           << (0x1fU 
                                               & (VL_MULS_III(32, (IData)(5U), 
                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                               + 
                                                               VL_DIVS_III(32, 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                  + 
                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                   + 
                                                   VL_DIVS_III(32, 
                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_hc9a42266__0) 
                                            << (0x1fU 
                                                & (VL_MULS_III(32, (IData)(5U), 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                                + 
                                                                VL_DIVS_III(32, 
                                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                   + 
                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                    + 
                                                    VL_DIVS_III(32, 
                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))));
            }
        }
        if ((5U == (IData)(vlSelfRef.goats_killed_nxt))) {
            vlSelfRef.re_is_finished_nxt = 1U;
        }
    } else if ((0xaU == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.re_fire) {
            vlSelfRef.op_ready_nxt = 1U;
            vlSelfRef.ci_nxt = 0U;
            vlSelfRef.re_valid_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = 0U;
            vlSelfRef.re_possible_ops_nxt = 0U;
            vlSelfRef.cj_nxt = 0U;
            vlSelfRef.pi_nxt = 0U;
            vlSelfRef.pj_nxt = 0U;
            if (vlSelfRef.re_is_finished) {
                vlSelfRef.S_nxt = 2U;
                vlSelfRef.occupied_nxt = (1U | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (1U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 1U;
                vlSelfRef.ci_nxt = 0U;
                vlSelfRef.cj_nxt = 0U;
                vlSelfRef.pi_nxt = 0U;
                vlSelfRef.pj_nxt = 0U;
                vlSelfRef.goats_in_hand_nxt = 0x14U;
                vlSelfRef.goats_killed_nxt = 0U;
                vlSelfRef.t0i_nxt = 0U;
                vlSelfRef.t0j_nxt = 0U;
                vlSelfRef.t1i_nxt = 0U;
                vlSelfRef.t1j_nxt = 4U;
                vlSelfRef.t2i_nxt = 4U;
                vlSelfRef.t2j_nxt = 0U;
                vlSelfRef.t3i_nxt = 4U;
                vlSelfRef.t3j_nxt = 4U;
                vlSelfRef.check_tiger_id_nxt = 0U;
                vlSelfRef.occupied_nxt = (0x1fffffdU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffffdU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 2U;
                vlSelfRef.occupied_nxt = (0x1fffffbU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffffbU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 3U;
                vlSelfRef.occupied_nxt = (0x1fffff7U 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffff7U & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 4U;
                vlSelfRef.occupied_nxt = (0x10U | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x10U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 5U;
                vlSelfRef.occupied_nxt = (0x1ffffdfU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffffdfU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 6U;
                vlSelfRef.occupied_nxt = (0x1ffffbfU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffffbfU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 7U;
                vlSelfRef.occupied_nxt = (0x1ffff7fU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffff7fU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 8U;
                vlSelfRef.occupied_nxt = (0x1fffeffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffeffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 9U;
                vlSelfRef.occupied_nxt = (0x1fffdffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffdffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xaU;
                vlSelfRef.occupied_nxt = (0x1fffbffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffbffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xbU;
                vlSelfRef.occupied_nxt = (0x1fff7ffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fff7ffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xcU;
                vlSelfRef.occupied_nxt = (0x1ffefffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffefffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xdU;
                vlSelfRef.occupied_nxt = (0x1ffdfffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffdfffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xeU;
                vlSelfRef.occupied_nxt = (0x1ffbfffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffbfffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xfU;
                vlSelfRef.occupied_nxt = (0x1ff7fffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ff7fffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x10U;
                vlSelfRef.occupied_nxt = (0x1feffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1feffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x11U;
                vlSelfRef.occupied_nxt = (0x1fdffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fdffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x12U;
                vlSelfRef.occupied_nxt = (0x1fbffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fbffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x13U;
                vlSelfRef.occupied_nxt = (0x1f7ffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1f7ffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x14U;
                vlSelfRef.occupied_nxt = (0x100000U 
                                          | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x100000U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x15U;
                vlSelfRef.occupied_nxt = (0x1dfffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1dfffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x16U;
                vlSelfRef.occupied_nxt = (0x1bfffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1bfffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x17U;
                vlSelfRef.occupied_nxt = (0x17fffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x17fffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x18U;
                vlSelfRef.occupied_nxt = (0x1000000U 
                                          | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1000000U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x19U;
            } else {
                vlSelfRef.S_nxt = ((0U == (IData)(vlSelfRef.goats_in_hand))
                                    ? 0U : 2U);
            }
        }
    }
}

VL_INLINE_OPT void Vbagh_chal_bagh_chal___nba_sequent__TOP__bagh_chal__0(Vbagh_chal_bagh_chal* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbagh_chal_bagh_chal___nba_sequent__TOP__bagh_chal__0\n"); );
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.idx = 1U;
        vlSelfRef.idx = 2U;
        vlSelfRef.idx = 3U;
        vlSelfRef.idx = 4U;
        vlSelfRef.idx = 5U;
        vlSelfRef.idx = 6U;
        vlSelfRef.idx = 7U;
        vlSelfRef.idx = 8U;
        vlSelfRef.idx = 9U;
        vlSelfRef.idx = 0xaU;
        vlSelfRef.idx = 0xbU;
        vlSelfRef.idx = 0xcU;
        vlSelfRef.idx = 0xdU;
        vlSelfRef.idx = 0xeU;
        vlSelfRef.idx = 0xfU;
        vlSelfRef.idx = 0x10U;
        vlSelfRef.idx = 0x11U;
        vlSelfRef.idx = 0x12U;
        vlSelfRef.idx = 0x13U;
        vlSelfRef.idx = 0x14U;
        vlSelfRef.idx = 0x15U;
        vlSelfRef.idx = 0x16U;
        vlSelfRef.idx = 0x17U;
        vlSelfRef.idx = 0x18U;
        vlSelfRef.idx = 0x19U;
    }
    if (vlSelfRef.rst_n) {
        vlSelfRef.pj = vlSelfRef.pj_nxt;
        vlSelfRef.pi = vlSelfRef.pi_nxt;
        vlSelfRef.re_possible_ops = vlSelfRef.re_possible_ops_nxt;
        vlSelfRef.goats_killed = vlSelfRef.goats_killed_nxt;
        vlSelfRef.occupied = vlSelfRef.occupied_nxt;
        vlSelfRef.whos = vlSelfRef.whos_nxt;
        vlSelfRef.goats_in_hand = vlSelfRef.goats_in_hand_nxt;
        vlSelfRef.t3j = vlSelfRef.t3j_nxt;
        vlSelfRef.t3i = vlSelfRef.t3i_nxt;
        vlSelfRef.t2j = vlSelfRef.t2j_nxt;
        vlSelfRef.t2i = vlSelfRef.t2i_nxt;
        vlSelfRef.t1j = vlSelfRef.t1j_nxt;
        vlSelfRef.t1i = vlSelfRef.t1i_nxt;
        vlSelfRef.t0j = vlSelfRef.t0j_nxt;
        vlSelfRef.t0i = vlSelfRef.t0i_nxt;
        vlSelfRef.ci = vlSelfRef.ci_nxt;
        vlSelfRef.cj = vlSelfRef.cj_nxt;
        vlSelfRef.check_tiger_id = vlSelfRef.check_tiger_id_nxt;
        vlSelfRef.S = vlSelfRef.S_nxt;
    } else {
        vlSelfRef.pj = 0U;
        vlSelfRef.pi = 0U;
        vlSelfRef.re_possible_ops = 0U;
        vlSelfRef.goats_killed = 0U;
        vlSelfRef.occupied = 0x1100011U;
        vlSelfRef.whos = 0x1100011U;
        vlSelfRef.goats_in_hand = 0x14U;
        vlSelfRef.t3j = 4U;
        vlSelfRef.t3i = 4U;
        vlSelfRef.t2j = 0U;
        vlSelfRef.t2i = 4U;
        vlSelfRef.t1j = 4U;
        vlSelfRef.t1i = 0U;
        vlSelfRef.t0j = 0U;
        vlSelfRef.t0i = 0U;
        vlSelfRef.ci = 0U;
        vlSelfRef.cj = 0U;
        vlSelfRef.check_tiger_id = 0U;
        vlSelfRef.S = 2U;
    }
    vlSelfRef.re_is_finished = ((IData)(vlSelfRef.rst_n) 
                                && (IData)(vlSelfRef.re_is_finished_nxt));
    vlSelfRef.op_ready = ((IData)(vlSelfRef.rst_n) 
                          && (IData)(vlSelfRef.op_ready_nxt));
    vlSelfRef.re_valid = ((IData)(vlSelfRef.rst_n) 
                          && (IData)(vlSelfRef.re_valid_nxt));
    vlSelfRef.o_goats_killed = vlSelfRef.goats_killed;
    vlSelfRef.su__DOT__occupied = vlSelfRef.occupied;
    vlSelfRef.su__DOT__whos = vlSelfRef.whos;
    vlSelfRef.su__DOT__goats_in_hand = vlSelfRef.goats_in_hand;
    vlSelfRef.o_goats_in_hand = vlSelfRef.goats_in_hand;
    vlSelfRef.su__DOT__S = vlSelfRef.S;
    vlSelfRef.su_cj = vlSelfRef.cj;
    vlSelfRef.su_ci = vlSelfRef.ci;
    if (((((((((0U == (IData)(vlSelfRef.S)) | (1U == (IData)(vlSelfRef.S))) 
              | (2U == (IData)(vlSelfRef.S))) | (3U 
                                                 == (IData)(vlSelfRef.S))) 
            | (4U == (IData)(vlSelfRef.S))) | (5U == (IData)(vlSelfRef.S))) 
          | (6U == (IData)(vlSelfRef.S))) | (7U == (IData)(vlSelfRef.S)))) {
        if ((0U != (IData)(vlSelfRef.S))) {
            if ((1U != (IData)(vlSelfRef.S))) {
                if ((2U != (IData)(vlSelfRef.S))) {
                    if ((3U != (IData)(vlSelfRef.S))) {
                        if ((4U == (IData)(vlSelfRef.S))) {
                            if ((1U & (~ ((IData)(vlSelfRef.check_tiger_id) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.check_tiger_id) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelfRef.check_tiger_id))) {
                                        if ((1U & (IData)(vlSelfRef.check_tiger_id))) {
                                            vlSelfRef.su_cj 
                                                = vlSelfRef.t3j;
                                            vlSelfRef.su_ci 
                                                = vlSelfRef.t3i;
                                        } else {
                                            vlSelfRef.su_cj 
                                                = vlSelfRef.t2j;
                                            vlSelfRef.su_ci 
                                                = vlSelfRef.t2i;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.check_tiger_id))) {
                                        vlSelfRef.su_cj 
                                            = vlSelfRef.t1j;
                                        vlSelfRef.su_ci 
                                            = vlSelfRef.t1i;
                                    } else {
                                        vlSelfRef.su_cj 
                                            = vlSelfRef.t0j;
                                        vlSelfRef.su_ci 
                                            = vlSelfRef.t0i;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.su__DOT__cj = vlSelfRef.su_cj;
    } else {
        vlSelfRef.su__DOT__cj = vlSelfRef.su_cj;
    }
    vlSelfRef.su__DOT__ci = vlSelfRef.su_ci;
    vlSelfRef.su__DOT__all_vacant = (0x1ffffffU & (~ vlSelfRef.occupied));
    vlSelfRef.su__DOT__all_goat = (vlSelfRef.occupied 
                                   & (~ vlSelfRef.whos));
    vlSelfRef.su__DOT__all_tiger = (vlSelfRef.occupied 
                                    & vlSelfRef.whos);
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffffeU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | ((1U & (~ 
                                                   ((0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                            && (((((1U 
                                                    == 
                                                    (- 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                || (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    & ((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffffdU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    (- 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(1U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 1U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffffbU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(2U))))))) 
                                            << 2U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffff7U 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    (- 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(3U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 3U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffffefU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(4U))))))) 
                                            << 4U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffffdfU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(1U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(1U)))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 5U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffffbfU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(1U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(1U))))))) 
                                            << 6U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffff7fU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(1U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(1U)))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(2U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 7U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffeffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(1U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(3U))))))) 
                                            << 8U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffdffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((1U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(1U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(1U)))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(4U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 9U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fffbffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(2U)))) 
                                                     & ((1U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                            << 0xaU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fff7ffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(2U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(2U)))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(1U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0xbU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffefffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(2U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(2U))))))) 
                                            << 0xcU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffdfffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(2U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(2U)))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(3U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0xdU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ffbfffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((2U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(2U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(4U))))))) 
                                            << 0xeU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1ff7fffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(3U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(3U)))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0xfU));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1feffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(3U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(1U))))))) 
                                            << 0x10U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fdffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(3U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(3U)))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(2U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x11U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1fbffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(3U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(3U))))))) 
                                            << 0x12U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1f7ffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((3U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(3U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(3U)))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(4U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x13U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1efffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(4U)))) 
                                                     & ((1U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                            << 0x14U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1dfffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(4U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(4U)))) 
                                                  & (1U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(1U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x15U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x1bfffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (2U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(4U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(2U))))))) 
                                            << 0x16U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0x17fffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && ((((1U 
                                                    == 
                                                    ((IData)(4U) 
                                                     - 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   | (1U 
                                                      == 
                                                      (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                       - (IData)(4U)))) 
                                                  & (3U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                 | (((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                         - (IData)(3U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                            << 0x17U));
    vlSelfRef.su__DOT__cgoat_can_goto = ((0xffffffU 
                                          & vlSelfRef.su__DOT__cgoat_can_goto) 
                                         | (((1U & 
                                              (~ ((4U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (4U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                          - (IData)(4U)))) 
                                                     & ((1U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                            - (IData)(4U))))))) 
                                            << 0x18U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffffeU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | ((1U & 
                                              (~ ((0U 
                                                   == 
                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                  & (0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                             && (((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                 || (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     & ((1U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        | (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffffdU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 1U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffffbU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(2U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U))))))) 
                                             << 2U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffff7U 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     (- 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 3U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffffefU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (0U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      (- 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(4U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U))))))) 
                                             << 4U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffffdfU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 5U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffffbfU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(1U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(1U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U))))))) 
                                             << 6U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffff7fU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 7U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffeffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(1U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(1U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(3U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U))))))) 
                                             << 8U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffdffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(1U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(1U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 9U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fffbffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(2U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & ((1U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                             << 0xaU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fff7ffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0xbU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffefffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(2U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(2U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U))))))) 
                                             << 0xcU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffdfffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(2U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(2U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0xdU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ffbfffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (2U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(2U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(2U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(4U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U))))))) 
                                             << 0xeU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1ff7fffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       (- 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0xfU));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1feffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(3U)))) 
                                                    & (1U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(1U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U))))))) 
                                             << 0x10U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fdffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(2U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(2U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x11U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1fbffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(3U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(3U)))) 
                                                    & (3U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(3U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U))))))) 
                                             << 0x12U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1f7ffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (3U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(3U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(3U)))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(4U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(4U)))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x13U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1efffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(4U)))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & ((1U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))))) 
                                             << 0x14U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1dfffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(1U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(1U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x15U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x1bfffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(4U)))) 
                                                    & (2U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(2U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U))))))) 
                                             << 0x16U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0x17fffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && ((((1U 
                                                     == 
                                                     ((IData)(4U) 
                                                      - 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                    | (1U 
                                                       == 
                                                       (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                        - (IData)(4U)))) 
                                                   & (3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                  | (((1U 
                                                       == 
                                                       ((IData)(3U) 
                                                        - 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (1U 
                                                         == 
                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                          - (IData)(3U)))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))))) 
                                             << 0x17U));
    vlSelfRef.su__DOT__ctiger_can_goto = ((0xffffffU 
                                           & vlSelfRef.su__DOT__ctiger_can_goto) 
                                          | (((1U & 
                                               (~ (
                                                   (4U 
                                                    == 
                                                    VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                   & (4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                              && (((((1U 
                                                      == 
                                                      ((IData)(4U) 
                                                       - 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                     | (1U 
                                                        == 
                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                         - (IData)(4U)))) 
                                                    & (4U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                   | (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                           - (IData)(4U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                  || (((1U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (1U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & ((1U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (1U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U))))))) 
                                             << 0x18U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffffeU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | ((1U 
                                                & (~ 
                                                   ((0U 
                                                     == 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                    & (0U 
                                                       == 
                                                       VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                               && ((((((2U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        & (0U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                   || ((((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        & ((2U 
                                                            == 
                                                            (- 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                           | (2U 
                                                              == 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))) 
                                                       & ((0x18U 
                                                           >= 
                                                           (0x1fU 
                                                            & (VL_MULS_III(32, (IData)(5U), 
                                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                            + 
                                                                            VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                               + 
                                                               (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                + 
                                                                VL_DIVS_III(32, 
                                                                            (- 
                                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                          && (1U 
                                                              & (vlSelfRef.su__DOT__all_goat 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                     + 
                                                                     (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                      + 
                                                                      VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffffdU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U)))) 
                                                        & (0U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(1U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 1U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffffbU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       & (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(2U)))) 
                                                         & (0U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(2U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(2U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(2U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(2U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 2U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffff7U 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        (- 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U)))) 
                                                        & (0U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(3U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 3U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffffefU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         (- 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       & (4U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(4U)))) 
                                                         & (0U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(4U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(4U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(4U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(4U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 4U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffffdfU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        & (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 5U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffffbfU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(1U)))) 
                                                       & (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(1U)))) 
                                                         & (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(1U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(1U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(1U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(1U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(1U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 6U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffff7fU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U)))) 
                                                        & (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(2U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 7U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffeffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(1U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(1U)))) 
                                                       & (3U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(3U)))) 
                                                         & (1U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(3U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(1U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(3U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(3U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(3U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 8U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffdffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(1U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(1U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U)))) 
                                                        & (1U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(4U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 9U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fffbffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(2U)))) 
                                                       & (0U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         & (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          (- 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(2U)))) 
                                                         & ((2U 
                                                             == 
                                                             (- 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             (- 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0xaU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fff7ffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U)))) 
                                                        & (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(1U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0xbU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffefffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(2U)))) 
                                                       & (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(2U)))) 
                                                         & (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(2U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(2U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(2U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(2U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(2U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0xcU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffdfffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(2U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(2U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U)))) 
                                                        & (2U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(3U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0xdU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ffbfffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((2U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(2U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(2U)))) 
                                                       & (4U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(4U)))) 
                                                         & (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(4U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(2U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(4U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(4U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(4U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0xeU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1ff7fffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & (0U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          (- 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                        & (3U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0xfU));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1feffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(3U)))) 
                                                       & (1U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(1U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(1U)))) 
                                                         & (3U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(1U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(3U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(1U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(1U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(1U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x10U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fdffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & (2U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(2U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(2U)))) 
                                                        & (3U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(2U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x11U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1fbffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(3U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(3U)))) 
                                                       & (3U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(3U)))) 
                                                         & (3U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(3U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(3U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(3U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(3U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(3U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(3U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x12U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1f7ffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(3U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(3U)))) 
                                                      & (4U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(4U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(4U)))) 
                                                        & (3U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(4U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x13U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1efffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (0U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(4U)))) 
                                                       & (0U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           (- 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         & (4U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          (- 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(4U)))) 
                                                         & ((2U 
                                                             == 
                                                             (- 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             (- 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                (- 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x14U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1dfffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (1U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & (1U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(1U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(1U)))) 
                                                        & (4U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(1U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(1U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x15U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x1bfffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (2U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(4U)))) 
                                                       & (2U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(2U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(2U)))) 
                                                         & (4U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(2U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(4U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(2U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(2U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(2U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(2U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x16U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0x17fffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (3U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && (((((2U 
                                                        == 
                                                        ((IData)(4U) 
                                                         - 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                       | (2U 
                                                          == 
                                                          (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                           - (IData)(4U)))) 
                                                      & (3U 
                                                         == 
                                                         VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                     | (((2U 
                                                          == 
                                                          ((IData)(3U) 
                                                           - 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                         | (2U 
                                                            == 
                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                             - (IData)(3U)))) 
                                                        & (4U 
                                                           == 
                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                    & ((0x18U 
                                                        >= 
                                                        (0x1fU 
                                                         & (VL_MULS_III(32, (IData)(5U), 
                                                                        (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                         + 
                                                                         VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                            + 
                                                            (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                             + 
                                                             VL_DIVS_III(32, 
                                                                         ((IData)(3U) 
                                                                          - 
                                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                       && (1U 
                                                           & (vlSelfRef.su__DOT__all_goat 
                                                              >> 
                                                              (0x1fU 
                                                               & (VL_MULS_III(32, (IData)(5U), 
                                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                               + 
                                                                               VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                  + 
                                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               ((IData)(3U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))))))) 
                                               << 0x17U));
    vlSelfRef.su__DOT__ctiger_can_jumpto = ((0xffffffU 
                                             & vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            | (((1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))) 
                                                     & (4U 
                                                        == 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))))) 
                                                && ((((((2U 
                                                         == 
                                                         ((IData)(4U) 
                                                          - 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                        | (2U 
                                                           == 
                                                           (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                            - (IData)(4U)))) 
                                                       & (4U 
                                                          == 
                                                          VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                      | (((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                              - (IData)(4U)))) 
                                                         & (4U 
                                                            == 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))))) 
                                                     & ((0x18U 
                                                         >= 
                                                         (0x1fU 
                                                          & (VL_MULS_III(32, (IData)(5U), 
                                                                         (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                          + 
                                                                          VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                             + 
                                                             (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                              + 
                                                              VL_DIVS_III(32, 
                                                                          ((IData)(4U) 
                                                                           - 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                        && (1U 
                                                            & (vlSelfRef.su__DOT__all_goat 
                                                               >> 
                                                               (0x1fU 
                                                                & (VL_MULS_III(32, (IData)(5U), 
                                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                   + 
                                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                    + 
                                                                    VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))) 
                                                    || ((((2U 
                                                           == 
                                                           ((IData)(4U) 
                                                            - 
                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)))) 
                                                          | (2U 
                                                             == 
                                                             (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                              - (IData)(4U)))) 
                                                         & ((2U 
                                                             == 
                                                             ((IData)(4U) 
                                                              - 
                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)))) 
                                                            | (2U 
                                                               == 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj)) 
                                                                - (IData)(4U))))) 
                                                        & ((0x18U 
                                                            >= 
                                                            (0x1fU 
                                                             & (VL_MULS_III(32, (IData)(5U), 
                                                                            (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                             + 
                                                                             VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                + 
                                                                (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             ((IData)(4U) 
                                                                              - 
                                                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U)))))) 
                                                           && (1U 
                                                               & (vlSelfRef.su__DOT__all_goat 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci)) 
                                                                                + 
                                                                                VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_ci))), (IData)(2U)))) 
                                                                      + 
                                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.su_cj)) 
                                                                       + 
                                                                       VL_DIVS_III(32, 
                                                                                ((IData)(4U) 
                                                                                - 
                                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.su_cj))), (IData)(2U))))))))))) 
                                               << 0x18U));
    vlSelfRef.su_o_tigers_cantmove = (1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       ((vlSelfRef.su__DOT__ctiger_can_goto 
                                                         | vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                                        & vlSelfRef.su__DOT__all_vacant)))));
    vlSelfRef.su_o_update = ((1U == (IData)(vlSelfRef.S))
                              ? (vlSelfRef.su__DOT__all_goat 
                                 | (vlSelfRef.su__DOT__cgoat_can_goto 
                                    & vlSelfRef.su__DOT__all_vacant))
                              : ((5U == (IData)(vlSelfRef.S))
                                  ? vlSelfRef.su__DOT__all_tiger
                                  : ((7U == (IData)(vlSelfRef.S))
                                      ? (vlSelfRef.su__DOT__all_tiger 
                                         | ((vlSelfRef.su__DOT__ctiger_can_goto 
                                             | vlSelfRef.su__DOT__ctiger_can_jumpto) 
                                            & vlSelfRef.su__DOT__all_vacant))
                                      : ((0xaU == (IData)(vlSelfRef.S))
                                          ? ((0U < (IData)(vlSelfRef.goats_in_hand))
                                              ? vlSelfRef.su__DOT__all_vacant
                                              : vlSelfRef.su__DOT__all_goat)
                                          : 0U))));
    vlSelfRef.su__DOT__o_update = vlSelfRef.su_o_update;
    vlSelfRef.re_selectable = ((IData)(vlSelfRef.re_valid)
                                ? (0x1ffffffU & vlSelfRef.su_o_update)
                                : 0U);
    vlSelfRef.su__DOT__o_tigers_cantmove = vlSelfRef.su_o_tigers_cantmove;
    vlSelfRef.op_fire = ((IData)(vlSelfRef.op_ready) 
                         & (IData)(vlSelfRef.op_valid));
    vlSelfRef.re_fire = ((IData)(vlSelfRef.re_ready) 
                         & (IData)(vlSelfRef.re_valid));
    vlSelfRef.opij2idx = (0x1fU & (((IData)(5U) * (IData)(vlSelfRef.op_i)) 
                                   + (IData)(vlSelfRef.op_j)));
    vlSelfRef.cij2idx = (0x1fU & (VL_MULS_III(32, (IData)(5U), 
                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci))) 
                                  + VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj))));
    vlSelfRef.pij2idx = (0x1fU & (VL_MULS_III(32, (IData)(5U), 
                                              VL_EXTENDS_II(32,5, (IData)(vlSelfRef.pi))) 
                                  + VL_EXTENDS_II(5,5, (IData)(vlSelfRef.pj))));
    vlSelfRef.op_ready_nxt = vlSelfRef.op_ready;
    vlSelfRef.re_valid_nxt = vlSelfRef.re_valid;
    vlSelfRef.re_is_finished_nxt = vlSelfRef.re_is_finished;
    vlSelfRef.re_possible_ops_nxt = vlSelfRef.re_possible_ops;
    vlSelfRef.S_nxt = vlSelfRef.S;
    vlSelfRef.occupied_nxt = vlSelfRef.occupied;
    vlSelfRef.whos_nxt = vlSelfRef.whos;
    vlSelfRef.ci_nxt = vlSelfRef.ci;
    vlSelfRef.cj_nxt = vlSelfRef.cj;
    vlSelfRef.pi_nxt = vlSelfRef.pi;
    vlSelfRef.pj_nxt = vlSelfRef.pj;
    vlSelfRef.goats_in_hand_nxt = vlSelfRef.goats_in_hand;
    vlSelfRef.goats_killed_nxt = vlSelfRef.goats_killed;
    vlSelfRef.t0i_nxt = vlSelfRef.t0i;
    vlSelfRef.t1i_nxt = vlSelfRef.t1i;
    vlSelfRef.t2i_nxt = vlSelfRef.t2i;
    vlSelfRef.t3i_nxt = vlSelfRef.t3i;
    vlSelfRef.t0j_nxt = vlSelfRef.t0j;
    vlSelfRef.t1j_nxt = vlSelfRef.t1j;
    vlSelfRef.t2j_nxt = vlSelfRef.t2j;
    vlSelfRef.t3j_nxt = vlSelfRef.t3j;
    vlSelfRef.check_tiger_id_nxt = vlSelfRef.check_tiger_id;
    if (((((((((0U == (IData)(vlSelfRef.S)) | (1U == (IData)(vlSelfRef.S))) 
              | (2U == (IData)(vlSelfRef.S))) | (3U 
                                                 == (IData)(vlSelfRef.S))) 
            | (4U == (IData)(vlSelfRef.S))) | (5U == (IData)(vlSelfRef.S))) 
          | (6U == (IData)(vlSelfRef.S))) | (7U == (IData)(vlSelfRef.S)))) {
        if ((0U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.op_fire) {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.ci_nxt = vlSelfRef.op_i;
                vlSelfRef.cj_nxt = vlSelfRef.op_j;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 2U;
                vlSelfRef.S_nxt = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.re_fire) {
                vlSelfRef.op_ready_nxt = 1U;
                vlSelfRef.re_valid_nxt = 0U;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 0U;
                vlSelfRef.S_nxt = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.op_fire) {
                if (((0x18U >= (IData)(vlSelfRef.opij2idx)) 
                     && (1U & (vlSelfRef.occupied >> (IData)(vlSelfRef.opij2idx))))) {
                    vlSelfRef.op_ready_nxt = 0U;
                    vlSelfRef.re_valid_nxt = 1U;
                    vlSelfRef.ci_nxt = vlSelfRef.op_i;
                    vlSelfRef.cj_nxt = vlSelfRef.op_j;
                    vlSelfRef.re_is_finished_nxt = 0U;
                    vlSelfRef.re_possible_ops_nxt = 2U;
                    vlSelfRef.S_nxt = 1U;
                } else {
                    vlSelfRef.op_ready_nxt = 0U;
                    vlSelfRef.pi_nxt = vlSelfRef.op_i;
                    vlSelfRef.pj_nxt = vlSelfRef.op_j;
                    vlSelfRef.S_nxt = 3U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.S))) {
            if ((0U == (IData)(vlSelfRef.goats_in_hand))) {
                vlSelfRef.__Vlvbound_ha134e953__0 = 0U;
                vlSelfRef.__Vlvbound_h13906274__0 = 0U;
                if ((0x18U >= (IData)(vlSelfRef.cij2idx))) {
                    vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                                   << (IData)(vlSelfRef.cij2idx))) 
                                               & vlSelfRef.occupied_nxt) 
                                              | (0x1ffffffU 
                                                 & ((IData)(vlSelfRef.__Vlvbound_ha134e953__0) 
                                                    << (IData)(vlSelfRef.cij2idx))));
                    vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                               << (IData)(vlSelfRef.cij2idx))) 
                                           & vlSelfRef.whos_nxt) 
                                          | (0x1ffffffU 
                                             & ((IData)(vlSelfRef.__Vlvbound_h13906274__0) 
                                                << (IData)(vlSelfRef.cij2idx))));
                }
            } else {
                vlSelfRef.goats_in_hand_nxt = (0x1fU 
                                               & ((IData)(vlSelfRef.goats_in_hand) 
                                                  - (IData)(1U)));
            }
            vlSelfRef.re_is_finished_nxt = vlSelfRef.su_o_tigers_cantmove;
            vlSelfRef.re_possible_ops_nxt = 4U;
            vlSelfRef.S_nxt = 4U;
            vlSelfRef.__Vlvbound_h5d1d6572__0 = 1U;
            vlSelfRef.__Vlvbound_h823c4ae0__0 = 0U;
            if ((0x18U >= (IData)(vlSelfRef.pij2idx))) {
                vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                               << (IData)(vlSelfRef.pij2idx))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x1ffffffU 
                                             & ((IData)(vlSelfRef.__Vlvbound_h5d1d6572__0) 
                                                << (IData)(vlSelfRef.pij2idx))));
                vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                           << (IData)(vlSelfRef.pij2idx))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_h823c4ae0__0) 
                                            << (IData)(vlSelfRef.pij2idx))));
            }
        } else if ((4U == (IData)(vlSelfRef.S))) {
            if ((3U == (IData)(vlSelfRef.check_tiger_id))) {
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.re_is_finished_nxt = vlSelfRef.su_o_tigers_cantmove;
                vlSelfRef.check_tiger_id_nxt = 0U;
                vlSelfRef.S_nxt = 5U;
            } else {
                vlSelfRef.re_valid_nxt = (1U & (~ (IData)(vlSelfRef.su_o_tigers_cantmove)));
                vlSelfRef.re_is_finished_nxt = 0U;
                if (vlSelfRef.su_o_tigers_cantmove) {
                    vlSelfRef.check_tiger_id_nxt = 
                        (0xfU & ((IData)(1U) + (IData)(vlSelfRef.check_tiger_id)));
                    vlSelfRef.S_nxt = 4U;
                } else {
                    vlSelfRef.check_tiger_id_nxt = 0U;
                    vlSelfRef.S_nxt = 5U;
                }
            }
        } else if ((5U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.re_fire) {
                vlSelfRef.op_ready_nxt = 1U;
                vlSelfRef.ci_nxt = 0U;
                vlSelfRef.re_valid_nxt = 0U;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 0U;
                vlSelfRef.cj_nxt = 0U;
                vlSelfRef.pi_nxt = 0U;
                vlSelfRef.pj_nxt = 0U;
                if (vlSelfRef.re_is_finished) {
                    vlSelfRef.S_nxt = 2U;
                    vlSelfRef.occupied_nxt = (1U | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (1U | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 1U;
                    vlSelfRef.ci_nxt = 0U;
                    vlSelfRef.cj_nxt = 0U;
                    vlSelfRef.pi_nxt = 0U;
                    vlSelfRef.pj_nxt = 0U;
                    vlSelfRef.goats_in_hand_nxt = 0x14U;
                    vlSelfRef.goats_killed_nxt = 0U;
                    vlSelfRef.t0i_nxt = 0U;
                    vlSelfRef.t0j_nxt = 0U;
                    vlSelfRef.t1i_nxt = 0U;
                    vlSelfRef.t1j_nxt = 4U;
                    vlSelfRef.t2i_nxt = 4U;
                    vlSelfRef.t2j_nxt = 0U;
                    vlSelfRef.t3i_nxt = 4U;
                    vlSelfRef.t3j_nxt = 4U;
                    vlSelfRef.check_tiger_id_nxt = 0U;
                    vlSelfRef.occupied_nxt = (0x1fffffdU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffffdU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 2U;
                    vlSelfRef.occupied_nxt = (0x1fffffbU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffffbU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 3U;
                    vlSelfRef.occupied_nxt = (0x1fffff7U 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffff7U 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 4U;
                    vlSelfRef.occupied_nxt = (0x10U 
                                              | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x10U | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 5U;
                    vlSelfRef.occupied_nxt = (0x1ffffdfU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffffdfU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 6U;
                    vlSelfRef.occupied_nxt = (0x1ffffbfU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffffbfU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 7U;
                    vlSelfRef.occupied_nxt = (0x1ffff7fU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffff7fU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 8U;
                    vlSelfRef.occupied_nxt = (0x1fffeffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffeffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 9U;
                    vlSelfRef.occupied_nxt = (0x1fffdffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffdffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xaU;
                    vlSelfRef.occupied_nxt = (0x1fffbffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fffbffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xbU;
                    vlSelfRef.occupied_nxt = (0x1fff7ffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fff7ffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xcU;
                    vlSelfRef.occupied_nxt = (0x1ffefffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffefffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xdU;
                    vlSelfRef.occupied_nxt = (0x1ffdfffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffdfffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xeU;
                    vlSelfRef.occupied_nxt = (0x1ffbfffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ffbfffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0xfU;
                    vlSelfRef.occupied_nxt = (0x1ff7fffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1ff7fffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x10U;
                    vlSelfRef.occupied_nxt = (0x1feffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1feffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x11U;
                    vlSelfRef.occupied_nxt = (0x1fdffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fdffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x12U;
                    vlSelfRef.occupied_nxt = (0x1fbffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1fbffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x13U;
                    vlSelfRef.occupied_nxt = (0x1f7ffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1f7ffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x14U;
                    vlSelfRef.occupied_nxt = (0x100000U 
                                              | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x100000U 
                                          | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x15U;
                    vlSelfRef.occupied_nxt = (0x1dfffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1dfffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x16U;
                    vlSelfRef.occupied_nxt = (0x1bfffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1bfffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x17U;
                    vlSelfRef.occupied_nxt = (0x17fffffU 
                                              & vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x17fffffU 
                                          & vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x18U;
                    vlSelfRef.occupied_nxt = (0x1000000U 
                                              | vlSelfRef.occupied_nxt);
                    vlSelfRef.whos_nxt = (0x1000000U 
                                          | vlSelfRef.whos_nxt);
                    vlSelfRef.idx = 0x19U;
                } else {
                    vlSelfRef.S_nxt = 6U;
                }
            }
        } else if ((6U == (IData)(vlSelfRef.S))) {
            if (vlSelfRef.op_fire) {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.ci_nxt = vlSelfRef.op_i;
                vlSelfRef.cj_nxt = vlSelfRef.op_j;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 5U;
                vlSelfRef.S_nxt = 7U;
            }
        } else if (vlSelfRef.re_fire) {
            vlSelfRef.op_ready_nxt = 1U;
            vlSelfRef.re_valid_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = 0U;
            vlSelfRef.re_possible_ops_nxt = 0U;
            vlSelfRef.S_nxt = 8U;
        }
    } else if ((8U == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.op_fire) {
            if (((0x18U >= (IData)(vlSelfRef.opij2idx)) 
                 && (1U & (vlSelfRef.occupied >> (IData)(vlSelfRef.opij2idx))))) {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.re_valid_nxt = 1U;
                vlSelfRef.ci_nxt = vlSelfRef.op_i;
                vlSelfRef.cj_nxt = vlSelfRef.op_j;
                vlSelfRef.re_is_finished_nxt = 0U;
                vlSelfRef.re_possible_ops_nxt = 5U;
                vlSelfRef.S_nxt = 7U;
            } else {
                vlSelfRef.op_ready_nxt = 0U;
                vlSelfRef.pi_nxt = vlSelfRef.op_i;
                vlSelfRef.pj_nxt = vlSelfRef.op_j;
                vlSelfRef.S_nxt = 9U;
            }
        }
    } else if ((9U == (IData)(vlSelfRef.S))) {
        vlSelfRef.__Vlvbound_ha134e953__1 = 0U;
        vlSelfRef.re_valid_nxt = 1U;
        vlSelfRef.re_possible_ops_nxt = ((0U == (IData)(vlSelfRef.goats_in_hand))
                                          ? 1U : 3U);
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t0i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t0j)))) {
            vlSelfRef.t0i_nxt = vlSelfRef.pi;
            vlSelfRef.t0j_nxt = vlSelfRef.pj;
        }
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t1i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t1j)))) {
            vlSelfRef.t1i_nxt = vlSelfRef.pi;
            vlSelfRef.t1j_nxt = vlSelfRef.pj;
        }
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t2i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t2j)))) {
            vlSelfRef.t2i_nxt = vlSelfRef.pi;
            vlSelfRef.t2j_nxt = vlSelfRef.pj;
        }
        if ((((IData)(vlSelfRef.ci) == (IData)(vlSelfRef.t3i)) 
             & ((IData)(vlSelfRef.cj) == (IData)(vlSelfRef.t3j)))) {
            vlSelfRef.t3i_nxt = vlSelfRef.pi;
            vlSelfRef.t3j_nxt = vlSelfRef.pj;
        }
        vlSelfRef.S_nxt = 0xaU;
        vlSelfRef.__Vlvbound_h13906274__1 = 0U;
        if ((0x18U >= (IData)(vlSelfRef.cij2idx))) {
            vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                           << (IData)(vlSelfRef.cij2idx))) 
                                       & vlSelfRef.occupied_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_ha134e953__1) 
                                            << (IData)(vlSelfRef.cij2idx))));
            vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.cij2idx))) 
                                   & vlSelfRef.whos_nxt) 
                                  | (0x1ffffffU & ((IData)(vlSelfRef.__Vlvbound_h13906274__1) 
                                                   << (IData)(vlSelfRef.cij2idx))));
        }
        vlSelfRef.__Vlvbound_h5d1d6572__1 = 1U;
        vlSelfRef.__Vlvbound_h823c4ae0__1 = 1U;
        if ((0x18U >= (IData)(vlSelfRef.pij2idx))) {
            vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                           << (IData)(vlSelfRef.pij2idx))) 
                                       & vlSelfRef.occupied_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_h5d1d6572__1) 
                                            << (IData)(vlSelfRef.pij2idx))));
            vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.pij2idx))) 
                                   & vlSelfRef.whos_nxt) 
                                  | (0x1ffffffU & ((IData)(vlSelfRef.__Vlvbound_h823c4ae0__1) 
                                                   << (IData)(vlSelfRef.pij2idx))));
        }
        vlSelfRef.i_dist = (0x1fU & ((IData)(vlSelfRef.pi) 
                                     - (IData)(vlSelfRef.ci)));
        vlSelfRef.j_dist = (0x1fU & ((IData)(vlSelfRef.pj) 
                                     - (IData)(vlSelfRef.cj)));
        if ((((~ (IData)(vlSelfRef.i_dist)) & ((IData)(vlSelfRef.pi) 
                                               != (IData)(vlSelfRef.ci))) 
             | ((~ (IData)(vlSelfRef.j_dist)) & ((IData)(vlSelfRef.pj) 
                                                 != (IData)(vlSelfRef.cj))))) {
            vlSelfRef.__Vlvbound_h8ccd81e1__0 = 0U;
            vlSelfRef.goats_killed_nxt = (0x1fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.goats_killed)));
            vlSelfRef.__Vlvbound_hc9a42266__0 = 0U;
            if ((0x18U >= (0x1fU & (VL_MULS_III(32, (IData)(5U), 
                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                 + 
                                                 VL_DIVS_III(32, 
                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                    + (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                       + VL_DIVS_III(32, 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))) {
                vlSelfRef.occupied_nxt = (((~ ((IData)(1U) 
                                               << (0x1fU 
                                                   & (VL_MULS_III(32, (IData)(5U), 
                                                                  (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                                   + 
                                                                   VL_DIVS_III(32, 
                                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                      + 
                                                      (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                       + 
                                                       VL_DIVS_III(32, 
                                                                   VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))) 
                                           & vlSelfRef.occupied_nxt) 
                                          | (0x1ffffffU 
                                             & ((IData)(vlSelfRef.__Vlvbound_h8ccd81e1__0) 
                                                << 
                                                (0x1fU 
                                                 & (VL_MULS_III(32, (IData)(5U), 
                                                                (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                                 + 
                                                                 VL_DIVS_III(32, 
                                                                             VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                    + 
                                                    (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                     + 
                                                     VL_DIVS_III(32, 
                                                                 VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))));
                vlSelfRef.whos_nxt = (((~ ((IData)(1U) 
                                           << (0x1fU 
                                               & (VL_MULS_III(32, (IData)(5U), 
                                                              (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                               + 
                                                               VL_DIVS_III(32, 
                                                                           VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                  + 
                                                  (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                   + 
                                                   VL_DIVS_III(32, 
                                                               VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))) 
                                       & vlSelfRef.whos_nxt) 
                                      | (0x1ffffffU 
                                         & ((IData)(vlSelfRef.__Vlvbound_hc9a42266__0) 
                                            << (0x1fU 
                                                & (VL_MULS_III(32, (IData)(5U), 
                                                               (VL_EXTENDS_II(32,5, (IData)(vlSelfRef.ci)) 
                                                                + 
                                                                VL_DIVS_III(32, 
                                                                            VL_EXTENDS_II(32,5, (IData)(vlSelfRef.i_dist)), (IData)(2U)))) 
                                                   + 
                                                   (VL_EXTENDS_II(5,5, (IData)(vlSelfRef.cj)) 
                                                    + 
                                                    VL_DIVS_III(32, 
                                                                VL_EXTENDS_II(32,5, (IData)(vlSelfRef.j_dist)), (IData)(2U))))))));
            }
        }
        if ((5U == (IData)(vlSelfRef.goats_killed_nxt))) {
            vlSelfRef.re_is_finished_nxt = 1U;
        }
    } else if ((0xaU == (IData)(vlSelfRef.S))) {
        if (vlSelfRef.re_fire) {
            vlSelfRef.op_ready_nxt = 1U;
            vlSelfRef.ci_nxt = 0U;
            vlSelfRef.re_valid_nxt = 0U;
            vlSelfRef.re_is_finished_nxt = 0U;
            vlSelfRef.re_possible_ops_nxt = 0U;
            vlSelfRef.cj_nxt = 0U;
            vlSelfRef.pi_nxt = 0U;
            vlSelfRef.pj_nxt = 0U;
            if (vlSelfRef.re_is_finished) {
                vlSelfRef.S_nxt = 2U;
                vlSelfRef.occupied_nxt = (1U | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (1U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 1U;
                vlSelfRef.ci_nxt = 0U;
                vlSelfRef.cj_nxt = 0U;
                vlSelfRef.pi_nxt = 0U;
                vlSelfRef.pj_nxt = 0U;
                vlSelfRef.goats_in_hand_nxt = 0x14U;
                vlSelfRef.goats_killed_nxt = 0U;
                vlSelfRef.t0i_nxt = 0U;
                vlSelfRef.t0j_nxt = 0U;
                vlSelfRef.t1i_nxt = 0U;
                vlSelfRef.t1j_nxt = 4U;
                vlSelfRef.t2i_nxt = 4U;
                vlSelfRef.t2j_nxt = 0U;
                vlSelfRef.t3i_nxt = 4U;
                vlSelfRef.t3j_nxt = 4U;
                vlSelfRef.check_tiger_id_nxt = 0U;
                vlSelfRef.occupied_nxt = (0x1fffffdU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffffdU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 2U;
                vlSelfRef.occupied_nxt = (0x1fffffbU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffffbU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 3U;
                vlSelfRef.occupied_nxt = (0x1fffff7U 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffff7U & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 4U;
                vlSelfRef.occupied_nxt = (0x10U | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x10U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 5U;
                vlSelfRef.occupied_nxt = (0x1ffffdfU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffffdfU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 6U;
                vlSelfRef.occupied_nxt = (0x1ffffbfU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffffbfU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 7U;
                vlSelfRef.occupied_nxt = (0x1ffff7fU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffff7fU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 8U;
                vlSelfRef.occupied_nxt = (0x1fffeffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffeffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 9U;
                vlSelfRef.occupied_nxt = (0x1fffdffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffdffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xaU;
                vlSelfRef.occupied_nxt = (0x1fffbffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fffbffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xbU;
                vlSelfRef.occupied_nxt = (0x1fff7ffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fff7ffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xcU;
                vlSelfRef.occupied_nxt = (0x1ffefffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffefffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xdU;
                vlSelfRef.occupied_nxt = (0x1ffdfffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffdfffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xeU;
                vlSelfRef.occupied_nxt = (0x1ffbfffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ffbfffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0xfU;
                vlSelfRef.occupied_nxt = (0x1ff7fffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1ff7fffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x10U;
                vlSelfRef.occupied_nxt = (0x1feffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1feffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x11U;
                vlSelfRef.occupied_nxt = (0x1fdffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fdffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x12U;
                vlSelfRef.occupied_nxt = (0x1fbffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1fbffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x13U;
                vlSelfRef.occupied_nxt = (0x1f7ffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1f7ffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x14U;
                vlSelfRef.occupied_nxt = (0x100000U 
                                          | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x100000U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x15U;
                vlSelfRef.occupied_nxt = (0x1dfffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1dfffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x16U;
                vlSelfRef.occupied_nxt = (0x1bfffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1bfffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x17U;
                vlSelfRef.occupied_nxt = (0x17fffffU 
                                          & vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x17fffffU & vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x18U;
                vlSelfRef.occupied_nxt = (0x1000000U 
                                          | vlSelfRef.occupied_nxt);
                vlSelfRef.whos_nxt = (0x1000000U | vlSelfRef.whos_nxt);
                vlSelfRef.idx = 0x19U;
            } else {
                vlSelfRef.S_nxt = ((0U == (IData)(vlSelfRef.goats_in_hand))
                                    ? 0U : 2U);
            }
        }
    }
}
