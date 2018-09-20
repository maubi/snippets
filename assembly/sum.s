.section .data
data_list:
 .long 10,20,30

.section .text
 .globl _start

_start:
 movl $0, %edi						# initialize index
 movl $0, %ebx						# initialize result

start_loop:
 cmpl $3, %edi						# have we reached the end of the list?
 je exit_loop

 addl data_list(,%edi,4), %ebx		# add the current element in the list to the total

 incl %edi							# increment index
 jmp start_loop						# go to next iteration
exit_loop:
 movl $1, %eax						# select exit() syscall
 int $0x80							# exec the syscall

