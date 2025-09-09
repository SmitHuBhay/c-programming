//interchange the num without third variable
//AUTHOR-SMIT PANDIT
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your 1st number : ");
    scanf("%d",&a);
    printf("Enter your 2nd number : ");
    scanf("%d",&b);
    a = a+b;
    b= a-b;
    a=a-b;
    printf("The numbers are interchanged to %d and %d",a,b);
}