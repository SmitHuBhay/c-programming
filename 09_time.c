//To convert time given in hours,minutes and seconds into seconds
//author-SMIT PANDIT
#include<stdio.h>
int main(){
    int hour,minute,second,total;
    printf("Enter the Hours: \n");
    scanf("%d",&hour);
    printf("Enter the Minutes: \n");
    scanf("%d",&minute);
    printf("Enter the Seconds: \n");
    scanf("%d",&second);
    total = hour*3600+minute*60+second;
    printf("The time you've entered : %d hours , %d minutes , %d seconds comes to be %d seconds altogether",hour,minute,second,total);
}