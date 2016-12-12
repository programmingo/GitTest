/*
 * Sec. 20.1
 * Bitwise Sift Operators
 */

#include<stdio.h>
#include"dec2bin2.h"

int main(void)
{
 // bitwise shift
 printf("Original bits\n");
 printf("Left shift 2 bits\n");
 printf("Right shift 2 bits\n");
 int i=13;
 dec2bin2(i);
 
 // left shift
 i <<=2;
 dec2bin2(i);
 
 // right shift
 i >>=2;
 dec2bin2(i);

 return 0;
}
