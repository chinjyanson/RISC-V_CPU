// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu.h"
#include "Vcpu__Syms.h"

//==========

void Vcpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu::eval\n"); );
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("cpu.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcpu::_eval_initial_loop(Vcpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("cpu.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcpu::_sequent__TOP__1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_sequent__TOP__1\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    SData/*15:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    IData/*31:0*/ __Vdly__cpu__DOT__PCF;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    // Body
    __Vdly__cpu__DOT__PCF = vlTOPp->cpu__DOT__PCF;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 = 0U;
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__ALUControlE = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                           ? 1U : 0U)
                                          ? 0U : (7U 
                                                  & (IData)(vlTOPp->cpu__DOT__control__DOT__ALUControlD)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__control__DOT__BranchE = (
                                                   ((0U 
                                                     != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                     ? 1U
                                                     : 0U)
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                                       >> 6U)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__control__DOT__JumpE = (((0U 
                                                   != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                   ? 1U
                                                   : 0U)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                                     >> 7U)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__alu__DOT__PCE = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                             ? 1U : 0U)
                                            ? 0U : vlTOPp->cpu__DOT__PCD);
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__alu__DOT__ExtImmE = (((0U 
                                                 != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                 ? 1U
                                                 : 0U)
                                                ? 0U
                                                : vlTOPp->cpu__DOT__ExtImmD);
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__control__DOT__funct3E = (
                                                   ((0U 
                                                     != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                     ? 1U
                                                     : 0U)
                                                    ? 0U
                                                    : 
                                                   (7U 
                                                    & (vlTOPp->cpu__DOT__InstrD 
                                                       >> 0xcU)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__ALUSrcE = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                       ? 1U : 0U) ? 0U
                                      : (1U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                               >> 5U)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__alu__DOT__RD1E = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                              ? 1U : 0U)
                                             ? 0U : 
                                            vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                            [(0x1fU 
                                              & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0xfU))]);
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__Rs1E = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                    ? 1U : 0U) ? 0U
                                   : (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                               >> 0xfU)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__alu__DOT__RD2E = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                              ? 1U : 0U)
                                             ? 0U : 
                                            vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                            [(0x1fU 
                                              & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0x14U))]);
    }
    if (vlTOPp->cpu__DOT__PCrst) {
        __Vdly__cpu__DOT__PCF = 0U;
    } else {
        if ((((3U == (IData)(vlTOPp->cpu__DOT__OpcodeE)) 
              & (((IData)(vlTOPp->cpu__DOT__RdE) == 
                  (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                            >> 0xfU))) | ((IData)(vlTOPp->cpu__DOT__RdE) 
                                          == (0x1fU 
                                              & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0x14U)))))
              ? 0U : 1U)) {
            __Vdly__cpu__DOT__PCF = vlTOPp->cpu__DOT__pc__DOT__next_PC;
        }
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__Rs2E = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                    ? 1U : 0U) ? 0U
                                   : (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                               >> 0x14U)));
    }
    vlTOPp->cpu__DOT__ResultSrcW = vlTOPp->cpu__DOT__control__DOT__ResultSrcM;
    vlTOPp->cpu__DOT__alu__DOT__PCPlus4W = vlTOPp->cpu__DOT__alu__DOT__PCPlus4M;
    vlTOPp->cpu__DOT__alu__DOT__ALUResultW = vlTOPp->cpu__DOT__alu__DOT__ALUResultM;
    vlTOPp->cpu__DOT__alu__DOT__ReadDataW = vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
        [(0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM)];
    if ((1U == (IData)(vlTOPp->cpu__DOT__MemWriteM))) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = vlTOPp->cpu__DOT__alu__DOT__WriteDataM;
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = (0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM);
    } else {
        if ((2U == (IData)(vlTOPp->cpu__DOT__MemWriteM))) {
            __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 
                = (0xffffU & vlTOPp->cpu__DOT__alu__DOT__WriteDataM);
            __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 1U;
            __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 0U;
            __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 
                = (0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM);
        } else {
            if ((3U == (IData)(vlTOPp->cpu__DOT__MemWriteM))) {
                __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 
                    = (0xffU & vlTOPp->cpu__DOT__alu__DOT__WriteDataM);
                __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 1U;
                __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 0U;
                __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 
                    = (0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM);
            } else {
                __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 
                    = vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                    [(0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM)];
                __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 = 1U;
                __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 
                    = (0xffU & vlTOPp->cpu__DOT__alu__DOT__ALUResultM);
            }
        }
    }
    __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
        = ((4U & (IData)(vlTOPp->cpu__DOT__RegWriteW))
            ? ((2U & (IData)(vlTOPp->cpu__DOT__RegWriteW))
                ? ((1U & (IData)(vlTOPp->cpu__DOT__RegWriteW))
                    ? (0xffU & vlTOPp->cpu__DOT__alu__DOT__ResultW)
                    : (0xffffU & vlTOPp->cpu__DOT__alu__DOT__ResultW))
                : vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
               [vlTOPp->cpu__DOT__RdW]) : ((2U & (IData)(vlTOPp->cpu__DOT__RegWriteW))
                                            ? ((1U 
                                                & (IData)(vlTOPp->cpu__DOT__RegWriteW))
                                                ? (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->cpu__DOT__alu__DOT__ResultW 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & vlTOPp->cpu__DOT__alu__DOT__ResultW))
                                                : (
                                                   (0xffff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->cpu__DOT__alu__DOT__ResultW 
                                                                      >> 0xfU)))) 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & vlTOPp->cpu__DOT__alu__DOT__ResultW)))
                                            : ((1U 
                                                & (IData)(vlTOPp->cpu__DOT__RegWriteW))
                                                ? vlTOPp->cpu__DOT__alu__DOT__ResultW
                                                : vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
                                               [vlTOPp->cpu__DOT__RdW])));
    __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
        = vlTOPp->cpu__DOT__RdW;
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0) {
        vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0] 
            = __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1) {
        vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1))) 
                & vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                [__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1]) 
               | ((IData)(__Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1) 
                  << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1)));
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2) {
        vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2))) 
                & vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                [__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2]) 
               | ((IData)(__Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2) 
                  << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2)));
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3) {
        vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3] 
            = __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    }
    vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array[__Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0] 
        = __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__PCD = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                   ? 1U : 0U) ? 0U : vlTOPp->cpu__DOT__PCF);
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__OpcodeE = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                       ? 1U : 0U) ? 0U
                                      : (0x7fU & vlTOPp->cpu__DOT__InstrD));
    }
    vlTOPp->cpu__DOT__control__DOT__ResultSrcM = vlTOPp->cpu__DOT__control__DOT__ResultSrcE;
    vlTOPp->cpu__DOT__alu__DOT__PCPlus4M = vlTOPp->cpu__DOT__alu__DOT__PCPlus4E;
    vlTOPp->cpu__DOT__alu__DOT__ResultW = ((0U == (IData)(vlTOPp->cpu__DOT__ResultSrcW))
                                            ? vlTOPp->cpu__DOT__alu__DOT__ALUResultW
                                            : ((1U 
                                                == (IData)(vlTOPp->cpu__DOT__ResultSrcW))
                                                ? vlTOPp->cpu__DOT__alu__DOT__ReadDataW
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->cpu__DOT__ResultSrcW))
                                                    ? vlTOPp->cpu__DOT__alu__DOT__PCPlus4W
                                                    : 0U)));
    vlTOPp->cpu__DOT__MemWriteM = vlTOPp->cpu__DOT__control__DOT__MemWriteE;
    vlTOPp->cpu__DOT__alu__DOT__WriteDataM = vlTOPp->cpu__DOT__alu__DOT__WriteDataE;
    vlTOPp->cpu__DOT__alu__DOT__ALUResultM = vlTOPp->cpu__DOT__ALUResultE;
    vlTOPp->a0 = vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
        [0xbU];
    vlTOPp->cpu__DOT__RegWriteW = vlTOPp->cpu__DOT__RegWriteM;
    vlTOPp->cpu__DOT__RdW = vlTOPp->cpu__DOT__RdM;
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__control__DOT__ResultSrcE 
            = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                 ? 1U : 0U) ? 0U : (3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                          >> 0xaU)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__alu__DOT__PCPlus4E = (((0U 
                                                  != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                  ? 1U
                                                  : 0U)
                                                 ? 0U
                                                 : vlTOPp->cpu__DOT__PCPlus4D);
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__control__DOT__MemWriteE = 
            (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
               ? 1U : 0U) ? 0U : (3U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                        >> 8U)));
    }
    vlTOPp->cpu__DOT__RegWriteM = vlTOPp->cpu__DOT__control__DOT__RegWriteE;
    vlTOPp->cpu__DOT__RdM = vlTOPp->cpu__DOT__RdE;
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__PCPlus4D = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                        ? 1U : 0U) ? 0U
                                       : ((IData)(4U) 
                                          + vlTOPp->cpu__DOT__PCF));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__control__DOT__RegWriteE = 
            (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
               ? 1U : 0U) ? 0U : (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                        >> 0xcU)));
    }
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__RdE = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                   ? 1U : 0U) ? 0U : 
                                 (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                           >> 7U)));
    }
    if (((0U != (IData)(vlTOPp->cpu__DOT__RegWriteM)) 
         | (0U != (IData)(vlTOPp->cpu__DOT__RegWriteW)))) {
        vlTOPp->cpu__DOT__FowardAE = ((((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                        == (IData)(vlTOPp->cpu__DOT__RdM)) 
                                       & (0U != (IData)(vlTOPp->cpu__DOT__Rs1E)))
                                       ? 2U : ((((IData)(vlTOPp->cpu__DOT__Rs1E) 
                                                 == (IData)(vlTOPp->cpu__DOT__RdW)) 
                                                & (0U 
                                                   != (IData)(vlTOPp->cpu__DOT__Rs1E)))
                                                ? 1U
                                                : 0U));
        vlTOPp->cpu__DOT__FowardBE = ((((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                        == (IData)(vlTOPp->cpu__DOT__RdM)) 
                                       & (0U != (IData)(vlTOPp->cpu__DOT__Rs2E)))
                                       ? 2U : ((((IData)(vlTOPp->cpu__DOT__Rs2E) 
                                                 == (IData)(vlTOPp->cpu__DOT__RdW)) 
                                                & (0U 
                                                   != (IData)(vlTOPp->cpu__DOT__Rs2E)))
                                                ? 1U
                                                : 0U));
    } else {
        vlTOPp->cpu__DOT__FowardAE = 0U;
        vlTOPp->cpu__DOT__FowardBE = 0U;
    }
    vlTOPp->cpu__DOT__alu__DOT__SrcAE = ((0U == (IData)(vlTOPp->cpu__DOT__FowardAE))
                                          ? vlTOPp->cpu__DOT__alu__DOT__RD1E
                                          : ((1U == (IData)(vlTOPp->cpu__DOT__FowardAE))
                                              ? vlTOPp->cpu__DOT__alu__DOT__ResultW
                                              : ((2U 
                                                  == (IData)(vlTOPp->cpu__DOT__FowardAE))
                                                  ? vlTOPp->cpu__DOT__alu__DOT__ALUResultM
                                                  : 0U)));
    vlTOPp->cpu__DOT__alu__DOT__WriteDataE = ((0U == (IData)(vlTOPp->cpu__DOT__FowardBE))
                                               ? vlTOPp->cpu__DOT__alu__DOT__RD2E
                                               : ((1U 
                                                   == (IData)(vlTOPp->cpu__DOT__FowardBE))
                                                   ? vlTOPp->cpu__DOT__alu__DOT__ResultW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->cpu__DOT__FowardBE))
                                                    ? vlTOPp->cpu__DOT__alu__DOT__ALUResultM
                                                    : 0U)));
    if (vlTOPp->cpu__DOT__Fen) {
        vlTOPp->cpu__DOT__InstrD = (((0U != (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                      ? 1U : 0U) ? 0U
                                     : ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                         [(0xffU & 
                                           ((IData)(3U) 
                                            + vlTOPp->cpu__DOT__PCF))] 
                                         << 0x18U) 
                                        | ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                            [(0xffU 
                                              & ((IData)(2U) 
                                                 + vlTOPp->cpu__DOT__PCF))] 
                                            << 0x10U) 
                                           | ((vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                               [(0xffU 
                                                 & ((IData)(1U) 
                                                    + vlTOPp->cpu__DOT__PCF))] 
                                               << 8U) 
                                              | vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                              [(0xffU 
                                                & vlTOPp->cpu__DOT__PCF)]))));
    }
    vlTOPp->cpu__DOT__alu__DOT__SrcBE = ((IData)(vlTOPp->cpu__DOT__ALUSrcE)
                                          ? vlTOPp->cpu__DOT__alu__DOT__ExtImmE
                                          : vlTOPp->cpu__DOT__alu__DOT__WriteDataE);
    vlTOPp->cpu__DOT__PCF = __Vdly__cpu__DOT__PCF;
    vlTOPp->cpu__DOT__ALUResultE = ((4U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                     ? ((2U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                             ? vlTOPp->cpu__DOT__alu__DOT__SrcBE
                                             : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                >> 
                                                (0x1fU 
                                                 & vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                         : ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                             ? (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                << 
                                                (0x1fU 
                                                 & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                             : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                ^ vlTOPp->cpu__DOT__alu__DOT__SrcBE)))
                                     : ((2U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                             ? (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                | vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                             : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                & vlTOPp->cpu__DOT__alu__DOT__SrcBE))
                                         : ((1U & (IData)(vlTOPp->cpu__DOT__ALUControlE))
                                             ? (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                - vlTOPp->cpu__DOT__alu__DOT__SrcBE)
                                             : (vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                + vlTOPp->cpu__DOT__alu__DOT__SrcBE))));
    vlTOPp->cpu__DOT__PCSrcE = ((IData)(vlTOPp->cpu__DOT__control__DOT__JumpE)
                                 ? ((IData)(vlTOPp->cpu__DOT__ALUSrcE)
                                     ? 2U : 1U) : (
                                                   ((IData)(vlTOPp->cpu__DOT__control__DOT__BranchE) 
                                                    & ((vlTOPp->cpu__DOT__alu__DOT__SrcAE 
                                                        == vlTOPp->cpu__DOT__alu__DOT__SrcBE) 
                                                       ^ (IData)(vlTOPp->cpu__DOT__control__DOT__funct3E)))
                                                    ? 1U
                                                    : 0U));
    vlTOPp->cpu__DOT__Fen = (((3U == (IData)(vlTOPp->cpu__DOT__OpcodeE)) 
                              & (((IData)(vlTOPp->cpu__DOT__RdE) 
                                  == (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                               >> 0xfU))) 
                                 | ((IData)(vlTOPp->cpu__DOT__RdE) 
                                    == (0x1fU & (vlTOPp->cpu__DOT__InstrD 
                                                 >> 0x14U)))))
                              ? 0U : 1U);
    if ((0x40U & vlTOPp->cpu__DOT__InstrD)) {
        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
            = ((0x20U & vlTOPp->cpu__DOT__InstrD) ? 
               ((0x10U & vlTOPp->cpu__DOT__InstrD) ? 0U
                 : ((8U & vlTOPp->cpu__DOT__InstrD)
                     ? ((4U & vlTOPp->cpu__DOT__InstrD)
                         ? ((2U & vlTOPp->cpu__DOT__InstrD)
                             ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                 ? 0x188cU : 0U) : 0U)
                         : 0U) : ((4U & vlTOPp->cpu__DOT__InstrD)
                                   ? ((2U & vlTOPp->cpu__DOT__InstrD)
                                       ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                           ? 0x18a0U
                                           : 0U) : 0U)
                                   : ((2U & vlTOPp->cpu__DOT__InstrD)
                                       ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                           ? 0x49U : 0U)
                                       : 0U)))) : 0U);
    } else {
        if ((0x20U & vlTOPp->cpu__DOT__InstrD)) {
            if ((0x10U & vlTOPp->cpu__DOT__InstrD)) {
                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                    = ((8U & vlTOPp->cpu__DOT__InstrD)
                        ? 0U : ((4U & vlTOPp->cpu__DOT__InstrD)
                                 ? ((2U & vlTOPp->cpu__DOT__InstrD)
                                     ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                         ? 0x1033U : 0U)
                                     : 0U) : ((2U & vlTOPp->cpu__DOT__InstrD)
                                               ? ((1U 
                                                   & vlTOPp->cpu__DOT__InstrD)
                                                   ? 0x1002U
                                                   : 0U)
                                               : 0U)));
            } else {
                if ((8U & vlTOPp->cpu__DOT__InstrD)) {
                    vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                } else {
                    if ((4U & vlTOPp->cpu__DOT__InstrD)) {
                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                    } else {
                        if ((2U & vlTOPp->cpu__DOT__InstrD)) {
                            if ((1U & vlTOPp->cpu__DOT__InstrD)) {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x28U;
                                if ((0U == (7U & (vlTOPp->cpu__DOT__InstrD 
                                                  >> 0xcU)))) {
                                    vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                        = (0x300U | 
                                           (0x7cffU 
                                            & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->cpu__DOT__InstrD 
                                                   >> 0xcU)))) {
                                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                            = (0x200U 
                                               | (0x7cffU 
                                                  & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                                    } else {
                                        if ((2U == 
                                             (7U & 
                                              (vlTOPp->cpu__DOT__InstrD 
                                               >> 0xcU)))) {
                                            vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                                = (0x100U 
                                                   | (0x7cffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                            }
                        } else {
                            vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->cpu__DOT__InstrD)) {
                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                    = ((8U & vlTOPp->cpu__DOT__InstrD)
                        ? 0U : ((4U & vlTOPp->cpu__DOT__InstrD)
                                 ? 0U : ((2U & vlTOPp->cpu__DOT__InstrD)
                                          ? ((1U & vlTOPp->cpu__DOT__InstrD)
                                              ? 0x1002U
                                              : 0U)
                                          : 0U)));
            } else {
                if ((8U & vlTOPp->cpu__DOT__InstrD)) {
                    vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                } else {
                    if ((4U & vlTOPp->cpu__DOT__InstrD)) {
                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                    } else {
                        if ((2U & vlTOPp->cpu__DOT__InstrD)) {
                            if ((1U & vlTOPp->cpu__DOT__InstrD)) {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x420U;
                                if ((0x4000U & vlTOPp->cpu__DOT__InstrD)) {
                                    if ((1U & (~ (vlTOPp->cpu__DOT__InstrD 
                                                  >> 0xdU)))) {
                                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                            = ((0x1000U 
                                                & vlTOPp->cpu__DOT__InstrD)
                                                ? (0x6000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                                                : (0x7000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->cpu__DOT__InstrD)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->cpu__DOT__InstrD 
                                                    >> 0xcU)))) {
                                            vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                                = (0x1000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                                        }
                                    } else {
                                        vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                                            = ((0x1000U 
                                                & vlTOPp->cpu__DOT__InstrD)
                                                ? (0x2000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                                                : (0x3000U 
                                                   | (0xfffU 
                                                      & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
                                    }
                                }
                            } else {
                                vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                            }
                        } else {
                            vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->cpu__DOT__pc__DOT__next_PC = ((0U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                           ? ((IData)(4U) 
                                              + vlTOPp->cpu__DOT__PCF)
                                           : ((1U == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                               ? (vlTOPp->cpu__DOT__alu__DOT__PCE 
                                                  + vlTOPp->cpu__DOT__alu__DOT__ExtImmE)
                                               : ((2U 
                                                   == (IData)(vlTOPp->cpu__DOT__PCSrcE))
                                                   ? vlTOPp->cpu__DOT__ALUResultE
                                                   : 0U)));
    if ((0U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                      >> 2U)))) {
        vlTOPp->cpu__DOT__ExtImmD = ((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->cpu__DOT__InstrD 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     (0xfffU & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U)));
    } else {
        if ((1U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                          >> 2U)))) {
            vlTOPp->cpu__DOT__ExtImmD = ((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->cpu__DOT__InstrD 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlTOPp->cpu__DOT__InstrD 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlTOPp->cpu__DOT__InstrD 
                                                  >> 7U))));
        } else {
            if ((2U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                              >> 2U)))) {
                vlTOPp->cpu__DOT__ExtImmD = ((0xfffff000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cpu__DOT__InstrD 
                                                                >> 0x1fU)))) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & (vlTOPp->cpu__DOT__InstrD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->cpu__DOT__InstrD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->cpu__DOT__InstrD 
                                                         >> 7U)))));
            } else {
                if ((3U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                  >> 2U)))) {
                    vlTOPp->cpu__DOT__ExtImmD = ((0xfff00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->cpu__DOT__InstrD 
                                                                    >> 0x1fU)))) 
                                                     << 0x14U)) 
                                                 | ((0xff000U 
                                                     & vlTOPp->cpu__DOT__InstrD) 
                                                    | ((0x800U 
                                                        & (vlTOPp->cpu__DOT__InstrD 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlTOPp->cpu__DOT__InstrD 
                                                             >> 0x14U)))));
                } else {
                    if ((4U == (7U & ((IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                      >> 2U)))) {
                        vlTOPp->cpu__DOT__ExtImmD = 
                            (0xfffff000U & vlTOPp->cpu__DOT__InstrD);
                    }
                }
            }
        }
    }
    vlTOPp->__Vtableidx1 = ((0x20U & ((vlTOPp->cpu__DOT__InstrD 
                                       >> 0x19U) & vlTOPp->cpu__DOT__InstrD)) 
                            | ((0x1cU & (vlTOPp->cpu__DOT__InstrD 
                                         >> 0xaU)) 
                               | (3U & (IData)(vlTOPp->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
    vlTOPp->cpu__DOT__control__DOT__ALUControlD = vlTOPp->__Vtable1_cpu__DOT__control__DOT__ALUControlD
        [vlTOPp->__Vtableidx1];
}

void Vcpu::_eval(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vcpu::_change_request(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_change_request\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vcpu::_change_request_1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_change_request_1\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcpu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
