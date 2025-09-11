// find the greatest of 3 numbers using conditional operator
// AUTHOR:SMIT PANDIT
#include <stdio.h>
int main()
{
    int a, b, c, result;
    printf("Enter your 1st number : \n");
    scanf("%d", &a);
    printf("Enter your 2nd number : \n");
    scanf("%d", &b);
    printf("Enter your 3rd number : \n");
    scanf("%d", &c);
    result = (a > b && a > c) ? 
    /*first condition*/ printf("The first number i.e %d is the greatest number", a) : (b > c && b > a) ? 
    /*second condition*/printf("The second number i.e %d is the greatest number", b) : 
    /*third condition*/printf("The third number i.e %d is the greatest number", c);
}