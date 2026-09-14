// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb___024root___timing_ready(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelfRef.tb__DOT__rst;
    Vtb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.tb__DOT__DUT__DOT__start 
                        = ((IData)(vlSelfRef.tb__DOT__a_ready) 
                           & (IData)(vlSelfRef.tb__DOT__b_ready));
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[0U] 
                        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[1U] 
                        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1;
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[0U] 
                        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[1U] 
                        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0;
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_valid 
                        = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q) 
                           | (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q));
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum 
                        = (0x0000ffffU & (((IData)(vlSelfRef.tb__DOT__DUT__DOT__switch_r1)
                                            ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0)
                                            : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1)) 
                                          + ((IData)(vlSelfRef.tb__DOT__in_b_00) 
                                             * (IData)(vlSelfRef.tb__DOT__in_a_00))));
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum 
                        = (0x0000ffffU & (((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q)
                                            ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0)
                                            : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1)) 
                                          + ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b) 
                                             * (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a))));
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum 
                        = (0x0000ffffU & (((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q)
                                            ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0)
                                            : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1)) 
                                          + ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b) 
                                             * (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q))));
                    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum 
                        = (0x0000ffffU & (((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q)
                                            ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0)
                                            : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1)) 
                                          + ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q) 
                                             * (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a))));
                }
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([initial_nba])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_postponed(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_postponed\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_postponed__TOP
        if (VL_UNLIKELY((vlSelfRef.tb__DOT____Vstrobe0))) {
            VL_WRITEF_NX("t=%0t | out_c=[%0d %0d] | c_ready = %d\n",5, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',16,vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r[0U]
                         , '#',16,vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r[1U]
                         , '#',1,(1U & (~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__busy_r))));
            vlSelfRef.tb__DOT____Vstrobe0 = 0U;
        }
    }
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__in_a_00 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12168243037769372147ull);
    vlSelf->tb__DOT__in_a_10 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12529026611735750657ull);
    vlSelf->tb__DOT__in_b_00 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6097716362336544033ull);
    vlSelf->tb__DOT__in_b_01 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13997470717389750174ull);
    vlSelf->tb__DOT__a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1624214322898264766ull);
    vlSelf->tb__DOT__b_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3562380869446997204ull);
    vlSelf->tb__DOT__num_matrix = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16097217277776115800ull);
    vlSelf->tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6743979137201610926ull);
    vlSelf->tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1156696098083290880ull);
    vlSelf->tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12973477343154953507ull);
    vlSelf->tb__DOT____Vstrobe0 = 0;
    vlSelf->tb__DOT__DUT__DOT__row_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12978166267225164758ull);
    vlSelf->tb__DOT__DUT__DOT__matrix_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16779111521310058277ull);
    vlSelf->tb__DOT__DUT__DOT__busy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13358754843585930802ull);
    vlSelf->tb__DOT__DUT__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761874288133061203ull);
    vlSelf->tb__DOT__DUT__DOT__cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12955843400579142090ull);
    vlSelf->tb__DOT__DUT__DOT__switch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1136781958850506105ull);
    vlSelf->tb__DOT__DUT__DOT__switch_r1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1514764328849405351ull);
    vlSelf->tb__DOT__DUT__DOT__switch_r2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7652587364390886828ull);
    vlSelf->tb__DOT__DUT__DOT__drain_odd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11786169340474974483ull);
    vlSelf->tb__DOT__DUT__DOT__drain_odd_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15377624663220555569ull);
    vlSelf->tb__DOT__DUT__DOT__drain_even = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6403231917098180359ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8308836823487797756ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3714353055741660534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9086094751591202554ull);
    }
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7389399481278106219ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3353214551439089416ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4470243582811954820ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15670179713223298134ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3141984604919786503ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15200769574237616708ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16983540948060242550ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6530971748120240025ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17719033638189226142ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5291526414896119283ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17020231803709192066ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5086354841237320373ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9497668662246681932ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9325506145718799182ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5675444321591403401ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1907983472041703604ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1897348555484044322ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4932334593706645826ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13882402391443563142ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15735116140559389761ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10570968835872880795ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3492845822453673018ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13420755144351514236ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8583163420404713043ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 263728079770844857ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6511327513009712317ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16496537766500778261ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9242770768661388952ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8193181394591832735ull);
    vlSelf->tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4865613140477517983ull);
    vlSelf->__Vdly__tb__DOT__DUT__DOT__switch = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__num_matrix__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__a_ready__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__b_ready__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v2 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v2 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v2 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v2 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v3 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v3 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v3 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v3 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v4 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v4 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v4 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v4 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v5 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v5 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v5 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v5 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v6 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v6 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v6 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v6 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v7 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v7 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v7 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v7 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v8 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v8 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v8 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v8 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v9 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v9 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v9 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v9 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v10 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v10 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v10 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v10 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v11 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v11 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v11 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v11 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v12 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v12 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v12 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v12 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v13 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v13 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v13 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v13 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v14 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v14 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v14 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v14 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v15 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v15 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v15 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v15 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v16 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v16 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v16 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v16 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v17 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v17 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v17 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v17 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v18 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v18 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v18 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v18 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v19 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v19 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v19 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v19 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v20 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v20 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v20 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v20 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v21 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v21 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v21 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v21 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v22 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v22 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v22 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v22 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_00__v23 = 0;
    vlSelf->__VdlySet__tb__DOT__in_a_10__v23 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_00__v23 = 0;
    vlSelf->__VdlySet__tb__DOT__in_b_01__v23 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
