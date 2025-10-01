#include<stdio.h>
int main(){
    int u;
    float p;
    printf("Enter the units of electriciy : ");
    scanf("%d",&u);
    if(u<0){printf("Enter a valid value");return 0;}
    if(u>=0 && u<=200){
        p = u*0.5;
    }
    else if(u>200 && u<=400){
        p = 100 + 0.65*(u-200);
    }
    else if(u>400 && u<=600){
        p=230 + 0.80*(u-400);
    }
    else{
        p = 425 + 125*(u-600);
    }
    printf("The amount you've to pay for using %d us of electricity is %.2f",u,p);
}