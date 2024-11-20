How to build:
- Open cmd
- git clone this repo
- cd this path
- nasm -f win64 ABI.asm/C.asm -o namefile.obj
- How to combine with ABI.c/C.c:
   Before using MSVC, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first
   A. With GCC/Clang:
      gcc/clang ABI.c/C.c namefile.obj -o namefile.exe
   B. With MSVC compiler:
      * Open x64 Native Tools Command Prompt for Visual Studio
      * cd this path
      * cl ABI.c/C.c namefile.obj /Fo:namefile1.obj /link /subsystem:console /out:namefile.exe

Nb: GCC is available in MinGW-w64 and Clang is available in LLVM and MinGW-w64
