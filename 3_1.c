#include<stdio.h>
#include<stdlib.h>
int main()
{
    float mark;
    printf("Enter your marks: ");
    scanf("%f",&mark);
    if(mark<50)
{
        printf("Failed");
    }else{
        printf("Passed");
    }
}
