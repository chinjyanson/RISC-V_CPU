module pc_top #(
    parameter   WIDTH = 32 // changed back to 32 as input for instr mem has to be 32 bit
)(
    // interface signals
    input   logic                       clk,        // clock
    input   logic                       rst,        // reset 
    input   logic                       ALUResult,        
    input   logic [WIDTH-1:0]           ImmOp,     
    input   logic                       PCsrc,
    output  logic [WIDTH-1:0]           pc_out,
    output  wire  [WIDTH-1:0]           PCPlus4
);

logic [WIDTH-1:0]   next_PC, pc, PCTarget;    // interconnect wire

assign PCPlus4 = PC + 32'b4;
assign PCTarget = PC + ImmOp;

mux4 pc_mux(
    .control    (PCscr),
    .input0     (PCPlus4),
    .input1     (PCTarget),
    .input2     (ALUResult),
    .out        (next_PC)
);

pc_reg pc_reg(
    .clk        (clk),
    .rst        (rst),
    .next_PC    (next_PC),
    .pc         (pc),
    .another_pc (pc_out)
);

endmodule
