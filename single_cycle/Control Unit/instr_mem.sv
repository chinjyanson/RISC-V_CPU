module instr_mem #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
    
)(
    input   logic                       clk,
    input   logic [ADDRESS_WIDTH-1:0]   addr,
    output  logic [DATA_WIDTH-1:0]      Instr
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("machinecode.mem", rom_array);
end;


assign Instr = {{rom_array[addr+3]}, {rom_array[addr+2]}, {rom_array[addr+1]}, {rom_array[addr]}};

endmodule
