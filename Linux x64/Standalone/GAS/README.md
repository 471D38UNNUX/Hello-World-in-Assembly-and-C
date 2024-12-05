### How to build
----------------

#### With Clang
---------------

-   Open terminal
-   git clone this repo
-   cd this path
-   Change _start into main entry in ABI.asm/C.asm
-   Remove comment in main entry for C.asm only
-   clang ABI.asm/C.asm -o namefile

#### With GNU Assembler
-----------------------

-   Open terminal
-   git clone this repo
-   cd this path
-   Change _start into main entry if using GCC/Clang in ABI.asm/C.asm
-   Remove comment in main entry for C.asm only if using GCC/Clang
-   as ABI.asm/C.asm -o namefile.o

##### How to link
-----------------

###### With GNU Linker
----------------------

ld namefile.o -o namefile --dynamic-linker=/lib64/ld-linux-x86-64.so.2 -lc for C.asm only

###### With GCC/Clang
---------------------

gcc/clang namefile.o -o namefile
     
NB: GNU Assembler and GNU Linker are part of binutils which dependency of GCC
