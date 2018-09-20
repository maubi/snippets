.section .data
# there are no data
.section .text
 .global _start			# start of the program

_start:
 movl $1, %eax			# exit() system call
 movl $254, %ebx		# return value
 int $0x80				# exec the system call
