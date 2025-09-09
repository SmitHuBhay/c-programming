//To convert Earths period of revolution in seconds into days,hours and minutes
//AUTHOR-SMIT PANDIT
#include<stdio.h>
int main(){
    int total_time=31558150;
    int day,hours,minutes;
    minutes=31558150/60;
    hours=minutes/60;
    day=hours/24;
    hours=(total_time-day*24*60*60)/3600;
    minutes=(total_time-day*24*60*60-hours*3600)/60;
    printf("%d days, %d minutes, %d seconds\n",day,hours,minutes);
}