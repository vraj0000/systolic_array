// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(a_ready,0,0);
        VL_IN8(b_ready,0,0);
        VL_IN8(D_a_00,7,0);
        VL_IN8(D_a_10,7,0);
        VL_IN8(D_b_00,7,0);
        VL_IN8(D_b_01,7,0);
        VL_IN8(num_matrix,6,0);
        VL_OUT8(out_c_valid,0,0);
        VL_OUT8(systolic_busy,0,0);
        VL_OUT8(systolic_free,0,0);
        CData/*0:0*/ control_systolic__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__a_ready;
        CData/*0:0*/ control_systolic__DOT__b_ready;
        CData/*7:0*/ control_systolic__DOT__D_a_00;
        CData/*7:0*/ control_systolic__DOT__D_a_10;
        CData/*7:0*/ control_systolic__DOT__D_b_00;
        CData/*7:0*/ control_systolic__DOT__D_b_01;
        CData/*6:0*/ control_systolic__DOT__num_matrix;
        CData/*0:0*/ control_systolic__DOT__out_c_valid;
        CData/*0:0*/ control_systolic__DOT__systolic_busy;
        CData/*0:0*/ control_systolic__DOT__systolic_free;
        CData/*6:0*/ control_systolic__DOT__row_count;
        CData/*6:0*/ control_systolic__DOT__matrix_count;
        CData/*0:0*/ control_systolic__DOT__busy_r;
        CData/*0:0*/ control_systolic__DOT__start;
        CData/*1:0*/ control_systolic__DOT__cnt;
        CData/*0:0*/ control_systolic__DOT__switch;
        CData/*0:0*/ control_systolic__DOT__switch_r1;
        CData/*0:0*/ control_systolic__DOT__switch_r2;
        CData/*0:0*/ control_systolic__DOT__drain_odd;
        CData/*0:0*/ control_systolic__DOT__drain_odd_d1;
        CData/*0:0*/ control_systolic__DOT__drain_even;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_even;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_odd;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__in_a_00;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__in_a_10;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__in_b_00;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__in_b_01;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_c_valid;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_a_00_01;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_a_10_11;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_b_00_10;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_b_01_11;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_a_01;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_a_11;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_b_10;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_b_11;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__in_a_10_d;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__in_b_01_d;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_r1;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_r2;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_valid;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_c_valid_r;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_a;
    };
    struct {
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_0;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_1;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__switch;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_b;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_0;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_1;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__switch;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_b;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_0;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_1;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__switch;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_b;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_0;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_1;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__switch;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_b;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__d;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__d;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__d;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__d;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk;
    };
    struct {
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__d;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__q;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk;
        CData/*0:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__d;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__q;
        CData/*7:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__acc0_col0_00_to_10;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__acc1_col0_00_to_10;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__acc0_col1_01_to_11;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__acc1_col1_01_to_11;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__boundary_zero_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__boundary_zero_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_r1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_r1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_c;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__multi;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0;
    };
    struct {
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_c;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__multi;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_data_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_data_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_c;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__multi;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_data_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_data_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_c;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__multi;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__d;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__q;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__d;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__q;
        SData/*15:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 2> D_c;
        VlUnpacked<SData/*15:0*/, 2> control_systolic__DOT__D_c;
        VlUnpacked<SData/*15:0*/, 2> control_systolic__DOT__systolic_unit_0__DOT__out_c;
        VlUnpacked<SData/*15:0*/, 2> control_systolic__DOT__systolic_unit_0__DOT__out_c_r;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_size = 2U;
    static constexpr IData/*31:0*/ control_systolic__DOT__bit_width = 8U;
    static constexpr IData/*31:0*/ control_systolic__DOT__mem_size = 0x00000064U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__systolic_size = 2U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__bit_width = 8U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__bit_width = 8U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__bit_width = 8U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__bit_width = 8U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__bit_width = 8U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__bit_width = 1U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__bit_width = 1U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__bit_width = 1U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__bit_width = 1U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__bit_width = 0x00000010U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__bit_width = 0x00000010U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__bit_width = 8U;
    static constexpr IData/*31:0*/ control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__bit_width = 8U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
