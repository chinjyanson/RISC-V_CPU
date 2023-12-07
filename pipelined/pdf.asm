
pdf.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	010000ef          	jal	ra,bfc00010 <init> (File Offset: 0x1010)
bfc00004:	024000ef          	jal	ra,bfc00028 <build> (File Offset: 0x1028)

bfc00008 <forever> (File Offset: 0x1008):
forever():
bfc00008:	044000ef          	jal	ra,bfc0004c <display> (File Offset: 0x104c)
bfc0000c:	ffdff0ef          	jal	ra,bfc00008 <forever> (File Offset: 0x1008)

bfc00010 <init> (File Offset: 0x1010):
init():
bfc00010:	10000593          	addi	a1,zero,256

bfc00014 <_loop1> (File Offset: 0x1014):
_loop1():
bfc00014:	0ff00593          	addi	a1,zero,255
bfc00018:	00000513          	addi	a0,zero,0
bfc0001c:	10058023          	sb	zero,256(a1)
bfc00020:	feb50ae3          	beq	a0,a1,bfc00014 <_loop1> (File Offset: 0x1014)
bfc00024:	00008067          	jalr	zero,0(ra)

bfc00028 <build> (File Offset: 0x1028):
build():
bfc00028:	000105b7          	lui	a1,0x10
bfc0002c:	00000613          	addi	a2,zero,0
bfc00030:	10000693          	addi	a3,zero,256
bfc00034:	1f400713          	addi	a4,zero,500

bfc00038 <_loop2> (File Offset: 0x1038):
_loop2():
bfc00038:	00151513          	slli	a0,a0,0x1
bfc0003c:	00150513          	addi	a0,a0,1
bfc00040:	0ff00293          	addi	t0,zero,255
bfc00044:	fe551ae3          	bne	a0,t0,bfc00038 <_loop2> (File Offset: 0x1038)
bfc00048:	00008067          	jalr	zero,0(ra)

bfc0004c <display> (File Offset: 0x104c):
display():
bfc0004c:	00000593          	addi	a1,zero,0
bfc00050:	0ff00613          	addi	a2,zero,255

bfc00054 <_loop3> (File Offset: 0x1054):
_loop3():
bfc00054:	1005c503          	lbu	a0,256(a1) # 10100 <base_data+0x100> (File Offset: 0xffffffff40411100)
bfc00058:	00158593          	addi	a1,a1,1
bfc0005c:	fec59ce3          	bne	a1,a2,bfc00054 <_loop3> (File Offset: 0x1054)
bfc00060:	00008067          	jalr	zero,0(ra)

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1064):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <base_pdf-0xec> (File Offset: 0x1078)
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
