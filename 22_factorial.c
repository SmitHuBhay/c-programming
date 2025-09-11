//factorial of a number
//AUTHOR:SMIT PANDIT
#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter your number :\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
       factorial = factorial * i; 
    }
    if(factorial<0){
        printf("ERROR : TO BIG NUMBER");
        return 0;
    }
    printf("The factorial of %d is %d",n,factorial);
}