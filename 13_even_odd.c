//Program to check whether a number is even or odd
//AUTHOR:SMIT PANDIT
#include<stdio.h>
int main(){
    int i;
    printf("Enter an integer: \n");
    scanf("%d",&i);
    if(i%2==0){
        printf("The number %d is even",i);
    }
    else{
        printf("The number %d is odd",i);
    }
}