#include <stdio.h>
int main()
{
int angle1,angle2,angle3;
printf("Enter three angles : ");
scanf("%d%d%d",&angle1,&angle2,&angle3);
if(angle1+angle2+angle3==180)
 printf("%d, %d, %d form a triangle", angle1,angle2,angle3);
else
 printf("The angles does not form a triangle");
 
return 0; }
