// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_size;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__mem_size;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__systolic_size;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__U_11__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__U_10__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__U_01__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__U_00__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__drain_ff_2__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__drain_ff_1__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__switch_ff2__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__switch_ff_1__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__stage_c_1__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__stage_c_0__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__stage_b__DOT__bit_width;
constexpr IData/*31:0*/ Vtop___024root::control_systolic__DOT__systolic_unit_0__DOT__stage_a__DOT__bit_width;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
