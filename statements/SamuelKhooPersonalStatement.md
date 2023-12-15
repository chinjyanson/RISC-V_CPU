# Samuel Khoo Ing Shin Personal Statement 

### Overview Of My Contributions
Within the single cycle I contributed primarily to the program counter, data memory and instruction memory files, with further work on debugging and organising files, as well as connecting components together. 
In the pipelining section of the project, I worked on writing a new aludecoder and a new maindecoder, as well as working to create top files to connect everything together. Aside from this I also worked on developing and debugging the pipelining registers and the hazard unit. 

### Structure
Below are hyperlinks which relate to the different sections within my personal statement. 
- [Single Cycle CPU](#single-cycle-processor)
- [Pipelined CPU](#pipelining)
- [Conclusions and Evaluation](#conclusions-and-evaluations)

## Single Cycle Processor

### Introduction
Within this part of the project, I primarily focused on the development of the PC as well as debugging of the control unit and adding some features to the ALU module. I also created some general components/modules that could be reused and implemented across our architecture.

Although individual components within the processor were completed relatively quickly, joining all the components and ensuring full functionality was a much longer task than the team had predicted. 

### Program Counter
To successfully complete and attain an operational PC I broke the counter into 3 seperate sections, a mux section, a register section and a top file controlling the component. I would later also write 2 general muxes one that had 2 inputs and another with 4 inputs, this would prove to be more useful in further developmement stages. I also worked closely with Anson and Bruno to debug certain elements that stemmed from the outputs of the Program Counter (e.g. the Control Unit). 
The changes and features I added to form the Program Counter module are shown below:
- [Created PC top file](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/680b3133db627e28b6332913bc3934294a990023)
- [Completion of PC mux and PC register file](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/dfefd5fbc303c96fe067b5b86232d1488d5fb6aa)
- [Debugging the PC module](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/bf0a24d7fd1cc6c92495adb22617d6088012e06e)
- [Testing files for PC](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/63e483c91df0967193e24b5b6fc0154ee0763f18)

// Miscellaneous related to PC //
Following this I worked closely with Bruno to ensure the jump instructions were functional and to incorporate instructions which involved manipulating the counter value. One change we implemented was increasing the bit width of PCSrc, this required the implementation of a wider mux and led me to write a mux4 module. 
- [Added a wider mux](https://github.com/vishesh32/RISC-V-Team1/commit/e4f736baa8a2161ccc964539c5579da8ea125249)
- [Restyled 4 wide mux](https://github.com/vishesh32/RISC-V-Team1/commit/a3e41d75a6b363352552fe89601aed3e12cb286c)
I would then later realise that there were certain instances which made use of a 3 out of 4 inputs which would throw a warning upon compiling, this led me to write a mux3 module which would eliminate this error. 
- [Creation of mux3 component](https://github.com/vishesh32/RISC-V-Team1/commit/99e79496ac7c7b38bb8392587c055d3ff82930e8)
The code below shows the implementation of a dont care case to avoid errors:
```
always_comb begin
    case (control)
        2'b00: out = input0;
        2'b01: out = input1;
        2'b10: out = input2;
        default: out = 32'hx; // Default case (don't care case)
    endcase
end
```

### Data Mem
Following the completion of the PC module, I was rotated onto working on the data memory module which primarly handled write instructions of different length and storing data. This was initially relatively confusing and I worked with Bruno to develop this module to match the existing instruction codes. 
- [First draft of the datamem file](https://github.com/vishesh32/RISC-V-Team1/commit/58a03747ecc7961354f11ed2454cb3b9907342db)
- [Implementing different load instructions](https://github.com/vishesh32/RISC-V-Team1/commit/c389c01ad1b840522539c9a7e5a7b442de2bff70)
Throughout the pipeline development process, I would realise that this implementation would cause errors where incorrect data was being sent and fed back to the register file. This would be debugged by both myself and Bruno. The updated version of the data mem would include a 2 bit wide Write Enable/MemWrite (which is needed to differentiate between the different load instructions). This is shown in the code snippet below:
```
always_ff @(posedge clk) begin
    case(WE) // this could be done cleaner
    2'b01: 
    begin //word write
        data_mem_register[add] <= WD[7:0];
        data_mem_register[add+1] <= WD[15:8];
        data_mem_register[add+2] <= WD[23:16];
        data_mem_register[add+3] <= WD[31:24];
    end
    2'b11:
    begin //write byte
        data_mem_register[A] <=  WD[7:0];
    end
    default: data_mem_register[A] <= data_mem_register[A];
    endcase
end
```

### Register File and Instruction Mem
For these components, I worked closely with their creators to refine certain parts and modified their styling to ensure ease of understand. Bruno and I also ensured that these components would be functional with our control unit and data memory. This involved changing the clock detecting edge to be negative on our register file (read and write on different edges) and reorganising logic as seen in the commit and code snippet below:
- [Reorganised regfile.sv](https://github.com/vishesh32/RISC-V-Team1/commit/0eff28f042d5ece8a8a160522d1007df79a89b40)
```
always @(negedge clk) begin
    if (A3 != 0) begin
        case (WE3)
            3'b001: reg_array[A3] <= WD3; // write
            3'b010: reg_array[A3] <= {{16{WD3[15]}}, WD3[15:0]}; // lh - sign extend
            3'b011: reg_array[A3] <= {{24{WD3[7]}}, WD3[7:0]}; // lb - sign extend
            3'b111: reg_array[A3] <= {{24'b0}, WD3[7:0]};   //  lbu - zero extend
            3'b110: reg_array[A3] <= {16'b0, WD3[15:0]}; // lhu - zero extend
            default: reg_array[A3] <= reg_array[A3];
        endcase
    end
```

For instruction mem, I mainly rewrote the parameters and modified the input and output logic as well as the size of the array. I had originally directly assigned the instruction output to be an address in the rom array, however, after discussing with Bruno, we came to the conclusion of implementing a single assign instruction to account for all 4 different parts (this is best demonstrated in the code snippet below)
- [New instruction mem](https://github.com/vishesh32/RISC-V-Team1/commit/e31e78940a98fd20bc7fe8a1b3df8d07b401541e)
```
logic [ADDRESS_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];
// this is the core idea of splitting into 4, 8 bit width parts
assign Instr_o = {{rom_array[addr_i+3]}, {rom_array[addr_i+2]}, {rom_array[addr_i+1]}, {rom_array[addr_i]}};
```

### Debugging
Throughout the development of the single cycle CPU, I also made numerous bug fixes and a plethora of reorganisation. This included adding in functional branch logic, fixing ALU instructions, ensuring that the right opcodes corresponded with the right instructions and similar alternatives. During the debugging process, I worked both Vishesh and Anson to review error messages and warning thrown as well as inspecting the GTKWave sheets to trace the data in registers and different wires. Evidence demonstrating this is hyperlinked below:
- [Debugging sizing error in regfile](https://github.com/vishesh32/RISC-V-Team1/commit/5ff7372e4a08abd6bcdda4dd846755f4b275f957)
- [Debugging negedge clock in regfile](https://github.com/vishesh32/RISC-V-Team1/commit/ad2adb8537f4c680262bcc5aa0e0e75868ada94b)
- [Debugging lui instruction](https://github.com/vishesh32/RISC-V-Team1/commit/9a23e9b43b975b82262243949680b0667e7a6d99)
- [Debugging the ImmSrc to 3 wide](https://github.com/vishesh32/RISC-V-Team1/commit/e4497dfd35dd1d1710fb21b7332aa8ea9c254514)
- [Fixed misdeclaration of bits](https://github.com/vishesh32/RISC-V-Team1/commit/1731b61a9ade405087ab320799c796d4e8933eef)
- [Further debugging of R-type instructions](https://github.com/vishesh32/RISC-V-Team1/commit/8cfc5f7b21506f4a5561cdc0dcf4e22912592ebb)


### Restyling

## Pipelining
I reworked many components within this section of our project as we realised that there were certain errors and misorganisation within our single cycle that would hinder our pipelined development, I worked closely with Bruno to create pipelining registers and ensured that we were able to achieve hazard handling. Building upon Bruno's initial pipelining ideas, I took the initiative to split the pipelining registers into control unit and datapath pipeline registers, this would allow for clarity and ease of modification. This is shown in the code sample and commits below:
- [Example of a control unit pipeline register]()
- [Example of a data path pipeline register]()
- [Datapath top module]()
- [Controller top module](https://github.com/vishesh32/RISC-V-Team1/commit/bead218ee0735f435d95a3c69ae8dc6be4eb9044)
- [Top RISCV file draft](https://github.com/vishesh32/RISC-V-Team1/commit/bd0264c0bc639c614dfc2eb1adbea6710c489caf)
These were then modified to suit the extra signals and implemented as submodules in larger files during our debugging and testing process. I also worked with Anson and Bruno to create a hazard unit draft, this was then broken down into further sub modules to trace and debug however, the overall logic and signals still remain the same. 
- [New hazard unit draft](https://github.com/vishesh32/RISC-V-Team1/commit/1887fae085c100c83dc7e0fd9ec2c8d7ff8e5062)


Aside from this, I made changes to the control unit from the single cycle, the control unit had previously combined the aludecoder and the main decoder together, making it difficult to debug and sometimes hard to trace errors. To resolve this, I wrote split both decoders up and created a new controller (top control file). This was well received by all members within my team and I felt that it made it much easier to trace any errors and make changes. The changes made are shown below:
- [New ALU decoder]()
- [New Main decoder]()
- [Control unit working with decoders]()


### Conclusions and Evaluations

## Review
All in all this project was an eye opening experience for me, being my first collaborative software project that involved more than 2 members, I discovered the difficulties when working in a large team in terms of coordination. This eventually developed over time and I believe that the overall team dynamic greatly improved towards the final stages of our project. 

There were numerous times where incorrect naming of input and output ports and inconsistent declaration of port widths caused confusing errors and warnings which led to hours of debugging. Nevertheless, being able to recognise these errors and make the correct changes to finally see the desired output was highly fulfilling. 

Learning to organise my verilog files and write them in a style which is easily understood by my teammates to allow for ease of debugging was also a new skill which I developed throughout this project. I enjoyed the continuous development of the CPU, focusing on the completion of single cycle, followed by implementations of pipelining which then evolved into completed hazard handling with pipelining. This "growth" of our CPU was interesting to see and I enjoyed seeing the different components change and discussing different implementations of modules to allow for the completion of each stage. 

Through this project, I feel that my understand of the RISC-V cpu has greatly deepened and I now have a degree of confidence in writing System Verilog files and analysing CPU designs and logic. Aside from this learning more about correctly detailing my git commits was also important for future collaborative projects and further developed upon my existing knowledge from personal and past group projects. Additionally learning to document my files and explaining my System Verilog files and attmepting to join my modules with other members taught me to efficiently converse my ideas and break down complex components to avoid being overwhelmed. 

Lastly learning to communicate and plan as a team was vital and I definitely saw this aspect of the project growing greatly for all members within the team as we understood each others work flow and worked on more problems together. 

To conclude, this project was a unique learning experience where I gained profound insight into the material covered in lectures and built upon the skills from the previous labs I had completed. The networking and collaborative skills I developed within this project will also be valuable in future endeavours and projects. 

## What I Would Change
