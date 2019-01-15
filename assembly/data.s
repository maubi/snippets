.section .data
var1:
 .long 10

.section .text
.globl _start

_start:

 movl $12,var1		# .data is a read/write section
 movl var1,%ebx
 movl $1,%eax
 int $0x80
