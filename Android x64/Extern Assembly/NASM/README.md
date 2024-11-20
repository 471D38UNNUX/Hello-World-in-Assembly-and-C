How to build:
- Open termux
- git clone this repo
- cd this path
- nasm -f elf64 ABI.asm/C.asm namefile.o
- gcc/clang ABI.c/C.c namefile.o -o namefile

Nb: GCC is available in tur-repo. GNU Assembler is part of binutils which dependency of GCC