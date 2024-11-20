extern printf

global Hello

section .text
Hello:
    sub     spl, 40

    call    printf

    add     spl, 40

    ret
