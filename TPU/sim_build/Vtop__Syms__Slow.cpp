// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(270);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_control_systolic = new VerilatedScope{this, "control_systolic", "control_systolic", "control_systolic", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0 = new VerilatedScope{this, "control_systolic.systolic_unit_0", "systolic_unit_0", "systolic", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__U_00 = new VerilatedScope{this, "control_systolic.systolic_unit_0.U_00", "U_00", "pe", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__U_01 = new VerilatedScope{this, "control_systolic.systolic_unit_0.U_01", "U_01", "pe", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__U_10 = new VerilatedScope{this, "control_systolic.systolic_unit_0.U_10", "U_10", "pe", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__U_11 = new VerilatedScope{this, "control_systolic.systolic_unit_0.U_11", "U_11", "pe", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_1 = new VerilatedScope{this, "control_systolic.systolic_unit_0.drain_ff_1", "drain_ff_1", "dff", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_2 = new VerilatedScope{this, "control_systolic.systolic_unit_0.drain_ff_2", "drain_ff_2", "dff", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__stage_a = new VerilatedScope{this, "control_systolic.systolic_unit_0.stage_a", "stage_a", "dff", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__stage_b = new VerilatedScope{this, "control_systolic.systolic_unit_0.stage_b", "stage_b", "dff", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__stage_c_0 = new VerilatedScope{this, "control_systolic.systolic_unit_0.stage_c_0", "stage_c_0", "dff", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__stage_c_1 = new VerilatedScope{this, "control_systolic.systolic_unit_0.stage_c_1", "stage_c_1", "dff", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__switch_ff2 = new VerilatedScope{this, "control_systolic.systolic_unit_0.switch_ff2", "switch_ff2", "dff", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_control_systolic__systolic_unit_0__switch_ff_1 = new VerilatedScope{this, "control_systolic.systolic_unit_0.switch_ff_1", "switch_ff_1", "dff", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_control_systolic);
    __Vhier.add(__Vscopep_control_systolic, __Vscopep_control_systolic__systolic_unit_0);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_00);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_01);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_10);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_11);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__drain_ff_1);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__drain_ff_2);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_a);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_b);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_c_0);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_c_1);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__switch_ff2);
    __Vhier.add(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__switch_ff_1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("D_a_00", &(TOP.D_a_00), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("D_a_10", &(TOP.D_a_10), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("D_b_00", &(TOP.D_b_00), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("D_b_01", &(TOP.D_b_01), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("D_c", &(TOP.D_c), false, VLVT_UINT16, VLVD_OUT|VLVF_PUB_RW, 1, 1 ,0,1 ,15,0);
    __Vscopep_TOP->varInsert("a_ready", &(TOP.a_ready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("b_ready", &(TOP.b_ready), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("num_matrix", &(TOP.num_matrix), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_TOP->varInsert("out_c_valid", &(TOP.out_c_valid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst", &(TOP.rst), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("systolic_busy", &(TOP.systolic_busy), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_TOP->varInsert("systolic_free", &(TOP.systolic_free), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_control_systolic->varInsert("D_a_00", &(TOP.control_systolic__DOT__D_a_00), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic->varInsert("D_a_10", &(TOP.control_systolic__DOT__D_a_10), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic->varInsert("D_b_00", &(TOP.control_systolic__DOT__D_b_00), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic->varInsert("D_b_01", &(TOP.control_systolic__DOT__D_b_01), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic->varInsert("D_c", &(TOP.control_systolic__DOT__D_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,1 ,15,0);
    __Vscopep_control_systolic->varInsert("a_ready", &(TOP.control_systolic__DOT__a_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("b_ready", &(TOP.control_systolic__DOT__b_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic->varInsert("busy_r", &(TOP.control_systolic__DOT__busy_r), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("clk", &(TOP.control_systolic__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("cnt", &(TOP.control_systolic__DOT__cnt), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_control_systolic->varInsert("drain_even", &(TOP.control_systolic__DOT__drain_even), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("drain_odd", &(TOP.control_systolic__DOT__drain_odd), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("drain_odd_d1", &(TOP.control_systolic__DOT__drain_odd_d1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("matrix_count", &(TOP.control_systolic__DOT__matrix_count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_control_systolic->varInsert("mem_size", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__mem_size))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic->varInsert("num_matrix", &(TOP.control_systolic__DOT__num_matrix), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_control_systolic->varInsert("out_c_valid", &(TOP.control_systolic__DOT__out_c_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("row_count", &(TOP.control_systolic__DOT__row_count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_control_systolic->varInsert("rst", &(TOP.control_systolic__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("start", &(TOP.control_systolic__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 0);
    __Vscopep_control_systolic->varInsert("switch", &(TOP.control_systolic__DOT__switch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("switch_r1", &(TOP.control_systolic__DOT__switch_r1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("switch_r2", &(TOP.control_systolic__DOT__switch_r2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic->varInsert("systolic_busy", &(TOP.control_systolic__DOT__systolic_busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_control_systolic->varInsert("systolic_free", &(TOP.control_systolic__DOT__systolic_free), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_control_systolic->varInsert("systolic_size", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_size))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("acc0_col0_00_to_10", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__acc0_col0_00_to_10), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("acc0_col1_01_to_11", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__acc0_col1_01_to_11), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("acc1_col0_00_to_10", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__acc1_col0_00_to_10), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("acc1_col1_01_to_11", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__acc1_col1_01_to_11), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("boundary_zero_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__boundary_zero_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("boundary_zero_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__boundary_zero_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("drain_even", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_even), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("drain_even_r1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_even_r1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("drain_odd", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_odd), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("drain_odd_r1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_odd_r1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("drain_valid", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("in_a_00", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__in_a_00), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("in_a_10", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__in_a_10), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("in_a_10_d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__in_a_10_d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("in_b_00", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__in_b_00), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("in_b_01", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__in_b_01), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("in_b_01_d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__in_b_01_d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_a_00_01", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_a_00_01), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_a_01", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_a_01), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_a_10_11", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_a_10_11), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_a_11", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_a_11), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_acc_0_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_acc_0_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_acc_0_r1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_acc_0_r1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_acc_1_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_acc_1_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_acc_1_r1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_acc_1_r1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_b_00_10", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_b_00_10), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_b_01_11", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_b_01_11), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_b_10", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_b_10), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_b_11", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_b_11), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_c", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 1, 1 ,0,1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_c_r", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_c_r), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_c_valid", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("out_c_valid_r", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__out_c_valid_r), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("switch", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("switch_r1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_r1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("switch_r2", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_r2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0->varInsert("systolic_size", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__systolic_size))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("acc_c", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__acc_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("drain_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_0), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("drain_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("drain_data_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_data_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("drain_data_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__drain_data_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("in_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("in_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__in_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("multi", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__multi), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("out_acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("out_acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("pe_sum", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__pe_sum), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("r_out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("r_out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__r_out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_00->varInsert("switch", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__switch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("acc_c", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__acc_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("drain_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_0), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("drain_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("drain_data_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_data_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("drain_data_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__drain_data_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("in_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("in_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__in_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("multi", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__multi), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("out_acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("out_acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("pe_sum", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__pe_sum), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("r_out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("r_out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__r_out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_01->varInsert("switch", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__switch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("acc_c", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__acc_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("drain_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_0), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("drain_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("drain_data_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("drain_data_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__drain_data_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("in_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("in_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__in_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("multi", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__multi), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("out_acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("out_acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("pe_sum", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__pe_sum), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("r_out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("r_out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__r_out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_10->varInsert("switch", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__switch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("acc_c", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__acc_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("drain_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_0), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("drain_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("drain_data_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("drain_data_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__drain_data_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("in_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("in_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__in_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("multi", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__multi), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("out_acc_0", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_0), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("out_acc_1", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_acc_1), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("pe_sum", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__pe_sum), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("r_out_a", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("r_out_b", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__r_out_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__U_11->varInsert("switch", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__switch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_1->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_1->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_1->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_1->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_1->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__r_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_1->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_2->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_2->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_2->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_2->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_2->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__r_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__drain_ff_2->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_a->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_a->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_a->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_a->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_a->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__r_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_a->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_b->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_b->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_b->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_b->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_b->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__r_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_b->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_0->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_0->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_0->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__d), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_0->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__q), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_0->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__r_q), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_0->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_1->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_1->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_1->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__d), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_1->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__q), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_1->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__r_q), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_control_systolic__systolic_unit_0__stage_c_1->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff2->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff2->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff2->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff2->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff2->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__r_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff2->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff_1->varInsert("bit_width", const_cast<void*>(static_cast<const void*>(&(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__bit_width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff_1->varInsert("clk", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff_1->varInsert("d", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff_1->varInsert("q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff_1->varInsert("r_q", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__r_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_control_systolic__systolic_unit_0__switch_ff_1->varInsert("rst", &(TOP.control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_control_systolic);
    __Vhier.remove(__Vscopep_control_systolic, __Vscopep_control_systolic__systolic_unit_0);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_00);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_01);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_10);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__U_11);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__drain_ff_1);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__drain_ff_2);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_a);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_b);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_c_0);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__stage_c_1);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__switch_ff2);
    __Vhier.remove(__Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0__switch_ff_1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic, __Vscopep_control_systolic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0, __Vscopep_control_systolic__systolic_unit_0 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__U_00, __Vscopep_control_systolic__systolic_unit_0__U_00 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__U_01, __Vscopep_control_systolic__systolic_unit_0__U_01 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__U_10, __Vscopep_control_systolic__systolic_unit_0__U_10 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__U_11, __Vscopep_control_systolic__systolic_unit_0__U_11 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__drain_ff_1, __Vscopep_control_systolic__systolic_unit_0__drain_ff_1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__drain_ff_2, __Vscopep_control_systolic__systolic_unit_0__drain_ff_2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__stage_a, __Vscopep_control_systolic__systolic_unit_0__stage_a = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__stage_b, __Vscopep_control_systolic__systolic_unit_0__stage_b = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__stage_c_0, __Vscopep_control_systolic__systolic_unit_0__stage_c_0 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__stage_c_1, __Vscopep_control_systolic__systolic_unit_0__stage_c_1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__switch_ff2, __Vscopep_control_systolic__systolic_unit_0__switch_ff2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control_systolic__systolic_unit_0__switch_ff_1, __Vscopep_control_systolic__systolic_unit_0__switch_ff_1 = nullptr);
    // Tear down sub module instances
}
