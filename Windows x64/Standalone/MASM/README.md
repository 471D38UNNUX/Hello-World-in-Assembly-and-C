How to build:
Before using masm, install desktop development with C++ in visual studio/build tools for visual studio with including MSVC and Windows SDK first
1. With visual studio:
   - Create empty project
   - Set architecture target to x64
   - Right click project
   - Go to Build Dependencies > Build Customizations
   - Checklist masm
   - Include ABI/C.inc and ABI/C.asm to project or create new item with C++ file (.cpp) template
   - Check the inc file inc file for item type is does not participate in build and asm file for item type is Microsoft Macro Assembler in properties
   - Press f5 for start debugging or ctrl + f5 for start without debugging
2. With command line:
   - Open x64 Native Tools Command Prompt for Visual Studio
   - cd this path
   - Remove comment of includelib in inc file
   - ml64 ABI.asm/C.asm /link /subsystem:console /entry:mainCRTStartup /out:namefile.exe
