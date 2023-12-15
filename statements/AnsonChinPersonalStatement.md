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
First thing I did was to break the Instr out via bitwise manipulation. Then I built a 32 x 32 Register file which is primarily used for storing data and intermediate values during computation. We only need 32 register for the single cycle, as shown in Figure 1 below.
![Fig 1](/img/reg.png)
There was also some further logic required to make sense of the load instructions which included:
```
case(WE3)
    3'b001: begin //write
        reg_array[A3] <= WD3;
    end
    3'b010: begin //lh -sign extended
        reg_array[A3] <= {{16{WD3[15]}}, WD3[15:0]};
    end
    3'b011: begin //lb - sign extended
        reg_array[A3] <= {{24{WD3[7]}}, WD3[7:0]};
    end
    3'b111: begin  //lbu - zero extended
        reg_array[A3] <= {{24'b0}, WD3[7:0]};
    end 
    3'b110: begin  //lhu - zero extended
        reg_array[A3] <= {16'b0, WD3[15:0]};
    end
    default: reg_array[A3] <= reg_array[A3];
endcase
```

Some meaningful commits include:
- [making the register file](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/149dd75bb8822a1b6ed38fe4879ad507ace10c42#diff-7328527108921190114124240be003807f1752fc4f983e48a6afe6d6bcb0f614)

### F1 Assembly Code 
I mainly implement the instruction memory through setting up the Makefile provided in the project brief. I then teamed up with Vishesh, to work on the logic of the F1 assembly code and ensure that it ran on vbuddy.

- [Making the F1 Program through assembly code](https://github.com/vishesh32/RISC-V-Team1/commit/a00343487c6cf87d0d8e36b34d373588a307f7be#diff-6a703220991bb4034518d084a3fd94caf53c2d1a9a0c177ea610cca8d93bf7d0)

### Debugging 
Alongside Vishesh, I helped debug multiple issues encountered in the beginning of testing single cycle. We ran into multiple issues consisting of but not limited to: 

We primarily used GTKWave to debug and follow the errors across the architecture. 
Here are some of the more significant debug commits:
- []()

I also ran the different data mem files and collected images and data with Vishesh, modifying the testbench to create a desired plot on vbuddy (since we ran into a problem where the cycles didn't allow us to get a good view of the plot).

### Miscellaneous Contributions
- I wrote the README.md file alongside all the personal statements 
- I organised the structure of the repository


## Pipelined Processor
For Pipelined Processor, I was involved in almost everything, primarily focused on debugging and the hazard unit. 

Some meaningful commits include:
- [Created Register File and Processor Topfile](https://github.com/vishesh32/RISC-V-Team1/commit/36a1e5086ff274c1f2b71f8fc6163daeb5647ad9#diff-32f0fcbc20f0ad67a7045785b75b8ae72ca57e810b6167d59716f05b7310f567)
- [Created first version of Hazard Unit logic](https://github.com/vishesh32/RISC-V-Team1/commit/f8f4e5cb57ebea51b256334b9790c15ed19d52de)
- [Formatting of the cpu topfile](https://github.com/vishesh32/RISC-V-Team1/commit/4afddbaddd8f836e488e5bcb020256a4698d9920)
- [Negative edge for regfile and cpu topfile changes](https://github.com/vishesh32/RISC-V-Team1/commit/93fac1e050d0005bf4ce97e64385c4beddeb367c#diff-32f0fcbc20f0ad67a7045785b75b8ae72ca57e810b6167d59716f05b7310f567)

As for debugging, I also made numerous debugs across pipelining as we ran into alot of errors constantly

### Debugging
Relevant commits
- [Debugging Control top](https://github.com/vishesh32/RISC-V-Team1/commit/6a5153dbbdc3de2d2cc8b199c7576bb20eb2ebd6)
- [modified logic of hazard stall](https://github.com/vishesh32/RISC-V-Team1/commit/d466727cae84f7c8ef9889c299170fc60c466f1a)
- [Debugging ALUdecoder and Control Unit](https://github.com/vishesh32/RISC-V-Team1/commit/2add451b24ac41329ae7230e40262999a71cf82e)
- [Debugging Hazard Unit](https://github.com/vishesh32/RISC-V-Team1/commit/54c775c9d6cd3558cd70d804d0ab893ca87b3e48)


## Summary
To wrap up a great term so far, I am really happy with what I have learnt in this module, I feel like having no prior knowledge in github, system verilog, or RV321 instructions, I felt the learning curve for this project was very steep but also very rewarding. I'd describe the most interesting part of the project (as well as the most challenging) as trying to understand the hazard detection in the pipelined version and the appropriate measures to continue producing the correct results. Thank you so much for making it this far and reading my read me file. I'll now summarize my contributions with a short reflection section:

### What I learnt 
#### How to use github
From writing in this repo to gitignores to dealing with merge conflicts and branching, I feel like this project has really taught me the ins and outs of using github. 

#### How to debug efficiently
I feel that the sequential logic required for debugging pipelining was definitely difficult 

#### Balancing workload between team members
I think this project really emphazed more the importance of teamwork than any other group project up till now. 

### What I could do better 
- As a team one thing that could have been better was co author credits, alot of times we would work together on a feature on one laptop, but the commits never included everyone, only the person committing. 
- 

