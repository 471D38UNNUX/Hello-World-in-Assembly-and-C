How to build:
1. With Clang:
   - Open terminal
   - git clone this repo
   - cd this path
   - clang ABI.asm/C.asm ABI.c/C.c -o namefile
2. With GNU Assembler:
   - Open terminal
   - git clone this repo
   - cd this path
   - as ABI.asm/C.asm -o namefile.o
   - gcc/clang ABI.c/C.c namefile.o -o namefile