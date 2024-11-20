How to build:
- Open terminal
- git clone this repo
- cd this path
- nasm -f elf64 ABI.asm/C.asm namefile.o
- gcc/clang ABI.c/C.c namefile.o -o namefile