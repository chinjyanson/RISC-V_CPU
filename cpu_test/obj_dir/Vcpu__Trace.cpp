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
            tracep->chgBit(oldp+0,(((0x13U == (0x7fU 
                                               & vlTOPp->cpu__DOT__Instr)) 
                                    | (0x63U != (0x7fU 
                                                 & vlTOPp->cpu__DOT__Instr)))));
            tracep->chgBit(oldp+1,(((0x13U != (0x7fU 
                                               & vlTOPp->cpu__DOT__Instr)) 
                                    & ((0x63U == (0x7fU 
                                                  & vlTOPp->cpu__DOT__Instr)) 
                                       & (vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                          != vlTOPp->cpu__DOT__Myred__DOT__ALUop2)))));
            tracep->chgIData(oldp+2,(vlTOPp->cpu__DOT__ImmOp),32);
            tracep->chgIData(oldp+3,(vlTOPp->cpu__DOT__Instr),32);
            tracep->chgBit(oldp+4,((vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                    == vlTOPp->cpu__DOT__Myred__DOT__ALUop2)));
            tracep->chgIData(oldp+5,(vlTOPp->cpu__DOT__PC),32);
            tracep->chgIData(oldp+6,(vlTOPp->cpu__DOT__Myblue__DOT__next_PC),32);
            tracep->chgIData(oldp+7,(vlTOPp->cpu__DOT__Myblue__DOT__pc),32);
            tracep->chgCData(oldp+8,(vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc),2);
            tracep->chgCData(oldp+9,((0x7fU & vlTOPp->cpu__DOT__Instr)),7);
            tracep->chgIData(oldp+10,((vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                       + vlTOPp->cpu__DOT__Myred__DOT__ALUop2)),32);
            tracep->chgIData(oldp+11,(vlTOPp->cpu__DOT__Myred__DOT__ALUop1),32);
            tracep->chgIData(oldp+12,(vlTOPp->cpu__DOT__Myred__DOT__ALUop2),32);
            tracep->chgIData(oldp+13,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
                                      [(0x1fU & (vlTOPp->cpu__DOT__Instr 
                                                 >> 0x14U))]),32);
            tracep->chgCData(oldp+14,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+15,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+16,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                                >> 7U))),5);
            tracep->chgIData(oldp+17,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[0]),32);
            tracep->chgIData(oldp+18,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[1]),32);
            tracep->chgIData(oldp+19,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[2]),32);
            tracep->chgIData(oldp+20,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[3]),32);
            tracep->chgIData(oldp+21,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[4]),32);
            tracep->chgIData(oldp+22,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[5]),32);
            tracep->chgIData(oldp+23,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[6]),32);
            tracep->chgIData(oldp+24,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[7]),32);
            tracep->chgIData(oldp+25,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[8]),32);
            tracep->chgIData(oldp+26,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[9]),32);
            tracep->chgIData(oldp+27,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[10]),32);
            tracep->chgIData(oldp+28,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[11]),32);
            tracep->chgIData(oldp+29,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[12]),32);
            tracep->chgIData(oldp+30,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[13]),32);
            tracep->chgIData(oldp+31,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[14]),32);
            tracep->chgIData(oldp+32,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[15]),32);
            tracep->chgIData(oldp+33,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[16]),32);
            tracep->chgIData(oldp+34,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[17]),32);
            tracep->chgIData(oldp+35,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[18]),32);
            tracep->chgIData(oldp+36,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[19]),32);
            tracep->chgIData(oldp+37,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[20]),32);
            tracep->chgIData(oldp+38,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[21]),32);
            tracep->chgIData(oldp+39,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[22]),32);
            tracep->chgIData(oldp+40,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[23]),32);
            tracep->chgIData(oldp+41,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[24]),32);
            tracep->chgIData(oldp+42,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[25]),32);
            tracep->chgIData(oldp+43,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[26]),32);
            tracep->chgIData(oldp+44,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[27]),32);
            tracep->chgIData(oldp+45,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[28]),32);
            tracep->chgIData(oldp+46,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[29]),32);
            tracep->chgIData(oldp+47,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[30]),32);
            tracep->chgIData(oldp+48,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[31]),32);
        }
        tracep->chgBit(oldp+49,(vlTOPp->clk));
        tracep->chgBit(oldp+50,(vlTOPp->rst));
        tracep->chgIData(oldp+51,(vlTOPp->a0),32);
        tracep->chgIData(oldp+52,(vlTOPp->instr2),32);
        tracep->chgCData(oldp+53,(vlTOPp->aluctrl2),3);
        tracep->chgIData(oldp+54,(vlTOPp->pc2),32);
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
