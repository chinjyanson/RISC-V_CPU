// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VGREEN_H_
#define _VGREEN_H_  // guard

#include "verilated_heavy.h"

//==========

class Vgreen__Syms;
class Vgreen_VerilatedVcd;


//----------

VL_MODULE(Vgreen) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(PC,7,0);
    VL_IN8(EQ,0,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(ALUctrl,2,0);
    VL_OUT8(ALUsrc,0,0);
    VL_OUT8(PCsrc,0,0);
    VL_OUT8(opcode_out,6,0);
    VL_OUT(instr,31,0);
    VL_OUT(ImmOp,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ green__DOT__ImmSrc;
    CData/*0:0*/ green__DOT__MyInstrMem__DOT__clk;
    CData/*7:0*/ green__DOT__MyInstrMem__DOT__rom_array[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vm_traceActivity[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vgreen__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vgreen);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vgreen(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vgreen();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vgreen__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vgreen__Syms* symsp, bool first);
  private:
    static QData _change_request(Vgreen__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vgreen__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vgreen__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vgreen__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vgreen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vgreen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(Vgreen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(Vgreen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
