#include<stdio.h>
#include<stdlib.h> 
int main() 
{
    int i, a[5];
    printf("Enter elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    return 0;
}