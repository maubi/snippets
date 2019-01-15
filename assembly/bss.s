.section .bss
 .lcomm var1,8

.section .text
.globl _start

_start:
 movq $0xAABBCCDD,var1	# assign to 'var1'					*WRONG, but why?*
 movq var1,%rdx			# copy to RDX for inspection

 # exit
 mov $0,%rbx
 mov $1,%rax
 int $0x80
