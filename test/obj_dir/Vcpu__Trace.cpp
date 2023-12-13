// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vcpu::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->cpu__DOT__RegWrite),3);
            tracep->chgCData(oldp+1,(vlTOPp->cpu__DOT__MemWrite),2);
            tracep->chgIData(oldp+2,(vlTOPp->cpu__DOT__Instr),32);
            tracep->chgCData(oldp+3,(vlTOPp->cpu__DOT__ALUctrl),3);
            tracep->chgBit(oldp+4,((1U & ((0x40U & vlTOPp->cpu__DOT__Instr)
                                           ? ((~ (vlTOPp->cpu__DOT__Instr 
                                                  >> 5U)) 
                                              | ((vlTOPp->cpu__DOT__Instr 
                                                  >> 4U) 
                                                 | ((vlTOPp->cpu__DOT__Instr 
                                                     >> 3U) 
                                                    | ((vlTOPp->cpu__DOT__Instr 
                                                        >> 2U) 
                                                       | ((~ 
                                                           (vlTOPp->cpu__DOT__Instr 
                                                            >> 1U)) 
                                                          | (~ vlTOPp->cpu__DOT__Instr))))))
                                           : ((~ (vlTOPp->cpu__DOT__Instr 
                                                  >> 5U)) 
                                              | ((~ 
                                                  (vlTOPp->cpu__DOT__Instr 
                                                   >> 4U)) 
                                                 | ((vlTOPp->cpu__DOT__Instr 
                                                     >> 3U) 
                                                    | ((vlTOPp->cpu__DOT__Instr 
                                                        >> 2U) 
                                                       | ((~ 
                                                           (vlTOPp->cpu__DOT__Instr 
                                                            >> 1U)) 
                                                          | (~ vlTOPp->cpu__DOT__Instr))))))))));
            tracep->chgBit(oldp+5,(vlTOPp->cpu__DOT__Zero));
            tracep->chgIData(oldp+6,(vlTOPp->cpu__DOT__ALUResult_o),32);
            tracep->chgCData(oldp+7,(vlTOPp->cpu__DOT__Resultsrc),2);
            tracep->chgIData(oldp+8,(vlTOPp->cpu__DOT__ImmOp),32);
            tracep->chgCData(oldp+9,(vlTOPp->cpu__DOT__PCsrc),2);
            tracep->chgIData(oldp+10,(vlTOPp->cpu__DOT__PC),32);
            tracep->chgIData(oldp+11,(((IData)(4U) 
                                       + vlTOPp->cpu__DOT__pc__DOT__PC)),32);
            tracep->chgIData(oldp+12,(vlTOPp->cpu__DOT__pc__DOT__next_PC),32);
            tracep->chgIData(oldp+13,(vlTOPp->cpu__DOT__pc__DOT__PC),32);
            tracep->chgIData(oldp+14,((vlTOPp->cpu__DOT__pc__DOT__PC 
                                       + vlTOPp->cpu__DOT__ImmOp)),32);
            tracep->chgCData(oldp+15,(vlTOPp->cpu__DOT__control__DOT__ImmSrc),3);
            tracep->chgCData(oldp+16,((0x7fU & vlTOPp->cpu__DOT__Instr)),7);
            tracep->chgCData(oldp+17,((7U & (vlTOPp->cpu__DOT__Instr 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+18,((1U & (vlTOPp->cpu__DOT__Instr 
                                           >> 0x1eU))));
            tracep->chgIData(oldp+19,(vlTOPp->cpu__DOT__alu__DOT__SrcA),32);
            tracep->chgIData(oldp+20,(vlTOPp->cpu__DOT__alu__DOT__SrcB),32);
            tracep->chgIData(oldp+21,(vlTOPp->cpu__DOT__alu__DOT__Result),32);
            tracep->chgIData(oldp+22,(vlTOPp->cpu__DOT__alu__DOT__regOp2),32);
            tracep->chgIData(oldp+23,(((vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                        [(0x7ffffU 
                                          & ((IData)(3U) 
                                             + (0xffffcU 
                                                & (vlTOPp->cpu__DOT__ALUResult_o 
                                                   << 2U))))] 
                                        << 0x18U) | 
                                       ((vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                         [(0x7ffffU 
                                           & ((IData)(2U) 
                                              + (0xffffcU 
                                                 & (vlTOPp->cpu__DOT__ALUResult_o 
                                                    << 2U))))] 
                                         << 0x10U) 
                                        | ((vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                            [(0x7ffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0xffffcU 
                                                  & (vlTOPp->cpu__DOT__ALUResult_o 
                                                     << 2U))))] 
                                            << 8U) 
                                           | vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                           [(0x7fffcU 
                                             & (vlTOPp->cpu__DOT__ALUResult_o 
                                                << 2U))])))),32);
            tracep->chgCData(oldp+24,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                                >> 0x14U))),8);
            tracep->chgCData(oldp+25,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                                >> 0xfU))),8);
            tracep->chgCData(oldp+26,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                                >> 7U))),8);
            tracep->chgIData(oldp+27,((0xffffcU & (vlTOPp->cpu__DOT__ALUResult_o 
                                                   << 2U))),20);
            tracep->chgSData(oldp+28,((0xffffU & vlTOPp->cpu__DOT__alu__DOT__regOp2)),16);
            tracep->chgCData(oldp+29,((0xffU & vlTOPp->cpu__DOT__alu__DOT__regOp2)),8);
        }
        tracep->chgBit(oldp+30,(vlTOPp->clk));
        tracep->chgBit(oldp+31,(vlTOPp->rst));
        tracep->chgIData(oldp+32,(vlTOPp->test),32);
        tracep->chgIData(oldp+33,(vlTOPp->a0),32);
    }
}

void Vcpu::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
