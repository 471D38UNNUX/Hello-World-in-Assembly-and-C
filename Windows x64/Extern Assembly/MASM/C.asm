printf proto

.code
Hello proc
    sub     rsp, 40

    call    printf

    add     rsp, 40

    ret
Hello endp
end