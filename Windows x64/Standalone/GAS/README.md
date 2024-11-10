How to build:
1. With gcc/clang:
   - clang ABI.asm/ABI -o namefile.exe
2. With GNU Assembler:
   - Open cmd
   - as ABI.asm/C.asm -o namefile.o
   - ld namefile.o -o namefile.exe -L"full libkernel32 and libucrt path" -lkernel32 if from ABI.asm -lucrt if from C.asm
