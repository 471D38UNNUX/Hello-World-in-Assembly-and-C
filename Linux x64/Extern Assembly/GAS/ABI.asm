.global Hello

.section    .note.GNU-stack, "", @progbits

.section    .text
Hello:
    mov	    %rdi, %rbx
	mov	    %esi, %ebp
	mov     $1, %eax
    mov     $1, %edi
    mov	    %rbx, %rsi
    mov     %ebp, %edx
    syscall

    ret
