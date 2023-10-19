section .data
	hello: db "Hello, Holberton", 10 ; 10 is new line
	helloLen: equ $-hello

section .text
	global main

	main:
		; Write to stdout
		mov rax, 1
		mov rdi, 1
		mov rsi, hello
		mov rdx, helloLen
		syscall

		; Exit the program
		mov rax, 60
		mov rdi, 0
		syscall
