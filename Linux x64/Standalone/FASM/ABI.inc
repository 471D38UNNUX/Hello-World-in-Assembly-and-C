segment readable writable

msg db 'Hello World', 0
len = $ - msg

segment readable executable
Hello:
    mov rax, 1
    mov rdi, 1
    lea rsi, [msg]
    lea rdx, [len]
    syscall

    mov rax, 60

    xor rdi, rdi

    syscall
