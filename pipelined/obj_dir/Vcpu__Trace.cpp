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
            tracep->chgCData(oldp+0,(vlTOPp->cpu__DOT__RegWriteW),3);
            tracep->chgCData(oldp+1,(vlTOPp->cpu__DOT__RegWriteM),3);
            tracep->chgCData(oldp+2,(vlTOPp->cpu__DOT__MemWriteM),2);
            tracep->chgCData(oldp+3,(vlTOPp->cpu__DOT__ResultSrcW),2);
            tracep->chgCData(oldp+4,(vlTOPp->cpu__DOT__ALUControlE),3);
            tracep->chgBit(oldp+5,(vlTOPp->cpu__DOT__ALUSrcE));
            tracep->chgIData(oldp+6,(vlTOPp->cpu__DOT__InstrD),32);
            tracep->chgIData(oldp+7,(vlTOPp->cpu__DOT__ExtImmD),32);
            tracep->chgIData(oldp+8,(vlTOPp->cpu__DOT__PCD),32);
            tracep->chgIData(oldp+9,(vlTOPp->cpu__DOT__PCPlus4D),32);
            tracep->chgIData(oldp+10,(vlTOPp->cpu__DOT__ALUResultE),32);
            tracep->chgIData(oldp+11,((vlTOPp->cpu__DOT__alu__DOT__PCE 
                                       + vlTOPp->cpu__DOT__alu__DOT__ExtImmE)),32);
            tracep->chgCData(oldp+12,(vlTOPp->cpu__DOT__PCSrcE),2);
            tracep->chgCData(oldp+13,(vlTOPp->cpu__DOT__Rs1E),5);
            tracep->chgCData(oldp+14,(vlTOPp->cpu__DOT__Rs2E),5);
            tracep->chgCData(oldp+15,(vlTOPp->cpu__DOT__RdM),5);
            tracep->chgCData(oldp+16,(vlTOPp->cpu__DOT__RdW),5);
            tracep->chgCData(oldp+17,(vlTOPp->cpu__DOT__RdE),5);
            tracep->chgCData(oldp+18,(vlTOPp->cpu__DOT__OpcodeE),7);
            tracep->chgBit(oldp+19,((vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                     == vlTOPp->cpu__DOT__alu__DOT__SrcBE)));
            tracep->chgIData(oldp+20,(vlTOPp->cpu__DOT__PCF),32);
            tracep->chgIData(oldp+21,(((IData)(4U) 
                                       + vlTOPp->cpu__DOT__PCF)),32);
            tracep->chgBit(oldp+22,(vlTOPp->cpu__DOT__Fen));
            tracep->chgBit(oldp+23,((((3U == (IData)(vlTOPp->cpu__DOT__OpcodeE)) 
                                      & (((IData)(vlTOPp->cpu__DOT__RdE) 
                                          == (0x1fU 
                                              & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0xfU))) 
                                         | ((IData)(vlTOPp->cpu__DOT__RdE) 
                                            == (0x1fU 
                                                & (vlTOPp->cpu__DOT__InstrD 
                                                   >> 0x14U)))))
                                      ? 0U : 1U)));
            tracep->chgCData(oldp+24,(vlTOPp->cpu__DOT__FowardAE),2);
            tracep->chgCData(oldp+25,(vlTOPp->cpu__DOT__FowardBE),2);
            tracep->chgBit(oldp+26,(((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                      ? 1U : 0U)));
            tracep->chgIData(oldp+27,(((0U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                        ? ((IData)(4U) 
                                           + vlTOPp->cpu__DOT__PCF)
                                        : ((1U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                            ? (vlTOPp->cpu__DOT__alu__DOT__PCE 
                                               + vlTOPp->cpu__DOT__alu__DOT__ExtImmE)
                                            : ((2U 
                                                == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                ? vlTOPp->cpu__DOT__ALUResultE
                                                : 0U)))),32);
            tracep->chgCData(oldp+28,((7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 2U))),3);
            tracep->chgIData(oldp+29,(((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                        [(0xffU & ((IData)(3U) 
                                                   + vlTOPp->cpu__DOT__PCF))] 
                                        << 0x18U) | 
                                       ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                         [(0xffU & 
                                           ((IData)(2U) 
                                            + vlTOPp->cpu__DOT__PCF))] 
                                         << 0x10U) 
                                        | ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                            [(0xffU 
                                              & ((IData)(1U) 
                                                 + vlTOPp->cpu__DOT__PCF))] 
                                            << 8U) 
                                           | vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                           [(0xffU 
                                             & vlTOPp->cpu__DOT__PCF)])))),32);
            tracep->chgBit(oldp+30,((1U & ((vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                            == vlTOPp->cpu__DOT__alu__DOT__SrcBE) 
                                           ^ (IData)(vlTOPp->cpu__DOT__control__DOT__funct3E)))));
            tracep->chgCData(oldp+31,((3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 0xaU))),2);
            tracep->chgCData(oldp+32,((3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 8U))),2);
            tracep->chgCData(oldp+33,(vlTOPp->cpu__DOT__control__DOT__ALUControlD),3);
            tracep->chgBit(oldp+34,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                           >> 5U))));
            tracep->chgBit(oldp+35,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                           >> 7U))));
            tracep->chgBit(oldp+36,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                           >> 6U))));
            tracep->chgCData(oldp+37,((7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+38,(vlTOPp->cpu__DOT__control__DOT__RegWriteE),3);
            tracep->chgCData(oldp+39,(vlTOPp->cpu__DOT__control__DOT__ResultSrcE),2);
            tracep->chgCData(oldp+40,(vlTOPp->cpu__DOT__control__DOT__MemWriteE),2);
            tracep->chgBit(oldp+41,(vlTOPp->cpu__DOT__control__DOT__JumpE));
            tracep->chgBit(oldp+42,(vlTOPp->cpu__DOT__control__DOT__BranchE));
            tracep->chgCData(oldp+43,(vlTOPp->cpu__DOT__control__DOT__funct3E),3);
            tracep->chgCData(oldp+44,(vlTOPp->cpu__DOT__control__DOT__ResultSrcM),2);
            tracep->chgCData(oldp+45,((0x7fU & vlTOPp->cpu__DOT__InstrD)),7);
            tracep->chgCData(oldp+46,((7U & (vlTOPp->cpu__DOT__InstrD 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+47,((1U & (vlTOPp->cpu__DOT__InstrD 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+48,((3U & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))),2);
            tracep->chgSData(oldp+49,(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls),15);
            tracep->chgBit(oldp+50,((1U & (vlTOPp->cpu__DOT__InstrD 
                                           >> 5U))));
            tracep->chgBit(oldp+51,((1U & ((vlTOPp->cpu__DOT__InstrD 
                                            >> 0x1eU) 
                                           & (vlTOPp->cpu__DOT__InstrD 
                                              >> 5U)))));
            tracep->chgCData(oldp+52,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+53,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+54,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 7U))),5);
            tracep->chgIData(oldp+55,(vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                      [(0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0xfU))]),32);
            tracep->chgIData(oldp+56,(vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                      [(0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0x14U))]),32);
            tracep->chgIData(oldp+57,(vlTOPp->cpu__DOT__alu__DOT__RD1E),32);
            tracep->chgIData(oldp+58,(vlTOPp->cpu__DOT__alu__DOT__RD2E),32);
            tracep->chgIData(oldp+59,(vlTOPp->cpu__DOT__alu__DOT__PCE),32);
            tracep->chgIData(oldp+60,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4E),32);
            tracep->chgIData(oldp+61,(vlTOPp->cpu__DOT__alu__DOT__SrcAE),32);
            tracep->chgIData(oldp+62,(vlTOPp->cpu__DOT__alu__DOT__SrcBE),32);
            tracep->chgIData(oldp+63,(vlTOPp->cpu__DOT__alu__DOT__WriteDataE),32);
            tracep->chgIData(oldp+64,(vlTOPp->cpu__DOT__alu__DOT__ExtImmE),32);
            tracep->chgIData(oldp+65,(vlTOPp->cpu__DOT__alu__DOT__ALUResultM),32);
            tracep->chgIData(oldp+66,(vlTOPp->cpu__DOT__alu__DOT__WriteDataM),32);
            tracep->chgIData(oldp+67,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4M),32);
            tracep->chgIData(oldp+68,(vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                      [(0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM)]),32);
            tracep->chgIData(oldp+69,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4W),32);
            tracep->chgIData(oldp+70,(vlTOPp->cpu__DOT__alu__DOT__ReadDataW),32);
            tracep->chgIData(oldp+71,(vlTOPp->cpu__DOT__alu__DOT__ALUResultW),32);
            tracep->chgIData(oldp+72,(vlTOPp->cpu__DOT__alu__DOT__ResultW),32);
            tracep->chgCData(oldp+73,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0xfU))),8);
            tracep->chgCData(oldp+74,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U))),8);
            tracep->chgCData(oldp+75,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 7U))),8);
        }
        tracep->chgBit(oldp+76,(vlTOPp->clk));
        tracep->chgBit(oldp+77,(vlTOPp->rst));
        tracep->chgIData(oldp+78,(vlTOPp->a0),32);
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
