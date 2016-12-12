/*
 * function pointer
 */

#include<stdio.h>

int square(int num);

int main(void)
{
 int (*a) (int); 
 // a points to function that has one int parameter and returns int.
 a=square;
 // a=&square // this is also ok
 printf("3^2=%d\n", a(3));
 printf("2^2=%d\n", (*a)(2));

 return 0;
}

int square(int num)
{
 return (num*num);
}
