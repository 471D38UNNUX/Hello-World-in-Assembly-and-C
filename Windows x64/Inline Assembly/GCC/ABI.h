#include <stdio.h>

const char * Hello(char msg[], size_t len)
{
    asm volatile
    (
        "sub $40, %%rsp\n"
        
        "mov $-11, %%rcx\n"
        "call GetStdHandle\n"
        "mov %%rax, %%rcx\n"
        "mov %0, %%rdx\n"
        "mov %1, %%r8\n"
        "xor %%r9, %%r9\n"
        "movq $0, 32(%%rsp)\n"
        "call WriteConsoleA\n"

        "add $40, %%rsp\n"

        "xor %%rcx, %%rcx\n"
        "call ExitProcess\n"
        :
        : "r"(msg), "r"(len)
        : "%rax", "%rcx", "%rdx", "%r8", "%r9", "memory"
    );
    
    return 0;
}
