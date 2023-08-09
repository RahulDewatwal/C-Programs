#include <stdio.h>
int main()
{
int x,i;
printf("Enter a number\n");
scanf("%d",&x);
i=1;
while(i<=10)
{printf("%dx%d=%d",x,i,i*x);
 printf("\n");
 i++;
}
return 0;
}
