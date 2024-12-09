extern printf

global Hello

section .text
Hello:
    sub     rsp, 40

    call    printf

    add     rsp, 40

    ret
