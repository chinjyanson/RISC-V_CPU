module instr_mem #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0] pc_i,
    output logic [DATA_WIDTH-1:0]   instr_o
);

    logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];
    
    initial begin
        $readmemh("pdf.mem", rom_array);
    end;

    always_comb begin
        instr_o = rom_array[pc_i];
    end

endmodule
