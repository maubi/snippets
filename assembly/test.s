.section .data
int1: .long 0xFFFF

.section .text
.globl _start

_start:
 movl $int1,%edx

 movl $0,%ebx
 movl $1,%eax
 int $0x80
