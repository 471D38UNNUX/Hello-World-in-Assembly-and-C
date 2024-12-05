#include <Windows.h>

void    Hello(char * msg, int size)
{
    WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), msg, size, NULL, NULL);
}
