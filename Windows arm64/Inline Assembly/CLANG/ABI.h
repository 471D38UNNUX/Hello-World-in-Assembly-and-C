#include <Windows.h>

extern inline void  Hello(char * msg, long long len)
{
    __asm__ volatile
    (
        "str    lr, [sp, -16]!\n"
        
        "mov    w0, -11\n"
        "bl     GetStdHandle\n"

        "mov    x1, %0\n"
        "mov    x2, %1\n"
        "mov    w3, wzr\n"
        "mov    w4, wzr\n"
        "bl     WriteConsoleA\n"

        "ldr    lr, [sp], 16\n"
        :
        : "r"(msg), "r"(len)
        : "x0", "x1", "x2", "x3", "x4", "x8"
    );
};
