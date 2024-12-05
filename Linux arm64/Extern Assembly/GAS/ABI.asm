.section    .data

.global Hello

.section    .text
Hello:
    mov x9, x0
    mov w10, w1
    mov w8, 64
    mov w0, 1
    mov x1, x9
    mov w2, w10
    svc 0

    ret

