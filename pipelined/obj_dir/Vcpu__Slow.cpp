// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu.h"
#include "Vcpu__Syms.h"

//==========
CData/*2:0*/ Vcpu::__Vtable1_cpu__DOT__control__DOT__ALUControlD[64];

VL_CTOR_IMP(Vcpu) {
    Vcpu__Syms* __restrict vlSymsp = __VlSymsp = new Vcpu__Syms(this, name());
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu::__Vconfigure(Vcpu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vcpu::~Vcpu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vcpu::_initial__TOP__2(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_initial__TOP__2\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp7[3];
    // Body
    VL_WRITEF("Loading ROM\n");
    __Vtemp7[0U] = 0x2e6d656dU;
    __Vtemp7[1U] = 0x61726f6dU;
    __Vtemp7[2U] = 0x646174U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp7)
                 , vlTOPp->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string("pdf.mem")
                 , vlTOPp->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                 , 0, ~0ULL);
}

void Vcpu::_settle__TOP__3(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_settle__TOP__3\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->a0 = vlTOPp->cpu__DOT__alu__DOT__register__DOT__reg_array
        [0xbU];
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
    vlTOPp->cpu__DOT__alu__DOT__SrcBE = ((IData)(vlTOPp->cpu__DOT__ALUSrcE)
                                          ? vlTOPp->cpu__DOT__alu__DOT__ExtImmE
                                          : vlTOPp->cpu__DOT__alu__DOT__WriteDataE);
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
}

void Vcpu::_eval_initial(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_initial\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vcpu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::final\n"); );
    // Variables
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcpu::_eval_settle(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_settle\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vcpu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a0 = VL_RAND_RESET_I(32);
    cpu__DOT__RegWriteW = VL_RAND_RESET_I(3);
    cpu__DOT__RegWriteM = VL_RAND_RESET_I(3);
    cpu__DOT__MemWriteM = VL_RAND_RESET_I(2);
    cpu__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    cpu__DOT__ALUControlE = VL_RAND_RESET_I(3);
    cpu__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    cpu__DOT__InstrD = VL_RAND_RESET_I(32);
    cpu__DOT__ExtImmD = VL_RAND_RESET_I(32);
    cpu__DOT__PCD = VL_RAND_RESET_I(32);
    cpu__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    cpu__DOT__ALUResultE = VL_RAND_RESET_I(32);
    cpu__DOT__PCSrcE = VL_RAND_RESET_I(2);
    cpu__DOT__Rs1E = VL_RAND_RESET_I(5);
    cpu__DOT__Rs2E = VL_RAND_RESET_I(5);
    cpu__DOT__RdM = VL_RAND_RESET_I(5);
    cpu__DOT__RdW = VL_RAND_RESET_I(5);
    cpu__DOT__RdE = VL_RAND_RESET_I(5);
    cpu__DOT__OpcodeE = VL_RAND_RESET_I(7);
    cpu__DOT__PCF = VL_RAND_RESET_I(32);
    cpu__DOT__Fen = VL_RAND_RESET_I(1);
    cpu__DOT__FowardAE = VL_RAND_RESET_I(2);
    cpu__DOT__FowardBE = VL_RAND_RESET_I(2);
    cpu__DOT__PCrst = VL_RAND_RESET_I(1);
    cpu__DOT__pc__DOT__next_PC = VL_RAND_RESET_I(32);
    cpu__DOT__control__DOT__ALUControlD = VL_RAND_RESET_I(3);
    cpu__DOT__control__DOT__RegWriteE = VL_RAND_RESET_I(3);
    cpu__DOT__control__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    cpu__DOT__control__DOT__MemWriteE = VL_RAND_RESET_I(2);
    cpu__DOT__control__DOT__JumpE = VL_RAND_RESET_I(1);
    cpu__DOT__control__DOT__BranchE = VL_RAND_RESET_I(1);
    cpu__DOT__control__DOT__funct3E = VL_RAND_RESET_I(3);
    cpu__DOT__control__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            cpu__DOT__control__DOT__InstrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }}
    cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = VL_RAND_RESET_I(15);
    cpu__DOT__alu__DOT__RD1E = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__RD2E = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__PCE = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__SrcAE = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__SrcBE = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__WriteDataE = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__ExtImmE = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__ALUResultM = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__WriteDataM = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__ReadDataW = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__ALUResultW = VL_RAND_RESET_I(32);
    cpu__DOT__alu__DOT__ResultW = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            cpu__DOT__alu__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[0] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[1] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[2] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[3] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[4] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[5] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[6] = 4U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[7] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[8] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[9] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[10] = 5U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[11] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[12] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[13] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[14] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[15] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[16] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[17] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[18] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[19] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[20] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[21] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[22] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[23] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[24] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[25] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[26] = 3U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[27] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[28] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[29] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[30] = 2U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[31] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[32] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[33] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[34] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[35] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[36] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[37] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[38] = 4U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[39] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[40] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[41] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[42] = 5U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[43] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[44] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[45] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[46] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[47] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[48] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[49] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[50] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[51] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[52] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[53] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[54] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[55] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[56] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[57] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[58] = 3U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[59] = 7U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[60] = 0U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[61] = 1U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[62] = 2U;
    __Vtable1_cpu__DOT__control__DOT__ALUControlD[63] = 7U;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
