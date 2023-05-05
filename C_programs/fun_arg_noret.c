#include<stdio.h>
#include<stdlib.h>
void sum(int,int);
int main()
{
    int num1,num2;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&num1,&num2);
    sum(num1,num2);
    return 0;
}
void sum(int a,int b)
{
    int add;
    add=a+b;
    printf("Sum = %d",add);
}