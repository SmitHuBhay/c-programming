//calculator
//AUTHOR:SMIT PANDIT
#include<stdio.h>
int main(){
    char opera;
    float a, b;
    printf("Enter the operator : \n");
    scanf("%c",&opera);
    printf("Enter Your 1st number :\n");
    scanf("%f", &a);
    printf("Enter Your 2nd number :\n");
    scanf("%f", &b);
    int opp = opera;
    switch (opp)
    {
    case 43:
        printf("The addition of numbers is %.0f",a+b);
        break;
    case 45:
        printf("The substraction of numbers is %.0f",a-b);
        break;
    case 42:
        printf("The multiplication of numbers is %.0f",a*b);
        break;
    case 47:
        printf("The division of numbers is %.2f",a/b);
        break;
    
    default:
        printf("Enter a valid operator");
        break;
    }
}