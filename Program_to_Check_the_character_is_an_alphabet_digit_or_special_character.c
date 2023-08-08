#include <stdio.h>
int main()
{
 char alphabet;
 printf("Enter a character ");
scanf("%c",&alphabet);
 if ( ((alphabet>='a')&&(alphabet<='z'))||((alphabet>='A')&&(alphabet<='Z')) )
printf("%c is an alphabet ",alphabet);
else if (alphabet>='0' && alphabet<='9')
printf("%c is a digit ",alphabet);
else
printf("%c is a special character",alphabet);
return 0;
}
