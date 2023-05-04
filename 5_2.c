#include<stdlib.h>
#include<stdio.h>
int main()
{
    int arr[100],i,limit,count=0;
    printf("Enter the size of an array: \n");
    scanf("%d",&limit);
    printf("Enter the values of array:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    printf("Number of even numbers in the given array is: %d",count);
    return 0;
}