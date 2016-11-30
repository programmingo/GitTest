/*
 * This program implement decimal to binary
 * It's like the function dec2bin() in Matlab
 * decimal2binary(num, bits)
 *   num is a positive integer
 *   bits is how many bits you want to store
 * Returning a pointer from a function 
 * Remember free that pointer received in main() 
*/

#include<stdlib.h>
#include<assert.h>

int* decimal2binary(int num, int bits)
{
 int *arr;
 arr= (int*) malloc(bits*sizeof(int));
 assert(arr);
 
 int i=0;
 while(num != 0)
 {
  arr[i++]=num%2;
  num=num/2;
 }
 return arr;
}

