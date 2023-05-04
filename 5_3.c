#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],i,j,temp,limit;
    printf("Enter the size of an array: \n");
    scanf("%d",&limit);
    printf("Enter the values of the array: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array: \n");
    for(i=0;i<limit;i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    return 0;
}