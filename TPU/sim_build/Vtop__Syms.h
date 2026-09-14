// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_control_systolic;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__U_00;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__U_01;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__U_10;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__U_11;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__drain_ff_1;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__drain_ff_2;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__stage_a;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__stage_b;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__stage_c_0;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__stage_c_1;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__switch_ff2;
    VerilatedScope* __Vscopep_control_systolic__systolic_unit_0__switch_ff_1;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
