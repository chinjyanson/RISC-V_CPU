module regfile #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32,
    parameter REG_WIDTH = 8 //convert to byte addressing
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

logic [REG_WIDTH-1:0] reg_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin 
    if(WE3 == 1'b1) begin
        reg_array[A3] <= WD3[7:0];
        reg_array[A3+1] <= WD3[15:8];
        reg_array[A3+2] <= WD3[23:16];
        reg_array[A3+3] <= WD3[31:24];
    end 
end 

assign RD1 = {reg_array[A1], reg_array[A1+1], reg_array[A1+2], reg_array[A1+3]};
assign RD2 = {reg_array[A2], reg_array[A2+1], reg_array[A2+2], reg_array[A3+3]};
assign a0 = {reg_array[10], reg_array[11], reg_array[12], reg_array[13]};




endmodule
