void Hello(char msg[])
{
    asm volatile
    (
        "mov %0, %%rcx\n"
        "call printf\n"
        
        "ret\n"
        :
        : "r"(msg)
        : "%rcx"
    );
}
