#include <stddef.h>

void Hello(char msg[], size_t len)
{
    asm volatile
    (
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "mov %0, %%rsi\n"
        "mov %1, %%rdx\n"
        "syscall\n"

        "mov $60, %%rax\n"
        "xor %%rdi, %%rdi\n"
        "syscall\n"
        :
        : "r"(msg), "r"(len)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );
}
