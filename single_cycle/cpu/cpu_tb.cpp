#include "Vcpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char **argv, char **env){
    int clk;
    Verilated::commandArgs(argc,argv);
//  initialise top verilog instance
    Vcpu* top = new Vcpu;
// initialise trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("Vcpu.vcd");

    // initialise simulation outputs
    clk = 0;

    

    // run simulation for many clock cycles
    int tick = 0;
    for(int i=0;i< 20; i++){

        for(clk=0;clk<2;clk++){
            // in ps
            tfp->dump (2*i+clk);
            // falling edge
            clk = !clk;
            top->eval ();
        }

        std::cout << std::hex << int(top->a0) << std::endl;

        if(Verilated::gotFinish()) exit(0);
        
    }
    tfp->close();
    exit(0);
}