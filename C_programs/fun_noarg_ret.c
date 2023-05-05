#include<stdio.h>
#include<stdlib.h>
int sum();
int main()
{
    int result;
    result=sum();
    printf("Sum = %d",result);
    return 0;
}
int sum()
{
    int num1,num2,add;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    return add;
}