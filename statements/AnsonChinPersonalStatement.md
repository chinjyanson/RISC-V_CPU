# Chin Jun Yen (Anson) Personal Statement 

## Single Cycle Processor 

### Introduction
I was primarily tasked with figuring out most of the ALU and RegFile operations, I occasionally worked with Bruno (duasob) to figure out the appropriate logic between Control Unit. 

We initially started slower than planned but our teamwork improved throughout the course of this project. 

> Side note: I tend to commit in large goes in the beginning so apologies that I can separate that out more

### ALU 
For the ALU section, I implemented 7 arithmetic functions to perform ADD, SUB, AND, OR, XOR ,SLL, SRL and of course their respective immediate operations. There were no set instructions that I needed to implement but the case for ALUctrl was decided between me and Bruno (who was working on the control unit). 

```
case (ALUctrl_i)
    3'b000: ALUResult_o = SrcA_i + SrcB_i;      // addition 
    3'b001: ALUResult_o = SrcA_i - SrcB_i;      // subtraction
    3'b010: ALUResult_o = SrcA_i & SrcB_i;      // and
    3'b011: ALUResult_o = SrcA_i | SrcB_i;      // or
    3'b100: ALUResult_o = SrcA_i ^ SrcB_i;      // xor
    3'b101: ALUResult_o = SrcA_i << SrcB_i[4:0];// left shift
    3'b110: ALUResult_o = SrcA_i >> SrcB_i[4:0];// right shift
    3'b111: ALUResult_o = SrcB_i;               // unknown (remain the same)

    default: ALUResult_o = 0;
endcase
```

I then had to change modify the file abit since they needed to implement an LUI instruction. This was done through the commit [here]().

There is also a line to check if the two inputs to the ALU is the same denoted by the output Zero
```
assign Zero = (SrcA == SrcB)
```

I had initially wrote my ALU in Lab 4 when designing a reduced RISC-V architecture. Here are some of the important commmits for the ALU:
- [Finished alu.sv with all its operations, regfile and more](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/149dd75bb8822a1b6ed38fe4879ad507ace10c42#diff-7328527108921190114124240be003807f1752fc4f983e48a6afe6d6bcb0f614)
- [Finishing ALU_top.sv file](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/06f4e2aefb3499e4651b3a129d9ab2ab6f63004e)
- [Changed ALU operations to suit the new instructions](https://github.com/vishesh32/RISC-V-Team1/commit/690fd0438bfb9e7dc2e17c22f9194c5ea6815491)
- [New architecture for ALU_top, added data_mem and mux4](https://github.com/vishesh32/RISC-V-Team1/commit/251aa52d09a5efadf68209dec9f10d0415f0d3f8)
- []


### Register File
First thing I did was to break the Instr out via bitwise manipulation. Then I built a 256 x 32 Register file which is primarily used for storing data and intermediate values during computation. 


### F1 Assembly Code 
I mainly implement the instruction memory through setting up the Makefile provided in the project brief. I then teamed up with Vishesh, to work on the logic of the F1 assembly code and ensure that it ran on vbuddy.

- [Making the F1 Program through assembly code](https://github.com/vishesh32/RISC-V-Team1/commit/a00343487c6cf87d0d8e36b34d373588a307f7be#diff-6a703220991bb4034518d084a3fd94caf53c2d1a9a0c177ea610cca8d93bf7d0)

### Debugging 
Alongside Vishesh, I helped debug multiple issues encountered in the beginning of testing single cycle. 

### Miscellaneous Contributions
- I wrote the README.md file alongside all the personal statements 
- 


## Pipelined Processor
For Pipelined Processor, I was involved in almost everything, primarily focused on debugging and the hazard unit. 

As for debugging, I also made numerous debugs across pipelining as we ran into alot of errors constantly

### Debugging
Relevant commits
- [Debugging Control top](https://github.com/vishesh32/RISC-V-Team1/commit/6a5153dbbdc3de2d2cc8b199c7576bb20eb2ebd6)
- [modified logic of hazard stall](https://github.com/vishesh32/RISC-V-Team1/commit/d466727cae84f7c8ef9889c299170fc60c466f1a)
- [Debugging ALUdecoder and Control Unit](https://github.com/vishesh32/RISC-V-Team1/commit/2add451b24ac41329ae7230e40262999a71cf82e)


## Summary
To wrap up a great term so far, I am really happy with what I have learnt in this module, including learning how to balance the dynamic of our group and 


### What I learnt 
#### How to use github
From writing in this repo to gitignores to dealing with merge conflicts and branching, I feel like this project has really taught me the ins and outs of using github. 

#### How to debug efficiently
I feel that the sequential logic required for debugging pipelining was definitely difficult 

### What I could do better 

