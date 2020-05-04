# Code injection

overriding the ```dprintf``` function and injecting it usnig LD_PRELOAD

```r2
│           0x00400ba9      55             push rbp
│           0x00400baa      4889e5         mov rbp, rsp
│           0x00400bad      4883ec60       sub rsp, 0x60
│           0x00400bb1      897dac         mov dword [var_54h], edi    ; argc
│           0x00400bb4      488975a0       mov qword [str], rsi        ; argv
│           0x00400bb8      64488b042528.  mov rax, qword fs:[0x28]
│           0x00400bc1      488945f8       mov qword [canary], rax
│           0x00400bc5      31c0           xor eax, eax
│           0x00400bc7      837dac07       cmp dword [var_54h], 7
│       ┌─< 0x00400bcb      741e           je 0x400beb
│       │   0x00400bcd      bef00e4000     mov esi, str.ouptut string
│       │   0x00400bd2      bf02000000     mov edi, 2
│       │   0x00400bd7      b800000000     mov eax, 0
│       │   0x00400bdc      e8eff9ffff     ` sym.imp.dprintf`

```
