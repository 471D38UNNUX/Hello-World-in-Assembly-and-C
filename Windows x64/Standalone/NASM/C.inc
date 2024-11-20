extern printf, exit

section .data
    msg db 'Hello, World!', 0

section .text
Hello:
    sub     spl, 40
    
    lea     rcx, [rel msg]
    call    printf

    add     spl, 40

    ret
