#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include "vbuddy.cpp"
#include <iostream>




#define MAX_SIM_CYC 50000



int main(int argc, char **argv, char **env) {
    int simcyc;     // simulation clock count
    int tick;       // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vcpu* top = new Vcpu;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("cpu.vcd");


    //init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Ref Prog");
    

    // initialize simulation inputs
    top->clk = 0;
    top->rst = 0;

            bool clock = false;
            int clockcount = 0;


    // run simulation for MAX_SIM_CYC clock cycles
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
        // dump variables into VCD file and toggle clock
        for (tick=0; tick<2; tick++) {
        tfp->dump (2*simcyc+tick);
        top->clk = !top->clk;
        top->eval ();

        if(clock){ 
                        std::cout << std::hex << "clock: " << clockcount << " top: " << top->a0 << " datamem: " << top->test << std::endl; 
                        clockcount++; }

        clock = !clock;
        //std::cout << "clock1: " << clock << std::endl;

        }
    if(simcyc % 10 == 0){
        vbdPlot(int(top->a0), 0, 255);
        vbdCycle(simcyc+10);
    }

       // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')){
        exit(0);                // ... exit if finish OR 'q' pressed
        tfp->close();
    
    }

    }

    vbdClose();
    tfp->close();
    exit(0);
    
}