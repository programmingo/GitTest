#include<stdio.h>
#include"dec2bin2.h"

int main(void)
{
 printf("Setting a bit\n");
 int i=0x0000;
 int j=3;
 dec2bin2(i);
 // sets bit j
 i|=1 << j;
 dec2bin2(i);
 printf("\n");

 printf("Clearing a bit\n");
 i=0x00ff;
 j=4;
 dec2bin2(i);
 // clears bit j
 i&=~(1 << j);
 dec2bin2(i);
 printf("\n");

 printf("Testing a bit\n");
 dec2bin2(i);
 // tests bit j
 if (i & 1 << j)
   printf("Yes, there is on at %d\n", j);
 else
   printf("No, thee is off at %d\n", j);
 printf("\n");

 printf("Toggling a bit\n");
 i=0x0000;
 j=4;
 dec2bin2(i);
 // toggle bit j
 i^=(1 << j);
 dec2bin2(i);
 printf("\n");

 printf("Toggling a bit\n");
 i=0x00ff;
 j=4;
 dec2bin2(i);
 // toggle bit j
 i^=(1 << j);
 dec2bin2(i);
 printf("\n");
 
 return 0;
}
