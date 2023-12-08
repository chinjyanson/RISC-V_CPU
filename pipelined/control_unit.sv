module control_unit #(
    parameter DATA_WIDTH = 32
)(
    input   logic   [DATA_WIDTH-1:0]    instr_i,
    input   logic                       Zero_o,
    output  logic                       RegWrite_o,
    output  logic   [2:0]               ALUctrl_o,
    output  logic                       ALUsrc,_o
    output  logic   [11:0]              ImmSrc_o,
    output  logic                       PCsrc_o,
    output  logic                       MEMWrite_o,
    output  logic                       MEMsrc_o
);

    always_comb
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0010011, 3'b000}:   RegWrite_o = 1'b1;
            {7'b0000011, 3'b010}:   RegWrite_o = 1'b1;
            default: RegWrite_o = 1'b0;
        endcase

    always_comb
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0010011, 3'b000}:   ALUctrl = 3'b0;
            default: ALUctrl_o = 3'b111;
        endcase

    always_comb
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0010011, 3'b000}:   ALUsrc_o = 1'b1;
            default: ALUsrc_o = 1'b0;
        endcase

    always_comb
        begin
            if ({instr_i[6:0],instr_i[14:12]} == {7'b0010011, 3'b000})
                ImmSrc_o = {instr_i[31:20]};
            else if ({instr_i[6:0],instr_i[14:12]} == {7'b1100011,3'b001})
                ImmSrc_o = {instr_i[31],instr_i[7],instr_i[30:25],instr_i[11:8]};
            else
                ImmSrc_o = {instr_i[31:20]};
        end

    always_comb
        begin
            if (({instr_i[6:0],instr_i[14:12]} == {7'b1100011,3'b000}) && EQ)
                PCsrc_o = 1'b1;
            else if (({instr_i[6:0],instr_i[14:12]} == {7'b1100011,3'b001}) && ~EQ)
                PCsrc_o = 1'b1;
            else
                PCsrc_o = 1'b0;
        end

    always_comb
        MEMWrite_o = 1'b0;

    always_comb 
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0000011, 3'b010}:   MEMsrc_o = 1'b1;
            default:                MEMsrc_o = 1'b0;
            
        endcase

            

 
endmodule