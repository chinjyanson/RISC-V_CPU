// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0;
    // Body
    __Vdlyvval__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0 
        = (vlSelf->cpu__DOT__Myred__DOT__ALUop1 + (1U 
                                                   & vlSelf->cpu__DOT____Vcellout__Mygreen__ImmOp));
    __Vdlyvdim0__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0 
        = (0x1fU & ((IData)(vlSelf->cpu__DOT__Instr) 
                    >> 7U));
    vlSelf->cpu__DOT____Vcellout__Myblue__pc_out = 
        ((IData)(4U) + vlSelf->cpu__DOT__Myblue__DOT__pc);
    vlSelf->cpu__DOT__Myred__DOT__ALUop1 = vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array
        [(0x1fU & ((IData)(vlSelf->cpu__DOT__Instr) 
                   >> 0xfU))];
    vlSelf->cpu__DOT__Myred__DOT__regOp2 = vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array
        [(0x1fU & ((IData)(vlSelf->cpu__DOT__Instr) 
                   >> 0x14U))];
    vlSelf->a0 = vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array
        [0U];
    vlSelf->cpu__DOT__Mygreen__DOT__instr = vlSelf->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array
        [(1U & vlSelf->cpu__DOT____Vcellout__Myblue__pc_out)];
    vlSelf->cpu__DOT__Myblue__DOT__pc = ((IData)(vlSelf->rst)
                                          ? 0U : vlSelf->cpu__DOT__Myblue__DOT__next_PC);
    vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[__Vdlyvdim0__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0] 
        = __Vdlyvval__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0;
    vlSelf->cpu__DOT____Vcellout__Mygreen__ImmOp = 
        ((IData)(vlSelf->cpu__DOT__Mygreen__DOT__ImmScr)
          ? (((- (IData)((vlSelf->cpu__DOT__Mygreen__DOT__instr 
                          >> 0x1fU))) << 0xcU) | (vlSelf->cpu__DOT__Mygreen__DOT__instr 
                                                  >> 0x14U))
          : 0U);
    vlSelf->cpu__DOT__Myblue__DOT__next_PC = ((IData)(4U) 
                                              + vlSelf->cpu__DOT__Myblue__DOT__pc);
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
