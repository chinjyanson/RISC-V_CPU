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
            tracep->chgCData(oldp+1,(vlTOPp->cpu__DOT____Vcellout__control__MemWriteM_o),3);
            tracep->chgCData(oldp+2,(vlTOPp->cpu__DOT____Vcellout__control__ResultSrcW_o),3);
            tracep->chgCData(oldp+3,(vlTOPp->cpu__DOT__RdM),5);
            tracep->chgCData(oldp+4,(vlTOPp->cpu__DOT__RdW),5);
            tracep->chgCData(oldp+5,(vlTOPp->cpu__DOT____Vcellout__control__MemWriteM_o),2);
            tracep->chgCData(oldp+6,(vlTOPp->cpu__DOT____Vcellout__control__ResultSrcW_o),2);
            tracep->chgCData(oldp+7,(vlTOPp->cpu__DOT__control__DOT__RegWriteM),3);
            tracep->chgCData(oldp+8,(vlTOPp->cpu__DOT__control__DOT__ResultSrcM),2);
            tracep->chgIData(oldp+9,(vlTOPp->cpu__DOT__alu__DOT____Vcellout__EREG__ALUResultM),32);
            tracep->chgIData(oldp+10,(vlTOPp->cpu__DOT__alu__DOT__WriteDataM),32);
            tracep->chgIData(oldp+11,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4M),32);
            tracep->chgIData(oldp+12,(vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                      [(0xffU & (IData)(vlTOPp->cpu__DOT__alu__DOT____Vcellout__EREG__ALUResultM))]),32);
            tracep->chgIData(oldp+13,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4W),32);
            tracep->chgIData(oldp+14,(vlTOPp->cpu__DOT__alu__DOT__ReadDataW),32);
            tracep->chgIData(oldp+15,(vlTOPp->cpu__DOT__alu__DOT__ALUResultW),32);
            tracep->chgIData(oldp+16,(vlTOPp->cpu__DOT__alu__DOT__ResultW),32);
            tracep->chgCData(oldp+17,(vlTOPp->cpu__DOT__alu__DOT____Vcellout__EREG__ALUResultM),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+18,((((IData)(vlTOPp->cpu__DOT__RegwriteM) 
                                      | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW)))
                                      ? (((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                          == (IData)(vlTOPp->cpu__DOT__RdM))
                                          ? 0U : (((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                                   == (IData)(vlTOPp->cpu__DOT__RdW))
                                                   ? 1U
                                                   : 0U))
                                      : 0U)));
            tracep->chgBit(oldp+19,((((IData)(vlTOPp->cpu__DOT__RegwriteM) 
                                      | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW)))
                                      ? (((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                          == (IData)(vlTOPp->cpu__DOT__RdM))
                                          ? 0U : (((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                                   == (IData)(vlTOPp->cpu__DOT__RdW))
                                                   ? 1U
                                                   : 0U))
                                      : 0U)));
            tracep->chgCData(oldp+20,((((IData)(vlTOPp->cpu__DOT__RegwriteM) 
                                        | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW)))
                                        ? (((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                            == (IData)(vlTOPp->cpu__DOT__RdM))
                                            ? 0U : 
                                           (((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                             == (IData)(vlTOPp->cpu__DOT__RdW))
                                             ? 1U : 0U))
                                        : 0U)),2);
            tracep->chgCData(oldp+21,((((IData)(vlTOPp->cpu__DOT__RegwriteM) 
                                        | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW)))
                                        ? (((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                            == (IData)(vlTOPp->cpu__DOT__RdM))
                                            ? 0U : 
                                           (((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                             == (IData)(vlTOPp->cpu__DOT__RdW))
                                             ? 1U : 0U))
                                        : 0U)),2);
            tracep->chgCData(oldp+22,((((IData)(vlTOPp->cpu__DOT__RegwriteM) 
                                        | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW)))
                                        ? (((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                            == (IData)(vlTOPp->cpu__DOT__RdM))
                                            ? 2U : 
                                           (((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                             == (IData)(vlTOPp->cpu__DOT__RdW))
                                             ? 1U : 0U))
                                        : 0U)),2);
            tracep->chgCData(oldp+23,((((IData)(vlTOPp->cpu__DOT__RegwriteM) 
                                        | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW)))
                                        ? (((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                            == (IData)(vlTOPp->cpu__DOT__RdM))
                                            ? 2U : 
                                           (((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                             == (IData)(vlTOPp->cpu__DOT__RdW))
                                             ? 1U : 0U))
                                        : 0U)),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+24,(vlTOPp->cpu__DOT__ALUControlE),3);
            tracep->chgBit(oldp+25,(vlTOPp->cpu__DOT__ALUSrcE));
            tracep->chgIData(oldp+26,((vlTOPp->cpu__DOT__alu__DOT__PCE 
                                       + vlTOPp->cpu__DOT__alu__DOT__ExtImmE)),32);
            tracep->chgCData(oldp+27,(vlTOPp->cpu__DOT__Rs1E),5);
            tracep->chgCData(oldp+28,(vlTOPp->cpu__DOT__Rs2E),5);
            tracep->chgCData(oldp+29,(vlTOPp->cpu__DOT__RdE),5);
            tracep->chgBit(oldp+30,((1U & (IData)(vlTOPp->cpu__DOT____Vcellout__alu__opcodeE_o))));
            tracep->chgCData(oldp+31,(vlTOPp->cpu__DOT__control__DOT__RegWriteE),3);
            tracep->chgCData(oldp+32,(vlTOPp->cpu__DOT__control__DOT__ResultSrcE),2);
            tracep->chgCData(oldp+33,(vlTOPp->cpu__DOT__control__DOT__MemWriteE),2);
            tracep->chgBit(oldp+34,(vlTOPp->cpu__DOT__control__DOT__JumpE));
            tracep->chgBit(oldp+35,(vlTOPp->cpu__DOT__control__DOT__BranchE));
            tracep->chgCData(oldp+36,(vlTOPp->cpu__DOT__control__DOT__funct3E),3);
            tracep->chgCData(oldp+37,(vlTOPp->cpu__DOT____Vcellout__alu__opcodeE_o),7);
            tracep->chgIData(oldp+38,(vlTOPp->cpu__DOT__alu__DOT__RD1E),32);
            tracep->chgIData(oldp+39,(vlTOPp->cpu__DOT__alu__DOT__RD2E),32);
            tracep->chgIData(oldp+40,(vlTOPp->cpu__DOT__alu__DOT__PCE),32);
            tracep->chgIData(oldp+41,(vlTOPp->cpu__DOT__alu__DOT__PCPlus4E),32);
            tracep->chgIData(oldp+42,(vlTOPp->cpu__DOT__alu__DOT__SrcAE),32);
            tracep->chgIData(oldp+43,(vlTOPp->cpu__DOT__alu__DOT__SrcBE),32);
            tracep->chgIData(oldp+44,(vlTOPp->cpu__DOT__alu__DOT__WriteDataE),32);
            tracep->chgIData(oldp+45,(vlTOPp->cpu__DOT__alu__DOT__ExtImmE),32);
            tracep->chgBit(oldp+46,((vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                     == vlTOPp->cpu__DOT__alu__DOT__SrcBE)));
            tracep->chgBit(oldp+47,((1U & ((4U & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                            ? ((2U 
                                                & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                    ? vlTOPp->cpu__DOT__alu__DOT__SrcBE
                                                    : 
                                                   (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                    >> 
                                                    (0x1fU 
                                                     & vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                    ? 
                                                   (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                                    : 
                                                   (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                    ^ vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                            : ((2U 
                                                & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                    ? 
                                                   (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                    | vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                                    : 
                                                   (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                    & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                    ? 
                                                   (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                    - vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                                    : 
                                                   (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                    + vlTOPp->cpu__DOT__alu__DOT__SrcBE)))))));
            tracep->chgIData(oldp+48,(((4U & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                        ? ((2U & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                            ? ((1U 
                                                & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                ? vlTOPp->cpu__DOT__alu__DOT__SrcBE
                                                : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   >> 
                                                   (0x1fU 
                                                    & vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                            : ((1U 
                                                & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                ? (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                                : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   ^ vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                        : ((2U & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                            ? ((1U 
                                                & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                ? (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   | vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                                : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                            : ((1U 
                                                & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                ? (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   - vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                                : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   + vlTOPp->cpu__DOT__alu__DOT__SrcBE))))),32);
            tracep->chgCData(oldp+49,((1U & ((4U & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                   ? vlTOPp->cpu__DOT__alu__DOT__SrcBE
                                                   : 
                                                  (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   >> 
                                                   (0x1fU 
                                                    & vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                   ? 
                                                  (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                                   : 
                                                  (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   ^ vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                              : ((2U 
                                                  & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                   ? 
                                                  (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   | vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                                   : 
                                                  (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->cpu__DOT__ALUControl))
                                                   ? 
                                                  (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   - vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                                   : 
                                                  (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                   + vlTOPp->cpu__DOT__alu__DOT__SrcBE)))))),2);
            tracep->chgCData(oldp+50,((1U & (IData)(vlTOPp->cpu__DOT____Vcellout__alu__opcodeE_o))),7);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+51,(vlTOPp->cpu__DOT__InstrD),32);
            tracep->chgIData(oldp+52,(vlTOPp->cpu__DOT__ExtImmD),32);
            tracep->chgIData(oldp+53,(vlTOPp->cpu__DOT__PCD),32);
            tracep->chgIData(oldp+54,(vlTOPp->cpu__DOT__PCPlus4D),32);
            tracep->chgIData(oldp+55,(vlTOPp->cpu__DOT__PCF),32);
            tracep->chgIData(oldp+56,(((IData)(4U) 
                                       + vlTOPp->cpu__DOT__PCF)),32);
            tracep->chgCData(oldp+57,((7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 2U))),3);
            tracep->chgIData(oldp+58,(((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
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
            tracep->chgBit(oldp+59,((1U & ((IData)(vlTOPp->cpu__DOT__ZeroE) 
                                           ^ (vlTOPp->cpu__DOT__InstrD 
                                              >> 0xcU)))));
            tracep->chgCData(oldp+60,((3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 0xaU))),2);
            tracep->chgCData(oldp+61,((3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 8U))),2);
            tracep->chgCData(oldp+62,(vlTOPp->cpu__DOT__control__DOT__ALUControlD),3);
            tracep->chgBit(oldp+63,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                           >> 5U))));
            tracep->chgBit(oldp+64,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                           >> 7U))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                           >> 6U))));
            tracep->chgCData(oldp+66,((7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                             >> 0xcU))),3);
            tracep->chgIData(oldp+67,((0x7fU & vlTOPp->cpu__DOT__InstrD)),32);
            tracep->chgCData(oldp+68,((7U & (vlTOPp->cpu__DOT__InstrD 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+69,((1U & (vlTOPp->cpu__DOT__InstrD 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+70,((3U & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))),2);
            tracep->chgCData(oldp+71,((0x7fU & vlTOPp->cpu__DOT__InstrD)),7);
            tracep->chgSData(oldp+72,(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls),15);
            tracep->chgBit(oldp+73,((1U & (vlTOPp->cpu__DOT__InstrD 
                                           >> 5U))));
            tracep->chgBit(oldp+74,((1U & ((vlTOPp->cpu__DOT__InstrD 
                                            >> 0x1eU) 
                                           & (vlTOPp->cpu__DOT__InstrD 
                                              >> 5U)))));
            tracep->chgIData(oldp+75,((0x1ffffffU & vlTOPp->cpu__DOT__InstrD)),25);
            tracep->chgCData(oldp+76,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+77,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+78,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 7U))),5);
            tracep->chgIData(oldp+79,(vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                      [(0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0xfU))]),32);
            tracep->chgIData(oldp+80,(vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                      [(0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0x14U))]),32);
            tracep->chgCData(oldp+81,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0xfU))),8);
            tracep->chgCData(oldp+82,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U))),8);
            tracep->chgCData(oldp+83,((0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 7U))),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+84,(vlTOPp->cpu__DOT__PCSrcE),2);
            tracep->chgBit(oldp+85,(((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+86,(vlTOPp->cpu__DOT__Drst));
        }
        tracep->chgBit(oldp+87,(vlTOPp->clk));
        tracep->chgBit(oldp+88,(vlTOPp->rst));
        tracep->chgIData(oldp+89,(vlTOPp->a0),32);
        tracep->chgIData(oldp+90,(((0U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                    ? ((IData)(4U) 
                                       + vlTOPp->cpu__DOT__PCF)
                                    : ((1U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                        ? vlTOPp->cpu__DOT__pc__DOT__PCTarget
                                        : ((2U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                            ? vlTOPp->cpu__DOT__ALUResultE
                                            : 0U)))),32);
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
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}
