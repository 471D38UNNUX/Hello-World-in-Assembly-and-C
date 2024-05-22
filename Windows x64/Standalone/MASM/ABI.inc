includelib kernel32.lib

GetStdHandle PROTO
ExitProcess PROTO
WriteConsoleA PROTO

.data
msg BYTE "Hello World",0

.code
Hello PROC
    sub rsp, 40
    mov rcx, -11
    call GetStdHandle

    mov rcx, rax
    lea rdx, msg
    mov r8, LENGTHOF msg - 1
    xor r9, r9
    mov qword ptr 32[rsp], 0
    call WriteConsoleA

    xor rcx, rcx
    call ExitProcess

    add rsp, 40
Hello ENDP
