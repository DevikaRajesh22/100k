#include<stdio.h>
#include<stdlib.h>
int main(){
    int number1;
    float number2,sum;
    printf("Enter first number: ");
    scanf("%d",&number1);
    printf("Enter second number:");
    scanf("%f",&number2);
    sum=number1+number2;
    printf("Sum is : %f",sum);
    return 0;
}
