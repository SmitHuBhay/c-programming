//swap variables using third variable
//AUTHOR-SMIT PANDIT
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter your 1st number : ");
    scanf("%d",&a);
    printf("Enter your 2nd number : ");
    scanf("%d",&b);
    temp = a;
    a=b;
    b=temp;
    printf("The numbers are interchanged to %d and %d",a,b);
}