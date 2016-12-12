/*
 * Sec. 20.3
 * Using unions to Provide Multiple Views of Data
 * X86 CPU register as example
 */

#include<stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;

union
{
 struct{
   WORD ax, bx, cx, dx;
 } word;
 struct{
   BYTE al, ah, bl, bh, cl, ch, dl, dh;
 } byte;
} regs;

int main(void)
{
 regs.byte.ah=0x12;
 regs.byte.al=0x34;
 printf("sizeof(AX)=%d bytes\n", sizeof(regs.word.ax));
 printf("sizeof(BX)=%d bytes\n", sizeof(regs.word.bx));
 printf("sizeof(AL)=%d bytes\n", sizeof(regs.byte.al));
 printf("sizeof(AH)=%d bytes\n", sizeof(regs.byte.ah));
 printf("addr of AX=%x\n", &regs.word.ax);
 printf("addr of BX=%x\n", &regs.word.bx);
 printf("addr of AL=%x\n", &regs.byte.al);
 printf("addr of AH=%x\n", &regs.byte.ah);
 printf("value of AL: %hx\n", regs.byte.al);
 printf("value of AH: %hx\n", regs.byte.ah);
 printf("value of AX: %hx\n", regs.word.ax);
 return 0;
}
