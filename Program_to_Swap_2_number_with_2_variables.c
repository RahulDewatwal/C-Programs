#include <stdio.h>
int main(){
int x,y;
printf("Enter the first value.\n");
scanf("%d",&x);
printf("Enter the second value.\n");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("The value of x is %d\n",x);
printf("The value of y is %d\n",y);
return 0;
}
