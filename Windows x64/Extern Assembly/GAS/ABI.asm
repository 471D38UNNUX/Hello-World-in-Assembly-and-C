.global Hello

.section	.text
Hello:
	sub		$40, %spl

	mov     %rcx, %rbx
    mov     %edx, %ebp
    mov		$-11, %ecx
	call	GetStdHandle

	mov		%eax, %ecx
	mov		%rbx, %rdx
	mov		%ebp, %r8d
	xor		%r9d, %r9d
	movb	$0, 32(%rsp)
	call	WriteConsoleA

	add		$40, %spl

	ret
