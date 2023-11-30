module data_mem #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32
) (
    input  logic                             clk,
    input  logic                             WE,
    input  logic     [ADDRESS_WIDTH-1:0]     A,
    input  logic     [DATA_WIDTH-1:0]        WD,
    output logic     [DATA_WIDTH-1:0]        RD
);
    
endmodule