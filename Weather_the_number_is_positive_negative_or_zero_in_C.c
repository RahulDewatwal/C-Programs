#include<stdio.h>

int main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
if (n>0)
printf("No. is positive");
else if(n==0)
printf("No. is zero");
else
printf("No. is negative");
return 0;
}
