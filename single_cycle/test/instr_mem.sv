module instr_mem #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
    
)(
    //input   logic                       clk, //idk this is on the diagram before the instruction memory block
    input   logic [ADDRESS_WIDTH-1:0]   addr_i,
    output  logic [DATA_WIDTH-1:0]      Instr_o
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("pdf.mem", rom_array);
end;


logic [ADDRESS_WIDTH-1:0] rom_array0;
logic [ADDRESS_WIDTH-1:0] rom_array1; 
logic [ADDRESS_WIDTH-1:0] rom_array2; 
logic [ADDRESS_WIDTH-1:0] rom_array3;       //need this as sv default word size is 32b, previous concatentation method created 128 bit word

assign rom_array0 = rom_array[addr_i];
assign rom_array1 = rom_array[addr_i + 1];
assign rom_array2 = rom_array[addr_i + 2];
assign rom_array3 = rom_array[addr_i + 3];


assign Instr_o = {rom_array3, rom_array2, rom_array1, rom_array0};

endmodule
