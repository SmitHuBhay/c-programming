// find out the maximum of three numbers
// AUTHOR:SMIT PANDIT
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter your 1st number : \n");
    scanf("%d", &a);
    printf("Enter your 2nd number : \n");
    scanf("%d", &b);
    printf("Enter your 3rd number : \n");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the greatest number", a);
        }
        else
        {
            printf("%d is the greatest number", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest number", b);
        }
        else
        {
            printf("%d is greatest number", c);
        }
    }
}