### How to build
----------------

#### With Clang
---------------

-   Open cmd
-   git clone this repo
-   cd this path
-   Change _start into main entry in ABI.asm/C.asm
-   clang ABI.asm/C.asm -o namefile.exe

#### With GNU Assembler
-----------------------

-   Open cmd
-   git clone this repo
-   cd this path
-   Change _start into main entry if using GCC/Clang or mainCRTStartup entry if using MSVC compiler/linker in ABI.asm/C.asm
-   as ABI.asm/C.asm -o namefile.obj

##### How to link
-----------------

Before using MSVC, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first

###### With GNU Linker
----------------------

ld namefile.obj -o namefile.exe -L"full libkernel32.a and libucrt.a path" -lkernel32 for ABI.asm -lucrt for C.asm

###### With MSVC Linker
-----------------------

-   Open x64 Native Tools Command Prompt for Visual Studio
-   cd this path
-   link namefile.obj /subsystem:console /out:namefile.exe kernel32.lib for ABI.asm legacy_stdio_definitions.lib ucrt.lib for C.asm

###### With GCC/Clang
---------------------

gcc/clang namefile.obj -o namefile.exe

###### With MSVC compiler
-------------------------

-   Open x64 Native Tools Command Prompt for Visual Studio
-   cd this path
-   cl namefile.obj /link /subsystem:console /out:namefile.exe kernel32.lib for ABI.asm legacy_stdio_definitions.lib ucrt.lib for C.asm

Nb: GCC is available in MinGW-w64 and Clang is available in LLVM and MinGW-w64. GNU Assembler and GNU Linker are part of binutils which dependency of GCC
