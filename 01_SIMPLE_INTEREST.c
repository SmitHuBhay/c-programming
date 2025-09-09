//calculate the simple interest
//AUTHOR - SMIT PANDIT
#include<stdio.h>
int main(){
    int amount,time;
    float rate,SI;
    printf("Enter youre Principal amount\n");
    scanf("%d",&amount);
    printf("Enter youre time period\n");
    scanf("%d",&time);
    printf("Enter youre rate of interest\n");
    scanf("%f",&rate);
    SI=(amount*time*rate)/100;
    printf("The interest to youre amount %d at the rate of %.3f for %d period comes to be %.3f",amount,rate,time,SI);
}