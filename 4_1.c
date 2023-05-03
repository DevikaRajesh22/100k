#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,mul;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        mul=i*n;
        printf("%d x %d = %d",i,n,mul);
        printf("\n");
    }
    return 0;
}
