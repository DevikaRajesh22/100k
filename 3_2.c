#include<stdio.h>
#include<stdlib.h>
int main(){
    float totalmark;
    printf("Enter your percentage:");
    scanf("%f",&totalmark);
    if(totalmark<50)
    {
        printf("Failed");
    }
    else if(totalmark>50 && totalmark<59){
        printf("E");
    }
    else if(totalmark>60 && totalmark<69){
        printf("D");
    }
    else if(totalmark>70 && totalmark<79){
        printf("C");
    }
    else if(totalmark>80 && totalmark<99){
        printf("B");
    }
    else if(totalmark>90){
        printf("A");
    }
    else{
        printf("Enter valid percentage");
    }
    
}
