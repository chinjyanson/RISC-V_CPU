module hazard_foward (
    input logic [4:0]   Rs1E,
    input logic [4:0]   Rs2E,
    input logic [4:0]   RdM,
    input logic [4:0]   RdW,
    input logic [2:0]   RegWriteM,
    input logic [2:0]   RegWriteW,
    output logic [1:0]  FowardAE,
    output logic [1:0]   FowardBE
);

//could be for 2 reasons 
    //normal write hazard - fowarding (forward the result from the memory stage and writeback stage to the execute stage)
    //lw hazard - stalling (data read from memory is only available at the end of the clock cycle so we stall the next instructions and forward memory data from writeback)

// M needs to have priority over W
    //For example:
    //add s8, s1, s2
    //add s8, s1, s3
    //add s9, s8, s1 -> here we need to write back the line from the second one, not the first (M, not W)

//we need to identify those cases - probably with opcode and RegWrite - these cases only occur when we have to write back

// //fowarding
// if ((RegWriteM!= 3'b0)||(RegWriteW!= 3'b0))begin
//     if(Rs1E == RdM) 
//         FowardAE = 2'b10;
//     else 
//         FowardAE = (Rs1E == RdW) ? 2'b01 : 2'b00;
    

//     //FowardBE
//     if(Rs2E == RdM) 
//         FowardBE = 2'b10;
//     else 
//         FowardBE = (Rs2E == RdW) ? 2'b01 : 2'b00;
    
// end else begin
//     FowardAE = 2'b00;
//     FowardBE = 2'b00;
// end

assign FowardAE = ((RegWriteM != 3'b0) || (RegWriteW != 3'b0)) ? ((Rs1E == RdM) ? 2'b10 : ((Rs1E == RdW) ? 2'b01 : 2'b00)) : 2'b00;
assign FowardBE = ((RegWriteM != 3'b0) || (RegWriteW != 3'b0)) ? ((Rs2E == RdM) ? 2'b10 : ((Rs2E == RdW) ? 2'b01 : 2'b00)) : 2'b00;


endmodule
