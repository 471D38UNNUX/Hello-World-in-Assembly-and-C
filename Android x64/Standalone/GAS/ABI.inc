.section    .note.GNU-stack, "", @progbits

.section    .data
msg:
    .asciz "Hello, World!"
.equ len, . - msg

.section    .text
Hello:
    mov $1, %eax
    mov $1, %dil
    lea msg(%rip), %rsi
    mov $len, %edx
    syscall

    ret
