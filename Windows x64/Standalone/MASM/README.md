How to build:
Before using masm, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first
1. With visual studio:
   - git clone this repo
   - Create empty project
   - Set architecture target to x64
   - Right click project
   - Go to Build Dependencies > Build Customizations
   - Checklist masm
   - Include ABI/C.inc and ABI/C.asm in this repo to project or create new item with C++ file (.cpp) template
   - Go to properties > linker > input
   - Include legacy_stdio_definitions.lib and ucrt.lib for C.inc & C.asm (it wasn't necessary including kernel32.lib for ABI.inc & ABI.asm because it was already included by default)
   - Check the inc file for item type is does not participate in build and asm file for item type is Microsoft Macro Assembler in properties > general
   - Press f5 for start debugging or ctrl + f5 for start without debugging
2. With command line:
   - Open x64 Native Tools Command Prompt for Visual Studio
   - git clone this repo
   - cd this path
   - Remove comment of includelib in inc file
   - ml64 ABI.asm/C.asm /link /subsystem:console /entry:mainCRTStartup /out:namefile.exe
