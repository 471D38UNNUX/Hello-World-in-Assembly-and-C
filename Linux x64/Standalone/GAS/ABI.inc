.section .note.GNU-stack,"",@progbits

.section .data
    msg:
        .asciz "Hello World"
        len = . - msg - 1

.section .text
    .global Hello

Hello:
    mov $1, %rax
    mov $1, %rdi
    mov $msg, %rsi
    mov $len, %rdx
    syscall

    mov $60, %rax
    xor %rdi, %rdi
    syscall
