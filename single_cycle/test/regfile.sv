module regfile #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
)(
    input   logic                   clk,
    input   logic                   WE3,
    input   logic [DATA_WIDTH-1:0]  WD3,
    input   logic [DATA_WIDTH-1:0]  Instr,
    output  logic [DATA_WIDTH-1:0]  RD1,
    output  logic [DATA_WIDTH-1:0]  RD2,
    output  logic [DATA_WIDTH-1:0]  a0  //(debug output)
);

logic[7:0] A2 = {3'b0 , Instr[24:20]};
logic[7:0] A1 = {3'b0 , Instr[19:15]};
logic[7:0] A3 = {3'b0 , Instr[11:7]};

logic [DATA_WIDTH-1:0] reg_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin 
    if(WE3 == 1'b1) begin
        reg_array[A3] <= WD3;
    end 
end 

assign RD1 = reg_array[A1];
assign RD2 = reg_array[A2];
assign a0 = reg_array[10];




endmodule
