module CPU #(

    parameter DATA_WIDTH = 32

)(

    input logic                        clk,
    input logic                        rst,
    output logic [DATA_WIDTH-1:0]      a0

);

    //output internal logic for "green" module 
    logic   RegWrite,
    logic   ALUctrl,
    logic   ALUsrc, 
    logic   ImmSrc,
    logic   PCsrc,
    logic   IMMOp,
    logic   instr,

    //output internal logic for "red" module 
    logic EQ,

    //output internal logic for "blue" module
    logic PC

    //and then we would specify the "submodules here"   
        //green
        //blue
        //red

    
endmodule