module hazard_foward (
    logic input [4:0]   Rs1E;
    logic input [4:0]   Rs2E;
    logic input [4:0]   RdM,;
    logic input [4:0]   RdW;
    logic input [2:0]   RegWriteM;
    logic input [2:0]   RegWriteW;
    logic output[1:0]   FowardAE;
    logic output[1:0]   FowardBE;
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

//fowarding
if ((RegWriteM!= 3'b0)||(RegWriteW!= 3'b0))begin
    //FowardAE
    if(Rs1E == RdM) 
        FowardAE = 2'b10;
    else 
        FowardAE = (Rs1E == RdW) ? 2'b01 : 2'b00;
    

    //FowardBE
    if(Rs2E == RdM) 
        FowardBE = 2'b10;
    else 
        FowardBE = (Rs2E == RdW) ? 2'b01 : 2'b00;
    
end else begin
    FowardAE = 2'b00;
    FowardBE = 2'b00;
end

endmodule