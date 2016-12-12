/*
 * Don't use malloc() to create bits
 */

#include<stdio.h>

#ifndef BITS
#define BITS 16

void dec2bin2(int num)
{
 int arr[BITS]={0};
 int i=0;
 while(num != 0)
 {
  arr[i++]=num%2;
  num=num/2;
 }

 for (int j=BITS-1; j>=0; j--)
   printf("%d", arr[j]);
 printf("\n");
}

#endif
