#include<stdio.h>
int main(){
    int i,n,num,max,min;
    printf("Enter the number of numbers you'll sort:\n");
    scanf("%d",&n);
    if(n<1){
        printf("Invalid");
        return 0;
    }
    printf("Enter your number 1 : ");
    scanf("%d",&num);
    max = num;
    min = num;
    for(i=2;i<=n;i++){
        printf("Enter your number %d :",i);
        scanf("%d",&num);
        if(num > max){
            max = num;
        }
        if(num<min){
            min=num;
        }
    }
    printf("The maximum is %d and minimum is %d",max,min);
}