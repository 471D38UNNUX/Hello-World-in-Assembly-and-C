How to build:
- Open terminal
- git clone this repo
- cd this path
- Change _start into main entry if using GCC/Clang in ABI.asm/C.asm
- Remove comment in main entry for C.asm only if using GCC/Clang
- nasm -f elf64 ABI.asm/C.asm -o namefile.o
- How to link:
   A. With GNU Linker:
      ld namefile.o -o namefile --dynamic-linker=/lib64/ld-linux-x86-64.so.2 -lc for C.asm only
   B. With GCC/Clang:
      gcc/clang namefile.o -o namefile

NB: GNU GNU Linker is part of binutils which dependency of GCC
