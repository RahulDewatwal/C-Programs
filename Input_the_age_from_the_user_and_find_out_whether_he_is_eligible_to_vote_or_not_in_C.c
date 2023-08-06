#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Age:");
    scanf("%d",&a);
    
    if(a>=18)
        printf("%d You can Vote",a);
    else
        printf("%d You Can't Vote",a);
        
    return 0;
}
