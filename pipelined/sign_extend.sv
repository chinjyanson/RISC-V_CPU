module sign_extend #(
    parameter   DATA_WIDTH = 32,
                IMM_WIDTH = 12
)(
    input   logic [DATA_WIDTH-1:0]  instr_i,
    input   logic [IMM_WIDTH-1:0]   ImmSrc_i,    
    output  logic [DATA_WIDTH-1:0]  ImmOp_o
);

    always_comb 
    
        casez ({instr_i[6:0],instr_i[14:12],ImmSrc_i[11]})
            {7'b0010011, 3'b000, 1'b1}:     ImmOp_o = {20'b11111111111111111111, ImmSrc};
            {7'b1100011, 3'b???, 1'b?}:     ImmOp_o = {19'b1111111111111111111, ImmSrc, 1'b0};
            default:                        ImmOp_o = {20'b0, ImmSrc_i};
        endcase

endmodule
