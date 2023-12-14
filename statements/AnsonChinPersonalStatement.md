# Chin Jun Yen (Anson) Personal Statement 

## Single Cycle Processor 

### Introduction
I was primarily tasked with figuring out most of the ALU and RegFile operations, I occasionally worked with Bruno (duasob) to figure out the appropriate logic between Control Unit. 

We initially started slower than planned but our teamwork improved throughout the course of this project. 

> Side note: I tend to commit in large goes in the beginning so apologies that I can separate that out more

### ALU 
For the ALU section, I implemented 7 arithmetic functions to perform ADD, SUB, AND, OR, XOR ,SLL, SRL and of course their respective immediate operations

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

### Control Unit 


### F1 Assembly Code 
I mainly implement the instruction memory through setting up the Makefile provided in the project brief. I then teamed up with Vishesh, to work on the logic of the F1 assembly code and ensure that it ran on vbuddy.


### Debugging 
Alongside Vishesh, I helped debug multiple issues encountered in the beginning of testing single cycle. 

### Miscellaneous Contributions
- I wrote the README.md file alongside all the personal statements 
- 


## Pipelined Processor



### Debugging



## Summary
To wrap up a great term so far, I am really happy with what I have learnt in this module, including learning how to balance the dynamic of our group and 


### What I learnt 
#### How to use github
From writing in this repo to gitignores to dealing with merge conflicts and branching, I feel like this project has really taught me the ins and outs of using github. 

#### How to debug efficiently
I feel that the sequential logic required for debugging pipelining was definitely difficult 

### What I could do better 

