module control_top #(
        parameter   ADDRESS_WIDTH = 8,
        parameter   DATA_WIDTH = 32
)(
    input   logic   [ADDRESS_WIDTH-1:0] PC,
    input   logic                       Zero_i,
    output  logic                       RegWrite_o,
    output  logic   [2:0]               ALUctrl,_o
    output  logic                       ALUsrc_o,
    output  logic                       PCsrc_o,
    output  logic   [4:0]               rs1_o,
    output  logic   [4:0]               rs2_o,
    output  logic   [4:0]               rd_o,
    output  logic   [DATA_WIDTH-1:0]    ImmOp_o
);

    wire    [DATA_WIDTH-1:0]    instr;
    wire    [11:0]              ImmSrc;


    assign rs1  = instr[19:15];
    assign rs2  = instr[24:20];
    assign rd   = instr[11:7];


    instr_mem #(ADDRESS_WIDTH, DATA_WIDTH) my_instr_mem(
        .PC (PC),      
        .instr (instr)   
        );

    control_unit #(DATA_WIDTH) my_control_unit(
        .instr_i (instr),
        .Zero_o (EQ),
        .RegWrite_o (RegWrite),
        .ALUctrl_o (ALUctrl),
        .ALUsrc_o (ALUsrc),
        .ImmSrc_o (ImmSrc),
        .PCsrc_o (PCsrc)
        );

    sign_extend #(DATA_WIDTH, 12) my_sign_extend(
        .instr_I (instr),
        .ImmSrc_o (ImmSrc),    
        .ImmOp_o (ImmOp)
    );

endmodule