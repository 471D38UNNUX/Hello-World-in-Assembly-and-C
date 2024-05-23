section '.note.GNU-stack' align 1
    db 0

extrn printf

section '.data' writeable

msg db 'Hello World', 0

section '.code' executable

Hello:
    lea rdi, [msg]
    call printf

    ret
