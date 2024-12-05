format elf64

public Hello

section	'.note.GNU-stack'

section	'.code' executable
Hello:
    mov     rbx, rdi
	mov     ebp, esi
	mov     eax, 1
    mov     edi, 1
	mov     rsi, rbx
	mov     edx, ebp
    syscall

    ret
