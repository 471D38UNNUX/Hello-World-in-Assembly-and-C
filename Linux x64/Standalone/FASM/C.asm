format elf64 executable 3

entry start

include 'C.inc'

segment readable executable
start:
  call  Hello

  xor   edi, edi
  call  [exit]

  ret