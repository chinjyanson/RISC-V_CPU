// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgreen.h for the primary calling header

#include "verilated.h"

#include "Vgreen___024root.h"

VL_INLINE_OPT void Vgreen___024root___combo__TOP__0(Vgreen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->instr = vlSelf->green__DOT__MyInstrMem__DOT__rom_array
        [vlSelf->PC];
}

void Vgreen___024root___eval(Vgreen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen___024root___eval\n"); );
    // Body
    Vgreen___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vgreen___024root___eval_debug_assertions(Vgreen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
