#include<stdlib.h>
#include<stdio.h>
int main()
{
    int arr[100],limit,i;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("Enter the elements: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements are: \n");
    for(i=0;i<limit;i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    return 0;
}