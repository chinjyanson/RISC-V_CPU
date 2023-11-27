// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h2ad0e489__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h2ad0e489__0[0U] = 0x2e6d656dU;
    __Vtemp_h2ad0e489__0[1U] = 0x636f6465U;
    __Vtemp_h2ad0e489__0[2U] = 0x68696e65U;
    __Vtemp_h2ad0e489__0[3U] = 0x6d6163U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h2ad0e489__0)
                 ,  &(vlSelf->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__Myblue__DOT__next_PC = ((IData)(4U) 
                                              + vlSelf->cpu__DOT__Myblue__DOT__pc);
    vlSelf->cpu__DOT__Mygreen__DOT__instr = vlSelf->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array
        [(1U & vlSelf->cpu__DOT____Vcellout__Myblue__pc_out)];
    vlSelf->cpu__DOT____Vcellout__Mygreen__ImmOp = 
        ((IData)(vlSelf->cpu__DOT__Mygreen__DOT__ImmScr)
          ? (((- (IData)((vlSelf->cpu__DOT__Mygreen__DOT__instr 
                          >> 0x1fU))) << 0xcU) | (vlSelf->cpu__DOT__Mygreen__DOT__instr 
                                                  >> 0x14U))
          : 0U);
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Instr = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT____Vcellout__Myblue__pc_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT____Vcellout__Mygreen__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Myblue__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Myblue__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Mygreen__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Mygreen__DOT__ImmScr = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__Myred__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Myred__DOT__regOp2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
