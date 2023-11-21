module SignExtend #(
    parameter DATA_WIDTH = 32,
    IMM_WIDTH = 12
    
)(
    logic input [IMM_WIDTH-1:0]                  ImmSrc,
    logic output[DATA_WIDTH-1:0]        ImmOp
);

assign ImmOp = {{(DATA_WIDTH-IMM_WIDTH){ImmSrc[IMM_WIDTH-1]}}, ImmSrc};

endmodule