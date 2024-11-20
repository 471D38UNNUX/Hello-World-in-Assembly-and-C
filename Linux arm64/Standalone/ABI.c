#include <unistd.h>
#include <sys/syscall.h>

int main()
{
    syscall(SYS_write, STDOUT_FILENO, "Hello, World!", sizeof("Hello, World!"));

    syscall(SYS_exit, 0);
}
