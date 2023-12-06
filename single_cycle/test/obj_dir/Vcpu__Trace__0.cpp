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
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__Instr),32);
        bufp->chgCData(oldp+1,((0xffU & vlSelf->cpu__DOT____Vcellout__pc__pc_out)),8);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC)),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__alu__DOT__SrcA),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__alu__DOT__regOp2),32);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                         >> 0x14U))),8);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                         >> 0xfU))),8);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                         >> 7U))),8);
        bufp->chgCData(oldp+8,((0x7fU & vlSelf->cpu__DOT__Instr)),7);
        bufp->chgCData(oldp+9,((7U & (vlSelf->cpu__DOT__Instr 
                                      >> 0xcU))),3);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT____Vcellout__pc__pc_out),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__pc__DOT__PC),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+12,(vlSelf->cpu__DOT__RegWrite));
        bufp->chgBit(oldp+13,(vlSelf->cpu__DOT__MemWrite));
        bufp->chgCData(oldp+14,(vlSelf->cpu__DOT__ALUctrl),3);
        bufp->chgBit(oldp+15,(vlSelf->cpu__DOT__ALUsrc));
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__ALUResult_o),32);
        bufp->chgCData(oldp+17,(vlSelf->cpu__DOT__Resultsrc),2);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__ImmOp),32);
        bufp->chgCData(oldp+19,(vlSelf->cpu__DOT__PCsrc),2);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__alu__DOT__SrcB),32);
        bufp->chgCData(oldp+21,((0xffU & vlSelf->cpu__DOT__ALUResult_o)),8);
        bufp->chgCData(oldp+22,(vlSelf->cpu__DOT__control__DOT__ImmSrc),2);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__pc__DOT__next_PC),32);
    }
    bufp->chgBit(oldp+24,(vlSelf->clk));
    bufp->chgBit(oldp+25,(vlSelf->rst));
    bufp->chgIData(oldp+26,(vlSelf->a0),32);
    bufp->chgBit(oldp+27,((vlSelf->cpu__DOT__alu__DOT__SrcA 
                           == vlSelf->cpu__DOT__alu__DOT__SrcB)));
    bufp->chgIData(oldp+28,(((2U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                              ? ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                  ? vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3
                                  : ((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC))
                              : ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                  ? vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                 [(0xffU & vlSelf->cpu__DOT__ALUResult_o)]
                                  : vlSelf->cpu__DOT__ALUResult_o))),32);
    bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                            [(0xffU & vlSelf->cpu__DOT__ALUResult_o)]),32);
    bufp->chgIData(oldp+30,((vlSelf->cpu__DOT__pc__DOT__PC 
                             + vlSelf->cpu__DOT__ImmOp)),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
