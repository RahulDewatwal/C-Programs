#include <stdio.h>
int main()
{
char alphabet;
printf("\n Please Enter any character \n");
scanf("%c", &alphabet);
if (alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || 
alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
printf("\n %c is a vowel", alphabet);
else
printf("\n %c is a consonant", alphabet);
return 0
