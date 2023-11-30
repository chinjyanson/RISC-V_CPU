// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu.h"
#include "Vcpu__Syms.h"

//==========

VL_CTOR_IMP(Vcpu) {
    Vcpu__Syms* __restrict vlSymsp = __VlSymsp = new Vcpu__Syms(this, name());
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu::__Vconfigure(Vcpu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vcpu::~Vcpu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vcpu::_settle__TOP__1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__1\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->aluctrl2 = 0U;
    vlTOPp->a0 = vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
        [0xaU];
}

void Vcpu::_initial__TOP__2(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_initial__TOP__2\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp1[0U] = 0x2e6d656dU;
    __Vtemp1[1U] = 0x636f6465U;
    __Vtemp1[2U] = 0x68696e65U;
    __Vtemp1[3U] = 0x6d6163U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlTOPp->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array
                 , 0, ~0ULL);
}

void Vcpu::_settle__TOP__4(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__4\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu__DOT__Instr = vlTOPp->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array
        [(0x3fU & (vlTOPp->cpu__DOT__PC >> 2U))];
    vlTOPp->instr2 = vlTOPp->cpu__DOT__Instr;
    vlTOPp->cpu__DOT__Myred__DOT__ALUop1 = vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
        [(0x1fU & (vlTOPp->cpu__DOT__Instr >> 0xfU))];
    vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc = ((0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->cpu__DOT__Instr))
                                               ? 1U
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->cpu__DOT__Instr))
                                                   ? 3U
                                                   : 0U));
    vlTOPp->cpu__DOT__ImmOp = ((1U == (IData)(vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc))
                                ? ((0xfffff000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cpu__DOT__Instr 
                                                                  >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | (0xfffU & (vlTOPp->cpu__DOT__Instr 
                                                >> 0x14U)))
                                : ((3U == (IData)(vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc))
                                    ? ((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->cpu__DOT__Instr 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0x800U & 
                                           (vlTOPp->cpu__DOT__Instr 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlTOPp->cpu__DOT__Instr 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlTOPp->cpu__DOT__Instr 
                                                   >> 7U)))))
                                    : 0U));
    vlTOPp->cpu__DOT__Myred__DOT__ALUop2 = (((0x13U 
                                              == (0x7fU 
                                                  & vlTOPp->cpu__DOT__Instr)) 
                                             | (0x63U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->cpu__DOT__Instr)))
                                             ? vlTOPp->cpu__DOT__ImmOp
                                             : vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
                                            [(0x1fU 
                                              & (vlTOPp->cpu__DOT__Instr 
                                                 >> 0x14U))]);
    vlTOPp->cpu__DOT__Myblue__DOT__next_PC = (((0x13U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->cpu__DOT__Instr)) 
                                               & ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->cpu__DOT__Instr)) 
                                                  & (vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                                     != vlTOPp->cpu__DOT__Myred__DOT__ALUop2)))
                                               ? (vlTOPp->cpu__DOT__Myblue__DOT__pc 
                                                  + vlTOPp->cpu__DOT__ImmOp)
                                               : ((IData)(4U) 
                                                  + vlTOPp->cpu__DOT__Myblue__DOT__pc));
}

void Vcpu::_eval_initial(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_initial\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vcpu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::final\n"); );
    // Variables
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcpu::_eval_settle(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_settle\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vcpu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a0 = VL_RAND_RESET_I(32);
    instr2 = VL_RAND_RESET_I(32);
    aluctrl2 = VL_RAND_RESET_I(3);
    pc2 = VL_RAND_RESET_I(32);
    cpu__DOT__ImmOp = VL_RAND_RESET_I(32);
    cpu__DOT__Instr = VL_RAND_RESET_I(32);
    cpu__DOT__PC = VL_RAND_RESET_I(32);
    cpu__DOT__Myblue__DOT__next_PC = VL_RAND_RESET_I(32);
    cpu__DOT__Myblue__DOT__pc = VL_RAND_RESET_I(32);
    cpu__DOT__Mygreen__DOT__ImmSrc = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cpu__DOT__Myred__DOT__ALUop1 = VL_RAND_RESET_I(32);
    cpu__DOT__Myred__DOT__ALUop2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            cpu__DOT__Myred__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
