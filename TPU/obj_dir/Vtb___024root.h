// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ tb__DOT__in_a_00;
        CData/*7:0*/ tb__DOT__in_a_10;
        CData/*7:0*/ tb__DOT__in_b_00;
        CData/*7:0*/ tb__DOT__in_b_01;
        CData/*0:0*/ tb__DOT__a_ready;
        CData/*0:0*/ tb__DOT__b_ready;
        CData/*4:0*/ tb__DOT__num_matrix;
        CData/*0:0*/ tb__DOT__clk;
        CData/*0:0*/ tb__DOT__rst;
        CData/*0:0*/ tb__DOT____Vstrobe0;
        CData/*4:0*/ tb__DOT__DUT__DOT__row_count;
        CData/*4:0*/ tb__DOT__DUT__DOT__matrix_count;
        CData/*0:0*/ tb__DOT__DUT__DOT__busy_r;
        CData/*0:0*/ tb__DOT__DUT__DOT__start;
        CData/*1:0*/ tb__DOT__DUT__DOT__cnt;
        CData/*0:0*/ tb__DOT__DUT__DOT__switch;
        CData/*0:0*/ tb__DOT__DUT__DOT__switch_r1;
        CData/*0:0*/ tb__DOT__DUT__DOT__switch_r2;
        CData/*0:0*/ tb__DOT__DUT__DOT__drain_odd;
        CData/*0:0*/ tb__DOT__DUT__DOT__drain_odd_d1;
        CData/*0:0*/ tb__DOT__DUT__DOT__drain_even;
        CData/*0:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_valid;
        CData/*0:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_valid_r;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b;
        CData/*0:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q;
        CData/*0:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q;
        CData/*0:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q;
        CData/*0:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q;
        CData/*7:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q;
        CData/*0:0*/ __Vdly__tb__DOT__DUT__DOT__switch;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__num_matrix__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__a_ready__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__b_ready__v0;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v1;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v1;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v1;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v1;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v2;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v2;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v2;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v2;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v3;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v3;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v3;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v3;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v4;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v4;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v4;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v4;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v5;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v5;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v5;
    };
    struct {
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v5;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v6;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v6;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v6;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v6;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v7;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v7;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v7;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v7;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v8;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v8;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v8;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v8;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v9;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v9;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v9;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v9;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v10;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v10;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v10;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v10;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v11;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v11;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v11;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v11;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v12;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v12;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v12;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v12;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v13;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v13;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v13;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v13;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v14;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v14;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v14;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v14;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v15;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v15;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v15;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v15;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v16;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v16;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v16;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v16;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v17;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v17;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v17;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v17;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v18;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v18;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v18;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v18;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v19;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v19;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v19;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v19;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v20;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v20;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v20;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v20;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v21;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v21;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v21;
    };
    struct {
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v21;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v22;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v22;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v22;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v22;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_00__v23;
        CData/*0:0*/ __VdlySet__tb__DOT__in_a_10__v23;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_00__v23;
        CData/*0:0*/ __VdlySet__tb__DOT__in_b_01__v23;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q;
        SData/*15:0*/ tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q;
        IData/*31:0*/ tb__DOT__i;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3d8704cb__0;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* namep);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
