// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCPU_H_
#define VERILATED_VCPU_H_  // guard

#include "verilated.h"

class Vcpu__Syms;
class Vcpu___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vcpu VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcpu__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
<<<<<<< HEAD
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(a0,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ cpu__DOT__RegWriteW;
    CData/*2:0*/ cpu__DOT__RegWriteM;
    CData/*1:0*/ cpu__DOT__MemWriteM;
    CData/*1:0*/ cpu__DOT__ResultSrcW;
    CData/*2:0*/ cpu__DOT__ALUControlE;
    CData/*0:0*/ cpu__DOT__ALUSrcE;
    CData/*1:0*/ cpu__DOT__PCSrcE;
    CData/*4:0*/ cpu__DOT__Rs1E;
    CData/*4:0*/ cpu__DOT__Rs2E;
    CData/*4:0*/ cpu__DOT__RdM;
    CData/*4:0*/ cpu__DOT__RdW;
    CData/*4:0*/ cpu__DOT__RdE;
    CData/*6:0*/ cpu__DOT__OpcodeE;
    CData/*0:0*/ cpu__DOT__Fen;
    CData/*1:0*/ cpu__DOT__FowardAE;
    CData/*1:0*/ cpu__DOT__FowardBE;
    CData/*0:0*/ cpu__DOT__PCrst;
    CData/*2:0*/ cpu__DOT__control__DOT__ALUControlD;
    CData/*2:0*/ cpu__DOT__control__DOT__RegWriteE;
    CData/*1:0*/ cpu__DOT__control__DOT__ResultSrcE;
    CData/*1:0*/ cpu__DOT__control__DOT__MemWriteE;
    CData/*0:0*/ cpu__DOT__control__DOT__JumpE;
    CData/*0:0*/ cpu__DOT__control__DOT__BranchE;
    CData/*2:0*/ cpu__DOT__control__DOT__funct3E;
    CData/*1:0*/ cpu__DOT__control__DOT__ResultSrcM;
    SData/*14:0*/ cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls;
    IData/*31:0*/ cpu__DOT__InstrD;
    IData/*31:0*/ cpu__DOT__ExtImmD;
    IData/*31:0*/ cpu__DOT__PCD;
    IData/*31:0*/ cpu__DOT__PCPlus4D;
    IData/*31:0*/ cpu__DOT__ALUResultE;
    IData/*31:0*/ cpu__DOT__PCF;
    IData/*31:0*/ cpu__DOT__pc__DOT__next_PC;
    IData/*31:0*/ cpu__DOT__alu__DOT__RD1E;
    IData/*31:0*/ cpu__DOT__alu__DOT__RD2E;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCE;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCPlus4E;
    IData/*31:0*/ cpu__DOT__alu__DOT__SrcAE;
    IData/*31:0*/ cpu__DOT__alu__DOT__SrcBE;
    IData/*31:0*/ cpu__DOT__alu__DOT__WriteDataE;
    IData/*31:0*/ cpu__DOT__alu__DOT__ExtImmE;
    IData/*31:0*/ cpu__DOT__alu__DOT__ALUResultM;
    IData/*31:0*/ cpu__DOT__alu__DOT__WriteDataM;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCPlus4M;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCPlus4W;
    IData/*31:0*/ cpu__DOT__alu__DOT__ReadDataW;
    IData/*31:0*/ cpu__DOT__alu__DOT__ALUResultW;
    IData/*31:0*/ cpu__DOT__alu__DOT__ResultW;
    CData/*7:0*/ cpu__DOT__control__DOT__InstrMem__DOT__rom_array[256];
    IData/*31:0*/ cpu__DOT__alu__DOT__register__DOT__reg_array[256];
    IData/*31:0*/ cpu__DOT__alu__DOT__data__DOT__data_mem_register[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[2];
    static CData/*2:0*/ __Vtable1_cpu__DOT__control__DOT__ALUControlD[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcpu__Syms* __VlSymsp;  // Symbol table
    
=======
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT(&a0,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcpu___024root* const rootp;

>>>>>>> 59a9696e8d437da2c06d3671e1163f87a5cf37d8
    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcpu(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcpu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcpu();
  private:
    VL_UNCOPYABLE(Vcpu);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
<<<<<<< HEAD
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcpu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcpu__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vcpu__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vcpu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vcpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vcpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(Vcpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vcpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
=======
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
>>>>>>> 59a9696e8d437da2c06d3671e1163f87a5cf37d8
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
