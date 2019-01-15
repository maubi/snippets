.section .data

.section .bss

.section .rodata

.section .text
.globl _start

_start:
 # push function arguments to the stack in reverse order
 pushl $10				# second argument
 pushl $20				# first argument

 call func

 movl %eax,%ebx			# fetch result from EAX and give it back as a return value
 movl $1,%eax			# select exit() syscall
 int $0x80				# exit from the program

 func:
 # names for offsets onto the stack
 .equ VAR1, -4			# offset for the first local variable
 .equ VAR2, -8			# offset for the second local variable
 .equ PARAM1, 12		# offset for first in-parameter
 .equ PARAM2, 8			# offset for second in-parmeter

 # initialize
 pushl %ebp				# save old EBP
 movl %esp,%ebp			# copy stack pointer to EBP for use in function
 
 subl $8,%esp			# reserve space for local variables onto the stack

 # assign values to local variables
 movl $30,VAR1(%ebp)
 movl $40,VAR2(%ebp)

 # initialize result
 xor %eax,%eax

 # calculate result
 addl VAR1(%ebp),%eax
 addl VAR2(%ebp),%eax
 addl PARAM1(%ebp),%eax
 addl PARAM2(%ebp),%eax
 
 # return
 movl %ebp,%esp			# restore ESP
 popl %ebp				# restore old EBP
 ret
