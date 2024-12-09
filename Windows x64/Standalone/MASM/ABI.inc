; Remove this comment for assembling with command line
; includelib kernel32.lib 

GetStdHandle proto
ExitProcess proto
WriteConsoleA proto

.data
    msg db "Hello, World!"

.code
Hello proc
    sub     rsp, 40
    
    mov     ecx, -11
    call    GetStdHandle

    mov     ecx, eax
    lea     rdx, msg
    mov     r8d, lengthof msg
    xor     r9d, r9d
    mov     byte ptr 32[rsp], 0
    call    WriteConsoleA

    add     rsp, 40

    ret
Hello endp
