#include<stdlib.h>
#include<stdio.h>
int main()
{
    int arr[100],i,limit,key,flag;
    printf("Enter the limit: \n");
    scanf("%d",&limit);
    printf("Enter the elements: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key element: ");
    scanf("%d",&key);
    for(i=0;i<limit;i++)
    {
        if(key==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Key element %d found at position %d",key,i+1);
    }
    else
    {
        printf("Key not found");
    }
    return 0;
}