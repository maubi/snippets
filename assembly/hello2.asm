section     .text
    global  _start 	; must be declared for linker
_start:            	; tells linker entry point
    mov ebx,1		; file descriptor (stdout)
    mov eax,4		; system call number (sys_write)
    mov edx,len		; message length
    mov ecx,msg		; message to write
    int 0x80		; call kernel

	mov ebx,1
	mov eax,4
	mov edx,len2
	mov ecx, msg2
	int 0x80

    mov eax,1		; system call number (sys_exit)
    int 0x80		; call kernel

section     .data
msg		db 'Hello, World!',	0xa		; our dear string
len equ $ - msg					; length of our dear string
msg2	db 'Lain Iwakura',	0xa		; another string
len2 equ $ - msg2
