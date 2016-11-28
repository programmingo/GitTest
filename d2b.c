/*
 * This program implement decimal to binary
 * It's like the function dec2bin() in Matlab
 * decimal2binary(num, bits)
 *    num is a positive integer
 *    bits is how many bits you want to store
 * Returning a pointer from a function 
 */

#include<stdio.h>
#include<stdlib.h>
#define N 256
#define BITS 8

int* decimal2binary(int num, int bits);

int main(void)
{
 int *bicode;
 for (int i=0; i<N; i++){
   bicode=decimal2binary(i, BITS);
   for(int j=BITS-1; j>=0; j--){
     printf("%1d", bicode[j]);
   }
   printf("|%3d", i);
   printf("\n");
   free(bicode);
   bicode=NULL;
 }
 
 return 0;
}

int* decimal2binary(int num, int bits)
{
 int *arr;
 arr= (int*) malloc(bits*sizeof(int));
 
 int i=0;
 while(num != 0)
 {
  arr[i++]=num%2;
  num=num/2;
 }
 return arr;
}
