.section    .data
msg:
    .asciz "Hello, World!"
.equ len, . - msg

.section    .text
Hello:
    mov     w8, 64
    mov     w0, 1
    adrp    x1, msg
    add 	x1, x1, : lo12 : msg
    ldr 	w2, = len
    svc     0

    ret

