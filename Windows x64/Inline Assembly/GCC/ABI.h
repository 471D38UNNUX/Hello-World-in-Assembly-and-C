#include <Windows.h>

extern inline void Hello(char * msg, int len)
{
    __asm__ volatile
    (
        "mov    $-11, %%ecx\n"
        "call   GetStdHandle\n"

        "mov    %%eax, %%ecx\n"
        "mov    %0, %%rdx\n"
        "mov    %1, %%r8d\n"
        "xor    %%r9d, %%r9d\n"
        "movb   $0, 32(%%rsp)\n"
        "call   WriteConsoleA\n"
        :
        : "r"(msg), "r"(len)
        : "%rax", "%rcx", "%rdx", "%r8", "%r9"
    );
};
