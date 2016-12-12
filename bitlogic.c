/*
 * Sec. 20.1
 * Bitwise logic operations
 */

#include<stdio.h>
#include"dec2bin2.h"

int main(void)
{
 unsigned short int i=21;
 unsigned short int j=56;

 printf("Original bits of 21 and 56\n");
 printf("bitwise complement of i\n");
 printf("bitwise and i&j\n");
 printf("bitwise inclusive or (OR) i|j\n");
 printf("bitwise exclusive or (XOR) i^j\n");
 dec2bin2(i);
 dec2bin2(j);
 printf("----------------\n");

 unsigned short int k=~i;
 dec2bin2(k);

 k=i&j;
 dec2bin2(k);

 k=i|j;
 dec2bin2(k);

 k=i^j;
 dec2bin2(k);

 return 0;
}
