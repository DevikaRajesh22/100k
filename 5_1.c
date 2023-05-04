#include<stdlib.h>
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],i,limit,temp;
    printf("Enter the size of arrays: ");
    scanf("%d",&limit);
    printf("Enter the values of array 1: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the values of array 2: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Arrays after swapping: ");
    for(i=0;i<limit;i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("Arrays after swapping: \n");
    printf("Array 1: ");
    for(i=0;i<limit;i++)
    {
        printf("%d",arr1[i]);
        printf(" ");
    }
    printf("\n");
    printf("Array 2: ");
    for(i=0;i<limit;i++)
    {
        printf("%d",arr2[i]);
        printf(" ");
    }
    return 0;
}