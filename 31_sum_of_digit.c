#include<stdio.h>
int main(){
    int n,i,temp=0,m;
    printf("Enter your number: ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        i=n%10;
        temp=temp+i;
        n=n/10;
    }
    printf("The sum of all the digits in the number %d is %d",m,temp);
}