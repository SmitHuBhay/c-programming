#include<stdio.h>
int main(){
    int num,temp=0,k,m;
    printf("Enter a number: ");
    scanf("%d",&num);
    m=num;
    for (int i = 0;num!=0; i++)
    {
        k=num%10;
        temp=temp*10+k;
        num=num/10;
    }
    if(temp==m){
        printf("The number is a palindrome");
    }
    else{printf("The number is not a palindrome");}
}