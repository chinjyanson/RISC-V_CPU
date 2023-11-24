module PCmux #(
    parameter ADDRESS_WIDTH = 32
)(
    input logic PCsrc,
    input logic [ADDRESS_WIDTH-1:0] pc ,
    input logic [ADDRESS_WIDTH-1:0] ImmOp,
    output logic [ADDRESS_WIDTH-1:0] next_PC
);

    assign next_PC = PCsrc ? pc + ImmOp : pc + 32'd4;

endmodule