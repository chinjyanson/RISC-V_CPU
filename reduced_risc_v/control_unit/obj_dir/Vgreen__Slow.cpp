// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgreen.h for the primary calling header

#include "Vgreen.h"
#include "Vgreen__Syms.h"

//==========

VL_CTOR_IMP(Vgreen) {
    Vgreen__Syms* __restrict vlSymsp = __VlSymsp = new Vgreen__Syms(this, name());
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vgreen::__Vconfigure(Vgreen__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vgreen::~Vgreen() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vgreen::_settle__TOP__1(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_settle__TOP__1\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ALUctrl = 0U;
}

void Vgreen::_initial__TOP__2(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_initial__TOP__2\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp1[0U] = 0x2e6d656dU;
    __Vtemp1[1U] = 0x636f6465U;
    __Vtemp1[2U] = 0x68696e65U;
    __Vtemp1[3U] = 0x6d6163U;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlTOPp->green__DOT__MyInstrMem__DOT__rom_array
                 , 0, ~0ULL);
}

void Vgreen::_eval_initial(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_eval_initial\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
}

void Vgreen::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::final\n"); );
    // Variables
    Vgreen__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vgreen::_eval_settle(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_eval_settle\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void Vgreen::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_ctor_var_reset\n"); );
    // Body
    PC = VL_RAND_RESET_I(8);
    EQ = VL_RAND_RESET_I(1);
    instr = VL_RAND_RESET_I(32);
    RegWrite = VL_RAND_RESET_I(1);
    ALUctrl = VL_RAND_RESET_I(3);
    ALUsrc = VL_RAND_RESET_I(1);
    PCsrc = VL_RAND_RESET_I(1);
    ImmOp = VL_RAND_RESET_I(32);
    opcode_out = VL_RAND_RESET_I(7);
    green__DOT__ImmSrc = VL_RAND_RESET_I(2);
    green__DOT__MyInstrMem__DOT__clk = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            green__DOT__MyInstrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
