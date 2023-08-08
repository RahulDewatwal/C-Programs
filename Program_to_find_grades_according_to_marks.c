#include <stdio.h>
int main()
{
int marks;
printf("Enter your marks\n");
scanf("%d",&marks);
if(marks>=90 && marks<=100)
printf("You scored A Grade.");
else if(marks>=80 && marks<=89)
printf("You scored B Grade.");
else if(marks>=70 && marks<=79)
printf("You scored C Grade.");
else if(marks<70)
printf("You scored F Grade.");
else
return 0; }
