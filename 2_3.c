#include<stdio.h>
#include<stdlib.h>
int main(){
    int p;
    float r,n,si;
    printf("Enter principal amount, interest rate and number of years:");
    scanf("%d%f%f",&p,&r,&n);
    si=(p*r*n)/100;
    printf("Simple interest is: %f",si);
    return 0;
}
