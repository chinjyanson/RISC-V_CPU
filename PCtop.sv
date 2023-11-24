module PCtop #(
    parameter   ADDRESS_WIDTH = 32
)(
    // interface signals
    input   logic                       clk,        // clock
    input   logic                       rst,        // reset        
    input   logic [ADDRESS_WIDTH-1:0]           ImmOp,     
    input   logic                       PCsrc,
    
);

logic [ADDRESS_WIDTH-1:0]   next_PC, pc;    // interconnect wire

PCmux PCmux(
    .clk (clk),
    .PCsrc (PCsrc),
    .ImmOp (ImmOp),
    .next_PC (next_PC),
    .pc (pc)
);

PCReg PCreg(
    .clk (clk),
    .rst (rst),
    .next_PC (next_PC),
    .pc (pc)
);

endmodule