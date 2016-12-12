/*
 * Sec. 20.1
 * Set, clear and test several bits at time
 */

#include<stdio.h>
#include"dec2bin2.h"

#define BLUE 1 // 0001
#define GREEN 2 // 0010
#define RED 4 // 0100
// BLUE, GREEN and RED are position of bit

int main(void)
{
 int i=0x0000;
 printf("Set BLUE and GREEN bits\n");
 dec2bin2(i);
 i|=(BLUE | GREEN);
 dec2bin2(i);
 printf("\n");

 printf("clears BLUE and GREEN bits\n");
 dec2bin2(i);
 i&=~(BLUE | GREEN);
 dec2bin2(i);
 printf("\n");

 printf("tests BLUE and GREEN bits\n");
 if (i&(BLUE | GREEN))
   printf("Yes, there are on at %d and %d bits\n", BLUE, GREEN);
 else
   printf("No, there are off at %d and %d bits\n", BLUE, GREEN);
 printf("\n");

 printf("toggle BLUE and RED bits\n");
 dec2bin2(i);
 i^=(BLUE | RED);
 dec2bin2(i);
 printf("\n");

 printf("toggle BLUE and RED bits\n");
 dec2bin2(i);
 i^=(BLUE | RED);
 dec2bin2(i);
 printf("\n");

 return 0;
}
