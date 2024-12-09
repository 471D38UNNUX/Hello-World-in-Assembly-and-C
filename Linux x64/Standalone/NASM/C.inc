extern printf, exit

section .note.GNU-stack

section .data
    msg db 'Hello, World!', 10, 0

section .text
Hello:
    sub     rsp, 8

    lea     rdi, [rel msg]
    call    [rel printf wrt ..got]

    add     rsp, 8

    ret
