module reg_fetch #(
    parameter DATA_WIDTH =32;
)(       
    input logic       clk,
    input logic [DATA_WIDTH-1:0] InstrF,
    input logic [DATA_WIDTH-1:0] PCF,
    output logic [DATA_WIDTH-1:0] PCPlus4D,
    output logic [DATA_WIDTH-1:0] PCD,
    output logic [DATA_WIDTH-1:0] InstrD,
    output logic [DATA_WIDTH-1:0] PCPlus4F

    always_ff @(posedge clk) begin
        InstrD <= InstrF;
        PCD <= PDF;
        PCPlus4D <= PCPlus4F;
    end
      
);
endmodule