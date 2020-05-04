# Code injection

Overriding the ```atoi``` function and inject it usnig LD_PRELOAD, so when it reach the ```call sym.imp.atoi``` it whill print the desired output .

```r2
│           0x00400bc7      837dac07       cmp dword [var_54h], 7
│       ┌─< 0x00400bcb      741e           je 0x400beb
│       │   0x00400bcd      bef00e4000     mov esi, str.Usage ; print usage
│       │   0x00400bd2      bf02000000     mov edi, 2
│       │   0x00400bd7      b800000000     mov eax, 0
│       │   0x00400bdc      e8eff9ffff     call sym.imp.dprintf
│       │   0x00400be1      b801000000     mov eax, 1
│      ┌──< 0x00400be6      e9f8000000     jmp 0x400ce3
│      ││   ; CODE XREF from main @ 0x400bcb
│      │└─> 0x00400beb      488b45a0       mov rax, qword [str]
│      │    0x00400bef      4883c008       add rax, 8
│      │    0x00400bf3      488b00         mov rax, qword [rax]
│      │    0x00400bf6      4889c7         mov rdi, rax                ; const char *str
│      │    0x00400bf9      e812faffff     call sym.imp.atoi
```
