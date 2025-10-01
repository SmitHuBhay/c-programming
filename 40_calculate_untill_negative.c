#include<stdio.h>
int main(){
    int a=0,b=1,sum=0;
    while(a>=0){
        printf("Enter the number %d : ",b);
        scanf("%d",&a);
        if(a<0){break;}
        sum = sum + a;
        b++;
    }
    printf("%d",sum);
}