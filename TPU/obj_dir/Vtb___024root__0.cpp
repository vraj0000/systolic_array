// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb.v", 
                                             45);
        vlSelfRef.tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk)));
    }
    co_return;
}

void Vtb___024root____VbeforeTrig_h3d8704cb__0(Vtb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("waveform.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__rst = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v0 = 1U;
    tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                                  "@(posedge tb.clk)");
        co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "tb.v", 
                                                             65);
        tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = (tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                                   - (IData)(1U));
    }
    vlSelfRef.tb__DOT__rst = 0U;
    vlSelfRef.__VdlySet__tb__DOT__num_matrix__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__a_ready__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__b_ready__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v1 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v1 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v1 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v1 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         75);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v2 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v2 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v2 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v2 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         79);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v3 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v3 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v3 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v3 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         83);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v4 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v4 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v4 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v4 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         88);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v5 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v5 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v5 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v5 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         93);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v6 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v6 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v6 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v6 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         97);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v7 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v7 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v7 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v7 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         102);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v8 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v8 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v8 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v8 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         106);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v9 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v9 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v9 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v9 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         111);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v10 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v10 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v10 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v10 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         115);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v11 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v11 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v11 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v11 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         121);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v12 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v12 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v12 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v12 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         125);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v13 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v13 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v13 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v13 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         131);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v14 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v14 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v14 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v14 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         135);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v15 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v15 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v15 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v15 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         141);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v16 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v16 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v16 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v16 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         145);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v17 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v17 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v17 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v17 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         151);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v18 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v18 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v18 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v18 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         155);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v19 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v19 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v19 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v19 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         161);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v20 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v20 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v20 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v20 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         165);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v21 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v21 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v21 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v21 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         170);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v22 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v22 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v22 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v22 = 1U;
    Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                              "@(posedge tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "tb.v", 
                                                         174);
    vlSelfRef.__VdlySet__tb__DOT__in_a_00__v23 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_a_10__v23 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_00__v23 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__in_b_01__v23 = 1U;
    tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 4U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb___024root____VbeforeTrig_h3d8704cb__0(vlSelf, 
                                                  "@(posedge tb.clk)");
        co_await vlSelfRef.__VtrigSched_h3d8704cb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "tb.v", 
                                                             182);
        tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = (tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                                                   - (IData)(1U));
    }
    VL_FINISH_MT("tb.v", 184, "");
    co_return;
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
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

void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v0;
    __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2;
    __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2;
    __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v3;
    __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v3 = 0;
    // Body
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0;
    __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v0 = 0U;
    __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2 = 0U;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
    __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0;
    if (vlSelfRef.tb__DOT__rst) {
        __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 = 0U;
        __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 = 0U;
        __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 = 0U;
        __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v0 = 1U;
        __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 = 0U;
        __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1 = 0U;
        __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0 = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q = 0U;
    } else {
        if (vlSelfRef.tb__DOT__DUT__DOT__switch_r1) {
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_odd)
                    ? 0U : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1));
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum;
        } else {
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum;
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_even)
                    ? 0U : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0));
        }
        if (vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q) {
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_odd)
                    ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1)
                    : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1));
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q)
                    ? 0U : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1));
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum;
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum;
        } else {
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum;
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum;
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_even)
                    ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0)
                    : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0));
            __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q)
                    ? 0U : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0));
        }
        if (vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_valid) {
            if (vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q) {
                __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2 
                    = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q;
                __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v3 
                    = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[1U];
            } else {
                __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2 
                    = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q;
                __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v3 
                    = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[1U];
            }
            __VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2 = 1U;
        }
        if (vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q) {
            vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q)
                    ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1)
                    : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1));
            vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum;
        } else {
            vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1 
                = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum;
            vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0 
                = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q)
                    ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0)
                    : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0));
        }
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b 
            = vlSelfRef.tb__DOT__in_b_00;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a 
            = vlSelfRef.tb__DOT__in_a_00;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b 
            = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q 
            = vlSelfRef.tb__DOT__in_a_10;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q 
            = vlSelfRef.tb__DOT__in_b_01;
    }
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_valid_r 
        = ((1U & (~ (IData)(vlSelfRef.tb__DOT__rst))) 
           && (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_valid));
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1 
        = __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1;
    if (__VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v0) {
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r[0U] = 0U;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r[1U] = 0U;
    }
    if (__VdlySet__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2) {
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r[0U] 
            = __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v2;
        vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r[1U] 
            = __VdlyVal__tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r__v3;
    }
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0 
        = __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1 
        = __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0 
        = __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[1U] 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q 
        = ((~ (IData)(vlSelfRef.tb__DOT__rst)) & (IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_odd));
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[1U] 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q 
        = ((~ (IData)(vlSelfRef.tb__DOT__rst)) & (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q));
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q 
        = ((~ (IData)(vlSelfRef.tb__DOT__rst)) & (IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_even));
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1 
        = __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0 
        = __Vdly__tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[0U] 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[0U] 
        = vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0;
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q 
        = ((~ (IData)(vlSelfRef.tb__DOT__rst)) & (IData)(vlSelfRef.tb__DOT__DUT__DOT__switch_r1));
    vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_valid 
        = ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q) 
           | (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q));
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

