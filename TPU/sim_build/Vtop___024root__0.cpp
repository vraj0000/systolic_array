// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.control_systolic__DOT__num_matrix = vlSelfRef.num_matrix;
    vlSelfRef.control_systolic__DOT__systolic_busy 
        = vlSelfRef.control_systolic__DOT__busy_r;
    vlSelfRef.control_systolic__DOT__systolic_free 
        = (1U & (~ (IData)(vlSelfRef.control_systolic__DOT__busy_r)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q;
    vlSelfRef.control_systolic__DOT__a_ready = vlSelfRef.a_ready;
    vlSelfRef.control_systolic__DOT__b_ready = vlSelfRef.b_ready;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1;
    vlSelfRef.control_systolic__DOT__D_a_10 = vlSelfRef.D_a_10;
    vlSelfRef.control_systolic__DOT__D_b_01 = vlSelfRef.D_b_01;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_r;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid_r;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even 
        = vlSelfRef.control_systolic__DOT__drain_even;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd 
        = vlSelfRef.control_systolic__DOT__drain_odd;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q;
    vlSelfRef.control_systolic__DOT__D_a_00 = vlSelfRef.D_a_00;
    vlSelfRef.control_systolic__DOT__D_b_00 = vlSelfRef.D_b_00;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch 
        = vlSelfRef.control_systolic__DOT__switch_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__q 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q;
    vlSelfRef.control_systolic__DOT__clk = vlSelfRef.clk;
    vlSelfRef.control_systolic__DOT__rst = vlSelfRef.rst;
    vlSelfRef.systolic_busy = vlSelfRef.control_systolic__DOT__systolic_busy;
    vlSelfRef.systolic_free = vlSelfRef.control_systolic__DOT__systolic_free;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_11 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_11 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_10 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_01 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_r1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_r1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__q;
    vlSelfRef.control_systolic__DOT__start = ((IData)(vlSelfRef.control_systolic__DOT__a_ready) 
                                              & (IData)(vlSelfRef.control_systolic__DOT__b_ready));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col0_00_to_10 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col0_00_to_10 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_10 
        = vlSelfRef.control_systolic__DOT__D_a_10;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_01 
        = vlSelfRef.control_systolic__DOT__D_b_01;
    vlSelfRef.control_systolic__DOT__D_c = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c;
    vlSelfRef.control_systolic__DOT__out_c_valid = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col1_01_to_11 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col1_01_to_11 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_00 
        = vlSelfRef.control_systolic__DOT__D_a_00;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_00 
        = vlSelfRef.control_systolic__DOT__D_b_00;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_10_11 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_01_11 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_00_01 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_a;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_00_10 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_b;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_01_d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_10_d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__switch 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r2 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__q;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk 
        = vlSelfRef.control_systolic__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst 
        = vlSelfRef.control_systolic__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col0_00_to_10;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col0_00_to_10;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_10;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_01;
    vlSelfRef.D_c = vlSelfRef.control_systolic__DOT__D_c;
    vlSelfRef.out_c_valid = vlSelfRef.control_systolic__DOT__out_c_valid;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_0;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col1_01_to_11;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col1_01_to_11;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_1 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_valid 
        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1) 
           | (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_00;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_00;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_10_11;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_01_11;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_00_01;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_00_10;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_b 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_01_d;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_a 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_10_d;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_c 
        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__switch)
            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0)
            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__switch 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r2;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__d 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__switch 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__switch 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__multi 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_b) 
                          * (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_a)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__multi 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_b) 
                          * (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_a)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__multi 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_b) 
                          * (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_a)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__multi 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_b) 
                          * (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_a)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_c 
        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__switch)
            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0)
            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_c 
        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__switch)
            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0)
            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_c 
        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__switch)
            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0)
            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_c) 
                          + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__multi)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_c) 
                          + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__multi)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_c) 
                          + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__multi)));
    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum 
        = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_c) 
                          + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__multi)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst__0))) 
                                                         << 0x0000000aU) 
                                                        | ((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk__0))) 
                                                            << 9U) 
                                                           | (((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst__0))) 
                                                              << 8U))) 
                                                       | (((((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk__0))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst__0))))) 
                                                           << 4U) 
                                                          | (((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst__0))))))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst__0))) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk__0))) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst__0))))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst__0))))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst__0))))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__rst__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.control_systolic__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__clk__0))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst__0 
        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__busy_r;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__busy_r = 0;
            CData/*6:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count = 0;
            CData/*6:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__matrix_count;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__matrix_count = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__switch;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__switch = 0;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count 
                = vlSelfRef.control_systolic__DOT__row_count;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__matrix_count 
                = vlSelfRef.control_systolic__DOT__matrix_count;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__busy_r 
                = vlSelfRef.control_systolic__DOT__busy_r;
            __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__switch 
                = vlSelfRef.control_systolic__DOT__switch;
            if (vlSelfRef.control_systolic__DOT__rst) {
                __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count = 0U;
                __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__matrix_count = 0U;
                __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__busy_r = 0U;
            } else {
                if (vlSelfRef.control_systolic__DOT__out_c_valid) {
                    if ((1U == (IData)(vlSelfRef.control_systolic__DOT__row_count))) {
                        __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__matrix_count 
                            = (0x0000007fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.control_systolic__DOT__matrix_count)));
                        __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count = 0U;
                    } else {
                        __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count 
                            = (0x0000007fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.control_systolic__DOT__row_count)));
                    }
                } else {
                    __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count = 0U;
                    __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__matrix_count = 0U;
                }
                if (((~ (IData)(vlSelfRef.control_systolic__DOT__busy_r)) 
                     & (IData)(vlSelfRef.control_systolic__DOT__start))) {
                    __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__busy_r = 1U;
                } else if (((IData)(vlSelfRef.control_systolic__DOT__busy_r) 
                            & ((IData)(vlSelfRef.control_systolic__DOT__matrix_count) 
                               == (IData)(vlSelfRef.control_systolic__DOT__num_matrix)))) {
                    __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__busy_r = 0U;
                }
            }
            vlSelfRef.control_systolic__DOT__drain_even 
                = ((1U & (~ ((IData)(vlSelfRef.control_systolic__DOT__rst) 
                             | (~ (IData)(vlSelfRef.control_systolic__DOT__start))))) 
                   && (IData)(vlSelfRef.control_systolic__DOT__drain_odd_d1));
            vlSelfRef.control_systolic__DOT__row_count 
                = __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__row_count;
            vlSelfRef.control_systolic__DOT__matrix_count 
                = __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__matrix_count;
            vlSelfRef.control_systolic__DOT__busy_r 
                = __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__busy_r;
            vlSelfRef.control_systolic__DOT__systolic_busy 
                = vlSelfRef.control_systolic__DOT__busy_r;
            vlSelfRef.control_systolic__DOT__systolic_free 
                = (1U & (~ (IData)(vlSelfRef.control_systolic__DOT__busy_r)));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even 
                = vlSelfRef.control_systolic__DOT__drain_even;
            vlSelfRef.control_systolic__DOT__drain_odd_d1 
                = ((1U & (~ ((IData)(vlSelfRef.control_systolic__DOT__rst) 
                             | (~ (IData)(vlSelfRef.control_systolic__DOT__start))))) 
                   && (IData)(vlSelfRef.control_systolic__DOT__drain_odd));
            vlSelfRef.systolic_busy = vlSelfRef.control_systolic__DOT__systolic_busy;
            vlSelfRef.systolic_free = vlSelfRef.control_systolic__DOT__systolic_free;
            if ((1U & ((IData)(vlSelfRef.control_systolic__DOT__rst) 
                       | (~ (IData)(vlSelfRef.control_systolic__DOT__start))))) {
                __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__switch = 0U;
                vlSelfRef.control_systolic__DOT__drain_odd = 0U;
            } else {
                __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__switch 
                    = (1U & (~ (IData)(vlSelfRef.control_systolic__DOT__switch_r1)));
                vlSelfRef.control_systolic__DOT__drain_odd 
                    = vlSelfRef.control_systolic__DOT__switch_r1;
            }
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd 
                = vlSelfRef.control_systolic__DOT__drain_odd;
            vlSelfRef.control_systolic__DOT__switch_r1 
                = ((1U & (~ ((IData)(vlSelfRef.control_systolic__DOT__rst) 
                             | (~ (IData)(vlSelfRef.control_systolic__DOT__start))))) 
                   && (IData)(vlSelfRef.control_systolic__DOT__switch));
            vlSelfRef.control_systolic__DOT__switch 
                = __Vinline_0__nba_sequent__TOP__0___Vdly__control_systolic__DOT__switch;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch 
                = vlSelfRef.control_systolic__DOT__switch_r1;
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst) {
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b = 0U;
            } else {
                if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__switch) {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum;
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_1)
                            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_1)
                            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1));
                } else {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_0)
                            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_0)
                            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0));
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum;
                }
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_a;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_b;
            }
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_a 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_b 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_11 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_11 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_b;
        }
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst) {
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b = 0U;
            } else {
                if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__switch) {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum;
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_1)
                            ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1));
                } else {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_0)
                            ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0));
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum;
                }
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_a;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_b;
            }
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_a 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_b 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col1_01_to_11 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col1_01_to_11 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_01 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_01_11 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_b;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col1_01_to_11;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col1_01_to_11;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_b 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_01_11;
        }
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst) {
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b = 0U;
            } else {
                if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__switch) {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum;
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_1)
                            ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1));
                } else {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_0)
                            ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0));
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum;
                }
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_a;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_b;
            }
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_a 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_b 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col0_00_to_10 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col0_00_to_10 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_00_01 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_00_10 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_b;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_a 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_00_01;
        }
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst) {
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a = 0U;
            } else {
                if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__switch) {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum;
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_1)
                            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_1)
                            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1));
                } else {
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 
                        = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_0)
                            ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_0)
                            : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0));
                    vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum;
                }
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_b;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a 
                    = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_a;
            }
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_b 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_a 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_10 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_b;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_10_11 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_a;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_a 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_a_10_11;
        }
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v0;
            __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v0 = 0;
            SData/*15:0*/ __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2;
            __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2;
            __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2 = 0;
            SData/*15:0*/ __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v3;
            __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v3 = 0;
            __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2 = 0U;
            if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst) {
                __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v0 = 1U;
            } else if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_valid) {
                if (vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r2) {
                    __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_r1;
                    __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v3 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_1;
                } else {
                    __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_r1;
                    __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v3 
                        = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_1;
                }
                __Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2 = 1U;
            }
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid_r 
                = ((1U & (~ (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__rst))) 
                   && (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_valid));
            if (__Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v0) {
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_r[0U] = 0U;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_r[1U] = 0U;
            }
            if (__Vinline_0__nba_sequent__TOP__5___VdlySet__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2) {
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_r[0U] 
                    = __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v2;
                vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_r[1U] 
                    = __Vinline_0__nba_sequent__TOP__5___VdlyVal__control_systolic__DOT__systolic_unit_0__DOT__out_c_r__v3;
            }
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_r;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid_r;
            vlSelfRef.control_systolic__DOT__D_c = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c;
            vlSelfRef.control_systolic__DOT__out_c_valid 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid;
            vlSelfRef.D_c = vlSelfRef.control_systolic__DOT__D_c;
            vlSelfRef.out_c_valid = vlSelfRef.control_systolic__DOT__out_c_valid;
        }
    }
    if ((0x0000000000180000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst)
                    ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_r1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__q;
        }
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst)
                    ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_r1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__q;
        }
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q 
                = ((~ (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst)) 
                   & (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1;
        }
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q 
                = ((~ (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst)) 
                   & (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1;
        }
    }
    if ((0x0000000001800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst)
                    ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_01_d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_b 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_b_01_d;
        }
    }
    if ((0x0000000006000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__11
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst)
                    ? 0U : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_10_d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_a 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__in_a_10_d;
        }
    }
    if ((0x0000000000018000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__12
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q 
                = ((~ (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst)) 
                   & (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r2 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__switch 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r2;
        }
    }
    if ((0x0000000000060000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__13
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q 
                = ((~ (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst)) 
                   & (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__d));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__q 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__q;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__switch 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__switch 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_r1;
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__switch 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__switch;
        }
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__15
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_0 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc0_col0_00_to_10;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__acc1_col0_00_to_10;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_b 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_b_00_10;
        }
    }
    if ((0x00000000000001e0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__multi 
                = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_b) 
                                  * (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_a)));
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__16
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_1;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_1 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_0;
        }
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__17
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_0;
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__d 
                = vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_0;
        }
    }
    if ((0x0000000000007800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_valid 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1) 
                   | (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1));
        }
    }
    if ((0x0000000001800600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__multi 
                = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_b) 
                                  * (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_a)));
        }
    }
    if ((0x0000000000018018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_c 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__switch)
                    ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0)
                    : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1));
        }
    }
    if ((0x0000000000060060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_c 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__switch)
                    ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0)
                    : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1));
        }
    }
    if ((0x0000000000060180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_c 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__switch)
                    ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0)
                    : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1));
        }
    }
    if ((0x0000000000000601ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_c 
                = ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__switch)
                    ? (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0)
                    : (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1));
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum 
                = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_c) 
                                  + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__multi)));
        }
    }
    if ((0x0000000006000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__multi 
                = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_b) 
                                  * (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_a)));
        }
    }
    if ((0x00000000000181f8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__8
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum 
                = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_c) 
                                  + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__multi)));
        }
    }
    if ((0x0000000001860780ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__9
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum 
                = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_c) 
                                  + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__multi)));
        }
    }
    if ((0x0000000006060660ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__10
            vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum 
                = (0x0000ffffU & ((IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_c) 
                                  + (IData)(vlSelfRef.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__multi)));
        }
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/vraj/Hardware/TPU/control_systolic.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/vraj/Hardware/TPU/control_systolic.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/vraj/Hardware/TPU/control_systolic.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.a_ready & 0xfeU)))) {
        Verilated::overWidthError("a_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.b_ready & 0xfeU)))) {
        Verilated::overWidthError("b_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.num_matrix & 0x80U)))) {
        Verilated::overWidthError("num_matrix");
    }
}
#endif  // VL_DEBUG
