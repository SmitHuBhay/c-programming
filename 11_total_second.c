#include<stdio.h>
int main(){
    int total,seconds,hours,minutes;
    printf("Enter total time in seconds : ");
    scanf("%d",&total);
    hours=total/3600;
    minutes=(total-hours*3600)/60;
    seconds=(total-hours*3600-minutes*60);
    printf("The humanoid representation of %d total second time is %d hours , %d minutes and %d seconds or %d:%d:%d",total,hours,minutes,seconds,hours,minutes,seconds);
}