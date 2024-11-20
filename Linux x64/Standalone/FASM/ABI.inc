segment readable writable
    msg db 'Hello, World!', 0
    len = $ - msg

segment readable executable
Hello:
    mov al, 1
    mov dil, 1
    lea rsi, [msg]
    mov dl, len
    syscall

    ret
