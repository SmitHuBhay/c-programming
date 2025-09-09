//To convert the temperature
//AUTHOR-SMIT PANDIT
#include<stdio.h>
int main(){
    float Fahrenheit,celsius,kelvin;
    printf("Enter your Temperature(in faranite) :\n");
    scanf("%f",&Fahrenheit);
    celsius=(Fahrenheit-32)*5/9;
    printf("The conversion of %.2f degree Fahrenheit to Celcius is %.3f\n",Fahrenheit,celsius);
    kelvin=celsius+273.15;
    printf("The conversion of %.2f degree Fahrenheit to Kelvin is %.3f\n",Fahrenheit,kelvin);
}