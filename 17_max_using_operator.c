// find the greatest of 3 numbers using logical operator &&
//AUTHOR : SMIT PANDIT
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter your 1st number : \n");
    scanf("%d", &a);
    printf("Enter your 2nd number : \n");
    scanf("%d", &b);
    printf("Enter your 3rd number : \n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("The first number i.e %d is the greatest", a);
    }
    if (b > a && b > c)
    {
        printf("The second number i.e %d is the greatest", b);
    }
    else
    {
        printf("The first number i.e %d is the greatest", c);
    }
}