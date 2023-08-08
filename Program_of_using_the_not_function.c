#include<stdio.h>
int main()
{ int digit;
 printf("Enter any number");
 scanf("%d",&digit);
 if(digit%10!=0)
 printf("%d is not multiple of 10",digit);
 else
 printf("%d is a multiple of 10",digit);
 return 0 ; }
