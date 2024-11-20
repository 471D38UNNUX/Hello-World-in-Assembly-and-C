How to build:
Before using masm, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first
1. With visual studio:
   - git clone this repo
   - Create empty project
   - Set architecture target to x64
   - Right click project
   - Go to Build Dependencies > Build Customizations
   - Checklist masm
   - Include ABI/C.c and ABI/C.asm to project or create new item with C++ file (.cpp) template
   - Check the C file for item type is C/C++ compiler and asm file for item type is Microsoft Macro Assembler in properties > general
   - Press f5 for start debugging or ctrl + f5 for start without debugging
2. With command line:
   - Open x64 Native Tools Command Prompt for Visual Studio
   - git clone this repo
   - cd this path
   - ml64 /c ABI.asm/C.asm
   - How to combine with ABI.c/C.c:
    A. With GCC/Clang:
        gcc/clang ABI.c/C.c ABI.obj/C.obj -o namefile.exe
    B. With MSVC compiler:
        Before using MSVC, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first
        * Open x64 Native Tools Command Prompt for Visual Studio
        * cd this path
        * cl ABI.c/C.c ABI.obj/C.obj /Fo:namefile.obj /link /subsystem:console /out:namefile.exe

Nb: GCC is available in MinGW-w64 and Clang is available in LLVM and MinGW-w64
