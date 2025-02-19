### How to build
----------------

Before using marmasm, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first

#### With visual studio
-----------------------

-   git clone this repo
-   Create empty project
-   Set architecture target to x64
-   Right click project
-   Go to Build Dependencies > Build Customizations
-   Checklist marmasm
-   Include ABI/C.c and ABI/C.asm to project or create new item with C++ file (.cpp) template
-   Check the C file for item type is C/C++ compiler and asm file for item type is Microsoft Arm Assembler in properties > general
-   Check the object file name of C file is different in properties > C/C++ > output files with object file name of asm file in properties > Microsoft Arm Assembler > object file
-   Press f5 for start debugging or ctrl + f5 for start without debugging

#### With command line
----------------------

-   Open arm64 Native Tools Command Prompt for Visual Studio
-   git clone this repo
-   cd this path
-   Change mainCRTStartup into main entry if using Clang in ABI.asm/C.asm
-   marmasm64 ABI.asm/C.asm -o namefile.obj

##### How to combine with ABI.c/C.c
-----------------------------------

###### With Clang
-----------------

clang ABI.c/C.c ABI.obj/C.obj -o namefile.exe

###### With MSVC compiler
-------------------------

cl ABI.c/C.c ABI.obj/C.obj /Fo:namefile.obj /link /subsystem:console /out:namefile.exe kernel32.lib for ABI.asm legacy_stdio_definitions.lib ucrt.lib for C.asm
