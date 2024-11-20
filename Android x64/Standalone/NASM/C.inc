extern printf, exit

section .note.GNU-stack

section .data
    msg db 'Hello, World!', 10, 0

section .text
Hello:
    sub     spl, 8

    lea     rdi, [rel msg]
    call    [rel printf wrt ..got]

    add     spl, 8

    ret
