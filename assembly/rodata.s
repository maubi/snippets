.section .data

.section .bss

.section .rodata
const1:
 .long 12 

.section .text
.globl _start

_start:
 #movl $13,const1  SEGFAULT

 movl const1,%ebx
 movl $1,%eax
 int $0x80
