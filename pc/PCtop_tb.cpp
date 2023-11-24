#include "VPCtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int it;
    int clk;
    Verilated::commandArgs(argc,argv);
//  initialise top verilog instance
    VPCtop* top = new VPCtop;
// initialise trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("VPCTop.vcd");

    // initialise simulation outputs
    top->clk =1;
    top->rst=0;
    top->PCsrc = 1;
    top->ImmOP = 25;

    // run simulation for many clock cycles
    int tick = 0;
    for(int i=0;i< 300; i++){
        // Add to readme, remember to compelete part 2 of challenge
        // dump variables into VCD file and toggle clock
        for(clk=0;clk<2;clk++){
            // in ps
            tfp->dump (2*i+clk);
            // falling edge
            top->clk = !top->clk;
            top->eval ();
        }
        top->clk =1;
        top->rst=0;
        top->PCsrc = 0;
        top->ImmOP = 25;
        if(Verilated::gotFinish()) exit(0);
        
    }
    tfp->close();
    exit(0);

}