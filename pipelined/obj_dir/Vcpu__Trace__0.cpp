// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->cpu__DOT__RegWriteW),3);
        bufp->chgCData(oldp+1,(vlSelf->cpu__DOT__RegWriteM),3);
        bufp->chgCData(oldp+2,(vlSelf->cpu__DOT__MemWriteM),2);
        bufp->chgCData(oldp+3,(vlSelf->cpu__DOT__ResultSrcW),2);
        bufp->chgCData(oldp+4,(vlSelf->cpu__DOT__ALUControlE),3);
        bufp->chgBit(oldp+5,(vlSelf->cpu__DOT__ALUSrcE));
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__InstrD),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__ExtImmD),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__PCD),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__PCPlus4D),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__ALUResultE),32);
        bufp->chgIData(oldp+11,((vlSelf->cpu__DOT__alu__DOT__PCE 
                                 + vlSelf->cpu__DOT__alu__DOT__ExtImmE)),32);
        bufp->chgCData(oldp+12,(vlSelf->cpu__DOT__PCSrcE),2);
        bufp->chgCData(oldp+13,(vlSelf->cpu__DOT__Rs1E),5);
        bufp->chgCData(oldp+14,(vlSelf->cpu__DOT__Rs2E),5);
        bufp->chgCData(oldp+15,(vlSelf->cpu__DOT__RdM),5);
        bufp->chgCData(oldp+16,(vlSelf->cpu__DOT__RdW),5);
        bufp->chgCData(oldp+17,(vlSelf->cpu__DOT__RdE),5);
        bufp->chgCData(oldp+18,(vlSelf->cpu__DOT__OpcodeE),7);
        bufp->chgBit(oldp+19,((vlSelf->cpu__DOT__alu__DOT__SrcAE 
                               == vlSelf->cpu__DOT__alu__DOT__SrcBE)));
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__PCF),32);
        bufp->chgIData(oldp+21,(((IData)(4U) + vlSelf->cpu__DOT__PCF)),32);
        bufp->chgBit(oldp+22,(vlSelf->cpu__DOT__Fen));
        bufp->chgBit(oldp+23,((((3U == (IData)(vlSelf->cpu__DOT__OpcodeE)) 
                                & (((IData)(vlSelf->cpu__DOT__RdE) 
                                    == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                                 >> 0xfU))) 
                                   | ((IData)(vlSelf->cpu__DOT__RdE) 
                                      == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                                   >> 0x14U)))))
                                ? 0U : 1U)));
        bufp->chgCData(oldp+24,(vlSelf->cpu__DOT__FowardAE),2);
        bufp->chgCData(oldp+25,(vlSelf->cpu__DOT__FowardBE),2);
        bufp->chgBit(oldp+26,(((0U != (IData)(vlSelf->cpu__DOT__PCSrcE))
                                ? 1U : 0U)));
        bufp->chgCData(oldp+27,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                          >> 7U))),5);
        bufp->chgCData(oldp+30,((0x7fU & vlSelf->cpu__DOT__InstrD)),7);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                                [(0x1fU & (vlSelf->cpu__DOT__InstrD 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                                [(0x1fU & (vlSelf->cpu__DOT__InstrD 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__alu__DOT__RD1E),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__alu__DOT__RD2E),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__alu__DOT__PCE),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__alu__DOT__PCPlus4E),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__alu__DOT__SrcAE),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__alu__DOT__SrcBE),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__alu__DOT__WriteDataE),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__alu__DOT__ExtImmE),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__alu__DOT__ALUResultM),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__alu__DOT__WriteDataM),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__alu__DOT__PCPlus4M),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                [(0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM)]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__alu__DOT__PCPlus4W),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__alu__DOT__ReadDataW),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__alu__DOT__ALUResultW),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__alu__DOT__ResultW),32);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                          >> 0xfU))),8);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                          >> 0x14U))),8);
        bufp->chgCData(oldp+51,(vlSelf->cpu__DOT__RdW),8);
        bufp->chgCData(oldp+52,((7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                       >> 2U))),3);
        bufp->chgIData(oldp+53,(((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                  [(0xffU & ((IData)(3U) 
                                             + vlSelf->cpu__DOT__PCF))] 
                                  << 0x18U) | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->cpu__DOT__PCF))] 
                                                << 0x10U) 
                                               | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                   [
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->cpu__DOT__PCF))] 
                                                   << 8U) 
                                                  | vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                  [
                                                  (0xffU 
                                                   & vlSelf->cpu__DOT__PCF)])))),32);
        bufp->chgBit(oldp+54,((1U & ((vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                      == vlSelf->cpu__DOT__alu__DOT__SrcBE) 
                                     ^ (IData)(vlSelf->cpu__DOT__control__DOT__funct3E)))));
        bufp->chgCData(oldp+55,((3U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+56,((3U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                       >> 8U))),2);
        bufp->chgCData(oldp+57,(vlSelf->cpu__DOT__control__DOT__ALUControlD),3);
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                     >> 5U))));
        bufp->chgBit(oldp+59,((1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                     >> 7U))));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                     >> 6U))));
        bufp->chgCData(oldp+61,((7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+62,(vlSelf->cpu__DOT__control__DOT__RegWriteE),3);
        bufp->chgCData(oldp+63,(vlSelf->cpu__DOT__control__DOT__ResultSrcE),2);
        bufp->chgCData(oldp+64,(vlSelf->cpu__DOT__control__DOT__MemWriteE),2);
        bufp->chgBit(oldp+65,(vlSelf->cpu__DOT__control__DOT__JumpE));
        bufp->chgBit(oldp+66,(vlSelf->cpu__DOT__control__DOT__BranchE));
        bufp->chgCData(oldp+67,(vlSelf->cpu__DOT__control__DOT__funct3E),3);
        bufp->chgCData(oldp+68,(vlSelf->cpu__DOT__control__DOT__ResultSrcM),2);
        bufp->chgCData(oldp+69,((7U & (vlSelf->cpu__DOT__InstrD 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+70,((1U & (vlSelf->cpu__DOT__InstrD 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+71,((3U & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))),2);
        bufp->chgBit(oldp+72,((1U & (vlSelf->cpu__DOT__InstrD 
                                     >> 5U))));
        bufp->chgBit(oldp+73,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelf->cpu__DOT__InstrD)))));
        bufp->chgSData(oldp+74,(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls),15);
        bufp->chgIData(oldp+75,(((0U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                  ? ((IData)(4U) + vlSelf->cpu__DOT__PCF)
                                  : ((1U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                      ? (vlSelf->cpu__DOT__alu__DOT__PCE 
                                         + vlSelf->cpu__DOT__alu__DOT__ExtImmE)
                                      : ((2U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                          ? vlSelf->cpu__DOT__ALUResultE
                                          : 0U)))),32);
    }
    bufp->chgBit(oldp+76,(vlSelf->clk));
    bufp->chgBit(oldp+77,(vlSelf->rst));
    bufp->chgIData(oldp+78,(vlSelf->a0),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
