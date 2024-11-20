How to build:
1. With Clang:
   - Open terminal
   - git clone this repo
   - cd this path
   - Change _start into main entry in ABI.asm/C.asm
   - Remove comment in main entry for C.asm only
   - clang ABI.asm/C.asm -o namefile
2. With GNU Assembler:
   - Open terminal
   - git clone this repo
   - cd this path
   - Change _start into main entry if using GCC/Clang in ABI.asm/C.asm
   - Remove comment in main entry for C.asm only if using GCC/Clang
   - as ABI.asm/C.asm -o namefile.o
   - How to link:
      A. With GNU Linker:
         ld -pie namefile.o -o namefile --dynamic-linker=/lib/ld-linux-aarch64.so.1 -lc for C.asm only
      B. With GCC/Clang:
         gcc/clang namefile.o -o namefile
