#include "ABI.h"

int main()
{
    Hello("Hello, World!", sizeof("Hello, World!"));
    
    syscall(SYS_exit, 0);
}
