global _start

section .rodata
msg: 	db "Hello, Holberton", 10
msglen: 	equ $ - msg


section .text
	global main

main:

mov rdi, 1
mov rsi, msg
mov rdx, msglen
mov rax, 1
syscall

;; return 0

mov rax, 0
ret
