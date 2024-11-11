How to build:
1. With GCC/Clang:
   - Open cmd
   - cd this path
   - clang ABI.asm/ABI -o namefile.exe
3. With GNU Assembler:
   - Open cmd
   - cd this path
   - as ABI.asm/C.asm -o namefile.o
   - ld namefile.o -o namefile.exe -L"full libkernel32 and libucrt path" -lkernel32 if from ABI.asm -lucrt if from C.asm

Nb: GCC is available in MinGW-w64 and Clang is available in LLVM and MinGW-w64. GNU Assembler is part of binutils which dependency of GCC
