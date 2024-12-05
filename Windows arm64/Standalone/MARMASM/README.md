### How to build
----------------

Before using marmasm, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first

#### With visual studio
-----------------------

-   git clone this repo
-   Create empty project
-   Set architecture target to arm64
-   Right click project
-   Go to Build Dependencies > Build Customizations
-   Checklist marmasm
-   Include ABI/C.inc and ABI/C.asm in this repo to project or create new item with C++ file (.cpp) template
-   Go to properties > linker > input
-   Include legacy_stdio_definitions.lib and ucrt.lib for C.inc & C.asm (it wasn't necessary including kernel32.lib for ABI.inc & ABI.asm because it was already included by default)
-   Check the inc file for item type is does not participate in build and asm file for item type is Microsoft Arm Assembler in properties > general
-   Press f5 for start debugging or ctrl + f5 for start without debugging

#### With command line
----------------------

-   Open arm64 Native Tools Command Prompt for Visual Studio
-   git clone this repo
-   cd this path
-   Change mainCRTStartup into main entry if using Clang in ABI.asm/C.asm
-   marmasm64 ABI.asm/C.asm -o namefile.obj

##### How to link
-----------------

###### With MSVC Linker
-----------------------

link namefile.obj /subsystem:console /out:namefile.exe kernel32.lib for ABI.asm legacy_stdio_definitions.lib ucrt.lib for C.asm

###### With Clang
-----------------

clang namefile.obj -o namefile.exe

###### With MSVC compiler
-------------------------

cl namefile.obj /link /subsystem:console /out:namefile.exe kernel32.lib for ABI.asm legacy_stdio_definitions.lib ucrt.lib for C.asm