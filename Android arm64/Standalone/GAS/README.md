How to build:
1. With Clang:
   - Open termux
   - git clone this repo
   - cd this path
   - Change _start into main entry in ABI.asm/C.asm
   - Remove comment in main entry for C.asm only
   - clang ABI.asm/C.asm -o namefile
2. With GNU Assembler:
   - Open termux
   - git clone this repo
   - cd this path
   - Change _start into main entry if using GCC/Clang in ABI.asm/C.asm
   - Remove comment in main entry for C.asm only if using GCC/Clang
   - as ABI.asm/C.asm -o namefile.o
   - How to link:
      A. With GNU Linker:
         ld -pie namefile.o -o namefile --dynamic-linker=/system/bin/linker64 -lc for C.asm only
      B. With GCC/Clang:
         gcc/clang namefile.o -o namefile

Nb: GCC is available in tur-repo. GNU Assembler and GNU Linker are part of binutils which dependency of GCC
