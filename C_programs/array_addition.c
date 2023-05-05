#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5];
    int i,sum=0;
    printf("Enter the elements: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    printf("Sum = %d",sum);
    return 0;
}