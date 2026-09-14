// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_dtype____0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 2>& __VdtypeVar);

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__DUT__DOT__busy_r));
        bufp->chgBit(oldp+1,((1U & (~ (IData)(vlSelfRef.tb__DOT__DUT__DOT__busy_r)))));
        bufp->chgCData(oldp+2,(vlSelfRef.tb__DOT__DUT__DOT__row_count),5);
        bufp->chgCData(oldp+3,(vlSelfRef.tb__DOT__DUT__DOT__matrix_count),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        Vtb___024root__trace_chg_dtype____0(vlSelf, bufp, 4, vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_r);
        bufp->chgBit(oldp+6,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_c_valid_r));
        bufp->chgCData(oldp+7,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a),8);
        bufp->chgCData(oldp+9,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b),8);
        bufp->chgCData(oldp+10,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b),8);
        bufp->chgCData(oldp+11,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b),8);
        bufp->chgCData(oldp+14,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b),8);
        bufp->chgSData(oldp+15,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0),16);
        bufp->chgSData(oldp+16,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1),16);
        bufp->chgSData(oldp+17,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0),16);
        bufp->chgSData(oldp+18,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1),16);
        bufp->chgCData(oldp+19,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q),8);
        bufp->chgCData(oldp+20,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q),8);
        bufp->chgBit(oldp+21,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q));
        bufp->chgBit(oldp+22,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q));
        bufp->chgBit(oldp+23,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q));
        bufp->chgBit(oldp+24,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q));
        bufp->chgSData(oldp+25,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[0]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_0[1]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[0]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__out_acc_1[1]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q),16);
        bufp->chgSData(oldp+30,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q),16);
        bufp->chgBit(oldp+31,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_valid));
        bufp->chgSData(oldp+32,(((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q)
                                  ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0)
                                  : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1))),16);
        bufp->chgSData(oldp+33,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum),16);
        bufp->chgSData(oldp+34,((0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q) 
                                                * (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a)))),16);
        bufp->chgSData(oldp+35,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0),16);
        bufp->chgSData(oldp+36,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1),16);
        bufp->chgSData(oldp+37,(((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q)
                                  ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0)
                                  : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1))),16);
        bufp->chgSData(oldp+38,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum),16);
        bufp->chgSData(oldp+39,((0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b) 
                                                * (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q)))),16);
        bufp->chgSData(oldp+40,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0),16);
        bufp->chgSData(oldp+41,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1),16);
        bufp->chgSData(oldp+42,(((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q)
                                  ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0)
                                  : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1))),16);
        bufp->chgSData(oldp+43,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum),16);
        bufp->chgSData(oldp+44,((0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b) 
                                                * (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a)))),16);
        bufp->chgBit(oldp+45,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q));
        bufp->chgBit(oldp+46,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q));
        bufp->chgBit(oldp+47,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q));
        bufp->chgBit(oldp+48,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+49,(vlSelfRef.tb__DOT__a_ready));
        bufp->chgBit(oldp+50,(vlSelfRef.tb__DOT__b_ready));
        bufp->chgCData(oldp+51,(vlSelfRef.tb__DOT__num_matrix),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+52,(vlSelfRef.tb__DOT__DUT__DOT__switch));
        bufp->chgBit(oldp+53,(vlSelfRef.tb__DOT__DUT__DOT__switch_r1));
        bufp->chgBit(oldp+54,(vlSelfRef.tb__DOT__DUT__DOT__drain_odd));
        bufp->chgBit(oldp+55,(vlSelfRef.tb__DOT__DUT__DOT__drain_odd_d1));
        bufp->chgBit(oldp+56,(vlSelfRef.tb__DOT__DUT__DOT__drain_even));
        bufp->chgBit(oldp+57,(vlSelfRef.tb__DOT__DUT__DOT__drain_even));
        bufp->chgBit(oldp+58,(vlSelfRef.tb__DOT__DUT__DOT__drain_odd));
        bufp->chgBit(oldp+59,(vlSelfRef.tb__DOT__DUT__DOT__switch_r1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+60,(vlSelfRef.tb__DOT__in_a_00),8);
        bufp->chgCData(oldp+61,(vlSelfRef.tb__DOT__in_a_10),8);
        bufp->chgCData(oldp+62,(vlSelfRef.tb__DOT__in_b_00),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tb__DOT__in_b_01),8);
        bufp->chgSData(oldp+64,((0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__in_b_00) 
                                                * (IData)(vlSelfRef.tb__DOT__in_a_00)))),16);
    }
    bufp->chgBit(oldp+65,(vlSelfRef.tb__DOT__clk));
    bufp->chgBit(oldp+66,(vlSelfRef.tb__DOT__rst));
    bufp->chgBit(oldp+67,(vlSelfRef.tb__DOT__DUT__DOT__start));
    bufp->chgSData(oldp+68,(((IData)(vlSelfRef.tb__DOT__DUT__DOT__switch_r1)
                              ? (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0)
                              : (IData)(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1))),16);
    bufp->chgSData(oldp+69,(vlSelfRef.tb__DOT__DUT__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum),16);
}

void Vtb___024root__trace_chg_dtype____0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_dtype____0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
