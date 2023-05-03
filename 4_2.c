#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("sum of odd numbers= %d",sum);
    return 0;
}