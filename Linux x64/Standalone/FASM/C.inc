segment readable writeable
    DT_NULL     = 0
    DT_NEEDED   = 1
    DT_HASH     = 4
    DT_STRTAB   = 5
    DT_SYMTAB   = 6
    DT_RELA     = 7
    DT_RELASZ   = 8
    DT_RELAENT  = 9
    DT_STRSZ    = 10
    DT_SYMENT   = 11
    STB_GLOBAL  = 1
    STT_FUNC    = 2
    R_X86_64_64 = 1
    msg         db 'Hello, world!', 10, 0

segment readable executable
Hello:
    sub     spl, 8

    lea     rdi,[msg]
    call    [printf]

    add     spl, 8

    ret

macro Elf64_Sym name,value,size,bind,type,other,shndx
{
 dd name+0
 db (bind+0) shl 4 + (type+0)
 db other+0
 dw shndx+0
 dq value+0
 dq size+0
}

virtual at 0
 Elf64_Sym
 sizeof.Elf64_Sym = $
end virtual

macro Elf64_Rela offset,symbol,type,addend
{
  dq offset+0
  dq (symbol+0) shl 32 + (type+0)
  dq addend+0
}

virtual at 0
 Elf64_Rela
 sizeof.Elf64_Rela = $
end virtual

macro needed [library]
{
 local str
 match needed,needed@dynamic \{ define needed@dynamic needed,str:library \}
 match ,needed@dynamic \{ define needed@dynamic str:library \}
}
define needed@dynamic

macro import [name]
{
 common
  local strtab,strsz,symtab,rel,relsz,hash
  segment dynamic readable
  match needed,needed@dynamic
  \{ irp item,needed \\{ match str:library,item \\\{ dq DT_NEEDED,str-strtab \\\} \\} \}
  dq DT_STRTAB,strtab
  dq DT_STRSZ,strsz
  dq DT_SYMTAB,symtab
  dq DT_SYMENT,sizeof.Elf64_Sym
  dq DT_RELA,rela
  dq DT_RELASZ,relasz
  dq DT_RELAENT,sizeof.Elf64_Rela
  dq DT_HASH,hash
  dq DT_NULL,0
  segment readable writeable
  symtab: Elf64_Sym
 forward
  local fstr
  Elf64_Sym fstr-strtab,0,0,STB_GLOBAL,STT_FUNC,0,0
 common
  rela:
  local counter
  counter = 1
 forward
   Elf64_Rela name,counter,R_X86_64_64
   counter = counter+1
 common
  relasz = $-rela
  hash:
  dd 1,counter
  dd 0
  repeat counter
   if %=counter
    dd 0
   else
    dd %
   end if
  end repeat
  strtab db 0
 forward
  fstr db `name,0
 common
  match needed,needed@dynamic
  \{ irp item,needed \\{ match str:library,item \\\{ str db library,0 \\\} \\} \}
  strsz = $-strtab
 forward
  name dq 0
}

segment interpreter readable
    db '/lib64/ld-linux-x86-64.so.2',0

needed 'libc.so.6'
import printf, exit
