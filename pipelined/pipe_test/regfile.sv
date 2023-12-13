module regfile #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
)(
    input   logic                   clk,
    input   logic [2:0]             WE3,
    input   logic [DATA_WIDTH-1:0]  WD3,
    input   logic [4:0]             A1_i,
    input   logic [4:0]             A2_i,
    input   logic [4:0]             A3_i,
    output  logic [DATA_WIDTH-1:0]  RD1,
    output  logic [DATA_WIDTH-1:0]  RD2,
    output  logic [DATA_WIDTH-1:0]  a0  //(debug output)
);






endmodule 