#include<stdio.h>
#include<string.h>
int flip(char[],int,int);
int main(){
    char num[100];
    printf("Enter a number : ");
    fgets(num,sizeof(num),stdin);
    int digit;
    printf("Enter the number of digit to be fliped: ");
    scanf("%d",&digit);
    flip(num,digit,strlen(num)-1);
    puts(num);
}
int flip(char num[100],int digit,int len){
    int temp;
    int start=len-digit,end=len-1;
    while(start < end) {
        temp = num[start];
        num[start] = num[end];
        num[end] = temp;
        start++;
        end--;
    }
}
