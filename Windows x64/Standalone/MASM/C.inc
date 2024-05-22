includelib libcmt.lib

printf PROTO

.data
    msg BYTE "Hello World",0

.code
Hello PROC
    lea rcx, msg
    call printf

    ret
Hello ENDP
