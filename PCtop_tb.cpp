#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VPCtop.h"

// #include "vbuddy.cpp"     

int main(int argc, char **argv, char **env) {
  int i;     
  int clk;       

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VPCtop* top = new VPCtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("PCtop.vcd");

  // initialize simulation inputs
  top->ImmOp = 0x00000001; // 32-bit Immediate Operand fed from sign-extended 8-bit instr output
  top->PCsrc = 0; // 1-bit (Multiplexer Control - 0 selects PC+4, 1 selects PC+ImmOp.)

  // run simulation for 500 clock cycles
  for (i=0; i<500; i++) {
    for (clk=0; clk<2; clk++) {
      tfp->dump(2*i+clk);
      top->clk = !top->clk;
      top->eval ();
    }
    
    std::cout<<top->pc_out<<std::endl; 
    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);                
  }

  // vbdClose();  
  tfp->close(); 
  exit(0);
}