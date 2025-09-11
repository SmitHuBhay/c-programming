// calculator using characters
// AUTHOR:SMIT PANDIT
#include <stdio.h>
int main()
{
    float a, b;
    char opp;
    printf("Enter an operator(+,-,*,/) : \n");
    scanf("%c", &opp);
    printf("Enter the 1st number : \n");
    scanf("%f", &a);
    printf("Enter the 2nd number : \n");
    scanf("%f", &b);
    switch (opp)
    {
    case '+':
        printf("The addition of %.0f and %.0f is %.0f", a, b, a + b);
        break;
    case '-':
        printf("The substraction of %.0f and %.0f is %.0f", a, b, a - b);
        break;
    case '*':
        printf("The multiplication of %.0f and %.0f is %.0f", a, b, a * b);
        break;
    case '/':
        printf("The division of %.0f and %.0f is %.2f", a, b, a / b);
        break;
    default:
        printf("Enter a valid operator\n");
        break;
    }
}