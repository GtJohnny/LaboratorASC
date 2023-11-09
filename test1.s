.data
a: .long 5
b: .long -1
.text
.global _start
_start:

mov a, %eax
cmp b, %eax
jle et1

cmp b, %eax
jb et2

et1:
jmp final

et2:
jmp final

final:
mov $1, %eax
mov $0, %ebx
int $0x80
