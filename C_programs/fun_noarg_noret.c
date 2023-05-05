#include<stdio.h>
#include<stdlib.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int num1,num2,add;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    printf("Sum = %d",add);
}