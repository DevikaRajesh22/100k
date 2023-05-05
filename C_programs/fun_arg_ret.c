#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main()
{
    int num1,num2,result;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&num1,&num2);
    result=sum(num1,num2);
    printf("Sum = %d",result);
    return 0;
}
int sum(int a,int b)
{
    int add;
    add=a+b;
    return add;
}