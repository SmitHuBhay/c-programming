#include<stdio.h>
int main(){
    int n;
    int i,j,k=0;
    printf("Enter your number : ");
    scanf("%d",&n);
    int temp = n;
    for(;temp!=0;){
        i = temp % 10;
        temp = temp / 10;
        if(i==0){continue;}
        if((n%i)==0){
            k++;
            printf("%d\t",i);
        }
    }
    printf("\n%d positions can divide the number %d",k,n);
}