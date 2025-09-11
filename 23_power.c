//power of number without using math.h
//AUTHOR:SMIT PANDIT
#include<stdio.h>
int main(){
    int num,power,temp=1;
    printf("Enter your number :\n");
    scanf("%d",&num);
    printf("Enter your power : \n");
    scanf("%d",&power);
    for(int i = 0;i<power;i++){
        temp = temp * num; 
    }
    printf("%d raise to the power %d result in %d",num,power,temp);
}