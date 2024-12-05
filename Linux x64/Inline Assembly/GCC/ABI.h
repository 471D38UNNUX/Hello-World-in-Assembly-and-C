#include <unistd.h>
#include <sys/syscall.h>

extern inline void  Hello(char * msg, int len)
{
    asm volatile
    (
        "mov    $1, %%eax\n"
        "mov    $1, %%edi\n"
        "mov    %0, %%rsi\n"
        "mov    %1, %%edx\n"
        "syscall\n"
        :
        : "r"(msg), "r"(len)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );
}