void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__4\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v0) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v0 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v1) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v1 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v2) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v2 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v3) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v3 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0x0dU;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v4) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v4 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0x0eU;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v5) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v5 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0x15U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v6) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v6 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0x14U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v7) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v7 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v8) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v8 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v9) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v9 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v10) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v10 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v11) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v11 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v12) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v12 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v13) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v13 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v14) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v14 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v15) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v15 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v16) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v16 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v17) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v17 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v18) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v18 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v19) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v19 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 5U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v20) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v20 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 7U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v21) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v21 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v22) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v22 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_00__v23) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_00__v23 = 0U;
        vlSelfRef.tb__DOT__in_b_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v0) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v0 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v1) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v1 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v2) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v2 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v3) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v3 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 9U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v4) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v4 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 0x0aU;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v5) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v5 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 0x11U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v6) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v6 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 0x12U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v7) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v7 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v8) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v8 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v9) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v9 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v10) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v10 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v11) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v11 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v12) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v12 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v13) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v13 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v14) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v14 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v15) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v15 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v16) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v16 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v17) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v17 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v18) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v18 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v19) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v19 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v20) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v20 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v21) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v21 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v22) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v22 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_00__v23) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_00__v23 = 0U;
        vlSelfRef.tb__DOT__in_a_00 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v0) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v0 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v1) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v1 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v2) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v2 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v3) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v3 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0x0bU;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v4) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v4 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0x0cU;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v5) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v5 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0x13U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v6) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v6 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0x16U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v7) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v7 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v8) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v8 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v9) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v9 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v10) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v10 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v11) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v11 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v12) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v12 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v13) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v13 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v14) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v14 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v15) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v15 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v16) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v16 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v17) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v17 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v18) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v18 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v19) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v19 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 3U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v20) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v20 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 4U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v21) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v21 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v22) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v22 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_a_10__v23) {
        vlSelfRef.__VdlySet__tb__DOT__in_a_10__v23 = 0U;
        vlSelfRef.tb__DOT__in_a_10 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v0) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v0 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v1) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v1 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v2) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v2 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v3) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v3 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v4) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v4 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0x10U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v5) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v5 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0x17U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v6) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v6 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0x18U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v7) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v7 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v8) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v8 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v9) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v9 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v10) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v10 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v11) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v11 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v12) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v12 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v13) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v13 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v14) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v14 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v15) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v15 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v16) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v16 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v17) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v17 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v18) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v18 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v19) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v19 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 6U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v20) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v20 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 8U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v21) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v21 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v22) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v22 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__in_b_01__v23) {
        vlSelfRef.__VdlySet__tb__DOT__in_b_01__v23 = 0U;
        vlSelfRef.tb__DOT__in_b_01 = 0U;
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__busy_r;
            __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__busy_r = 0;
            CData/*4:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count;
            __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count = 0;
            CData/*4:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__matrix_count;
            __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__matrix_count = 0;
            __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__busy_r 
                = vlSelfRef.tb__DOT__DUT__DOT__busy_r;
            __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count 
                = vlSelfRef.tb__DOT__DUT__DOT__row_count;
            __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__matrix_count 
                = vlSelfRef.tb__DOT__DUT__DOT__matrix_count;
            vlSelfRef.__Vdly__tb__DOT__DUT__DOT__switch 
                = vlSelfRef.tb__DOT__DUT__DOT__switch;
            vlSelfRef.tb__DOT____Vstrobe0 = 1U;
            if (vlSelfRef.tb__DOT__rst) {
                __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__busy_r = 0U;
                __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count = 0U;
                __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__matrix_count = 0U;
            } else {
                if (((~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__busy_r)) 
                     & (IData)(vlSelfRef.tb__DOT__DUT__DOT__start))) {
                    __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__busy_r = 1U;
                } else if (((IData)(vlSelfRef.tb__DOT__DUT__DOT__busy_r) 
                            & ((IData)(vlSelfRef.tb__DOT__DUT__DOT__matrix_count) 
                               == (IData)(vlSelfRef.tb__DOT__num_matrix)))) {
                    __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__busy_r = 0U;
                }
                if (vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_valid_r) {
                    if ((1U == (IData)(vlSelfRef.tb__DOT__DUT__DOT__row_count))) {
                        __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__matrix_count 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb__DOT__DUT__DOT__matrix_count)));
                        __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count = 0U;
                    } else {
                        __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb__DOT__DUT__DOT__row_count)));
                    }
                } else {
                    __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count = 0U;
                    __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__matrix_count = 0U;
                }
            }
            vlSelfRef.tb__DOT__DUT__DOT__busy_r = __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__busy_r;
            vlSelfRef.tb__DOT__DUT__DOT__row_count 
                = __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__row_count;
            vlSelfRef.tb__DOT__DUT__DOT__matrix_count 
                = __Vinline_0__nba_sequent__TOP__0___Vdly__tb__DOT__DUT__DOT__matrix_count;
        }
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            if (vlSelfRef.__VdlySet__tb__DOT__a_ready__v0) {
                vlSelfRef.__VdlySet__tb__DOT__a_ready__v0 = 0U;
                vlSelfRef.tb__DOT__a_ready = 1U;
            }
            if (vlSelfRef.__VdlySet__tb__DOT__b_ready__v0) {
                vlSelfRef.__VdlySet__tb__DOT__b_ready__v0 = 0U;
                vlSelfRef.tb__DOT__b_ready = 1U;
            }
            if (vlSelfRef.__VdlySet__tb__DOT__num_matrix__v0) {
                vlSelfRef.__VdlySet__tb__DOT__num_matrix__v0 = 0U;
                vlSelfRef.tb__DOT__num_matrix = 0x0aU;
            }
        }
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.tb__DOT__DUT__DOT__drain_even 
                = ((1U & (~ ((IData)(vlSelfRef.tb__DOT__rst) 
                             | (~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__start))))) 
                   && (IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_odd_d1));
            vlSelfRef.tb__DOT__DUT__DOT__drain_odd_d1 
                = ((1U & (~ ((IData)(vlSelfRef.tb__DOT__rst) 
                             | (~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__start))))) 
                   && (IData)(vlSelfRef.tb__DOT__DUT__DOT__drain_odd));
            if ((1U & ((IData)(vlSelfRef.tb__DOT__rst) 
                       | (~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__start))))) {
                vlSelfRef.__Vdly__tb__DOT__DUT__DOT__switch = 0U;
                vlSelfRef.tb__DOT__DUT__DOT__drain_odd = 0U;
            } else {
                vlSelfRef.__Vdly__tb__DOT__DUT__DOT__switch 
                    = (1U & (~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__switch_r1)));
                vlSelfRef.tb__DOT__DUT__DOT__drain_odd 
                    = vlSelfRef.tb__DOT__DUT__DOT__switch_r1;
            }
            vlSelfRef.tb__DOT__DUT__DOT__switch_r1 
                = ((1U & (~ ((IData)(vlSelfRef.tb__DOT__rst) 
                             | (~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__start))))) 
                   && (IData)(vlSelfRef.tb__DOT__DUT__DOT__switch));
            vlSelfRef.tb__DOT__DUT__DOT__switch = vlSelfRef.__Vdly__tb__DOT__DUT__DOT__switch;
        }
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.tb__DOT__DUT__DOT__start = ((IData)(vlSelfRef.tb__DOT__a_ready) 
                                                  & (IData)(vlSelfRef.tb__DOT__b_ready));
        }
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum 
                = (0x0000ffffU & (((IData)(vlSelfRef.tb__DOT__DUT__DOT__switch_r1)
                                    ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0)
                                    : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1)) 
                                  + ((IData)(vlSelfRef.tb__DOT__in_b_00) 
                                     * (IData)(vlSelfRef.tb__DOT__in_a_00))));
        }
    }
}

void Vtb___024root___timing_ready(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_ready\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready("@(posedge tb.clk)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h3d8704cb__0.moveToResumeQueue(
                                                          "@(posedge tb.clk)");
    vlSelfRef.__VtrigSched_h3d8704cb__0.resume("@(posedge tb.clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 3U) 
                                                         | ((((IData)(vlSelfRef.tb__DOT__rst) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
            = vlSelfRef.tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0 
            = vlSelfRef.tb__DOT__rst;
    }
    Vtb___024root___timing_ready(vlSelf);
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__inact(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__inact\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
    {
        // Inlined CFunc: _eval_postponed
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
}

void Vtb___024root____VbeforeTrig_h3d8704cb__0(Vtb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____VbeforeTrig_h3d8704cb__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d8704cb__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
