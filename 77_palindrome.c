#include<stdio.h>
int check_palindrome(int);
int main(){
    int num,temp=0,k,m;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Negative numbers cannot be palindrome");
        return 0;
    }
    check_palindrome(num);
}
int check_palindrome(int num){
    int i,k,temp,m=num;
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