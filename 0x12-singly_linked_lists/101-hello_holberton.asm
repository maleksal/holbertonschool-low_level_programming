; import printf ( C function )	
	extern printf

	section .data

text_msg	db	"Hello, Holberton",0
format		db	"%s", 10, 0

	global main

main:

	push rbp

	mov	rsi, text_msg
	mov	rdi, format
	mov	rax, 0
	call	printf

	pop	rbp

	mov	rax,0
	ret

	
