.section    .note.GNU-stack, "", @progbits

.section    .data
msg:
    .asciz "Hello, World!\n"

.section    .text
Hello:
    sub     $8, %rsp

    lea     msg(%rip), %rdi
    call    printf

    add     $8, %rsp

    ret
