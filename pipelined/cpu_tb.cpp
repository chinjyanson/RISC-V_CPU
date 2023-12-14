#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include <iostream>
#include <fstream>

#define MAX_SIM_CYC 100000



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

    std::ofstream outputFile;
    outputFile.open("output.txt");

    if (!outputFile.is_open()){
        std::cout << "Error opening file" << std::endl;
    }
    

    // initialize simulation inputs
    top->clk = 0;
    top->rst = 0;

            bool clock = false;
            int clockcount = 0;
            std::string debug;

    // run simulation for MAX_SIM_CYC clock cycles
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
        // dump variables into VCD file and toggle clock
        for (tick=0; tick<2; tick++) {
        tfp->dump (2*simcyc+tick);
        top->clk = !top->clk;
        top->eval ();

        if(clock){ 
                        std::cout << std::hex << "clock: " << clockcount << " top: " << top->a0 <<std::endl; 
                        outputFile << simcyc << " " << top->a0 << '\n';

                        clockcount++; }


                        



        clock = !clock;
        //std::cout << "clock1: " << clock << std::endl;
                   

        }

    }

    outputFile.close();
    tfp->close(); 
    exit(0);


    
}