#include <stdio.h>
int main(){
 int num1,num2,num3,temp;
 printf("enter the number1:");
 scanf("%d",&num1);
 printf("enter the number2:");
 scanf("%d",&num2);
 printf("enter the number3:");
 scanf("%d",&num3);
temp=num1;
num1=num2;
num2=num3;
num3=temp;
printf("\nnum1 is %d",num1);
printf("\nnum2 is %d",num2);
printf("\nnum3 is %d",num3);
return 0;
}
