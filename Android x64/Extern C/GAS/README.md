### How to build
----------------

#### With Clang
---------------

-   Open termux
-   git clone this repo
-   cd this path
-   clang ABI.asm/C.asm ABI.c/C.c -o namefile

#### With GNU Assembler
-----------------------

-   Open termux
-   git clone this repo
-   cd this path
-   as ABI.asm/C.asm -o namefile.o
-   gcc/clang ABI.c/C.c namefile.o -o namefile

Nb: GCC is available in tur-repo. GNU Assembler is part of binutils which dependency of GCC