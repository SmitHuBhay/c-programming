#include<stdio.h>
int main(){
    int i,n,num,max,max2;
    printf("Enter the number of numbers you'll sort:\n");
    scanf("%d",&n);
    if(n<1){
        printf("Invalid");
        return 0;
    }
    printf("Enter your number 1 : ");
    scanf("%d",&num);
    max = num;
    max2 = num;
    for(i=2;i<=n;i++){
        printf("Enter your number %d :",i);
        scanf("%d",&num);
        if(num>max){
            max2=max;
            max=num;
        }
    }
    printf("The maximum number is %d and second maximum is %d",max,max2);
}   