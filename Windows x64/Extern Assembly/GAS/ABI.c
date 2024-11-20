#include <Windows.h>

extern void Hello(char * msg, int len);

int main()
{
    Hello("Hello, World!", sizeof("Hello, World!"));
    
    ExitProcess(0);
}
