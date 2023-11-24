module PCtop #(
    parameter   ADDRESS_WIDTH = 32
)(
    // interface signals
    input   logic                       clk,        // clock
    input   logic                       rst,        // reset        
    input   logic [ADDRESS_WIDTH-1:0]   ImmOp,     
    input   logic                       PCsrc,
    // output logic [ADDRESS_WIDTH-1:0]    pc_out
);

logic [ADDRESS_WIDTH-1:0]   next_PC, pc;    // interconnect wire

PCmux pc_mux(
    .PCsrc (PCsrc),
    .pc (pc),
    .ImmOp (ImmOp),
    .next_PC (next_PC), 
);

PCreg pc_reg(
    .clk (clk),
    .rst (rst),
    .next_PC (next_PC),
    .pc (pc)
    //.another_pc(pc_out) (for debugging purposes)
);

endmodule
