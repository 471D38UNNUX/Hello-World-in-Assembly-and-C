void Hello(char msg[])
{
    asm volatile
    (
        "mov %0, %%rdi\n"
        "call printf\n"
        
        "leave\n"
        
        "ret\n"
        :
        : "r"(msg)
        : "%rdi"
    );
}
