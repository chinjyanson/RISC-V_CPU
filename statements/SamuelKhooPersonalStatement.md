# Samuel Khoo Ing Shin Personal Statement 

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

```

### Debugging
Throughout the development of the single cycle CPU, I also made numerous bug fixes and a plethora of reorganisation. This included adding in functional branch logic, fixing ALU instructions, ensuring that the right opcodes corresponded with the right instructions and similar alternatives. During the debugging process, I worked both Vishesh and Anson to review error messages and warning thrown as well as inspecting the GTKWave sheets to trace the data in registers and different wires. Evidence demonstrating this is hyperlinked below:
- [Debugging sizing error in regfile](https://github.com/vishesh32/RISC-V-Team1/commit/5ff7372e4a08abd6bcdda4dd846755f4b275f957)
- [Debugging negedge clock in regfile](https://github.com/vishesh32/RISC-V-Team1/commit/ad2adb8537f4c680262bcc5aa0e0e75868ada94b)
- [Debugging lui instruction](https://github.com/vishesh32/RISC-V-Team1/commit/9a23e9b43b975b82262243949680b0667e7a6d99)
- [Debugging the ImmSrc to 3 wide](https://github.com/vishesh32/RISC-V-Team1/commit/e4497dfd35dd1d1710fb21b7332aa8ea9c254514)
- [Fixed misdeclaration of bits](https://github.com/vishesh32/RISC-V-Team1/commit/1731b61a9ade405087ab320799c796d4e8933eef)
- [Further debugging of R-type instructions](https://github.com/vishesh32/RISC-V-Team1/commit/8cfc5f7b21506f4a5561cdc0dcf4e22912592ebb)

## Pipelining
I worked on reformatting most components within this section of our project, I also worked closely with Bruno to create pipelining registers and ensure that we were able to achieve hazard handling. Building upon Bruno's initial pipelining ideas, I took the initiative to split the pipelining registers into control unit and datapath pipeline registers, this would allow for clarity and ease of modification. This is shown in the code sample and commits below:


Aside from this, I made changes to the control unit from the single cycle, the control unit had previously combined the aludecoder and the main decoder together, making it difficult to debug and sometimes hard to trace errors. To resolve this, I wrote split both decoders up and created a new controller (top control file).