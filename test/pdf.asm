
pdf.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	00c000ef          	jal	ra,bfc0000c <init> (File Offset: 0x100c)

bfc00004 <forever> (File Offset: 0x1004):
forever():
bfc00004:	010000ef          	jal	ra,bfc00014 <build> (File Offset: 0x1014)
bfc00008:	ffdff0ef          	jal	ra,bfc00004 <forever> (File Offset: 0x1004)

bfc0000c <init> (File Offset: 0x100c):
init():
bfc0000c:	0ff00293          	addi	t0,zero,255
bfc00010:	00008067          	jalr	zero,0(ra)

bfc00014 <build> (File Offset: 0x1014):
build():
bfc00014:	00000513          	addi	a0,zero,0
bfc00018:	00000313          	addi	t1,zero,0

bfc0001c <_loop2> (File Offset: 0x101c):
_loop2():
bfc0001c:	00131313          	slli	t1,t1,0x1
bfc00020:	00130313          	addi	t1,t1,1
bfc00024:	00030513          	addi	a0,t1,0
bfc00028:	fe551ae3          	bne	a0,t0,bfc0001c <_loop2> (File Offset: 0x101c)
bfc0002c:	00008067          	jalr	zero,0(ra)

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1030):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <base_pdf-0xec> (File Offset: 0x1044)
   c:	0014                	.2byte	0x14
   e:	0000                	.2byte	0x0
  10:	7205                	.2byte	0x7205
  12:	3376                	.2byte	0x3376
  14:	6932                	.2byte	0x6932
  16:	7032                	.2byte	0x7032
  18:	5f30                	.2byte	0x5f30
  1a:	326d                	.2byte	0x326d
  1c:	3070                	.2byte	0x3070
	...
