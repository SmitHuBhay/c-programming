#include <stdio.h>
int main()
{
    int i, j, n;
    float sum=0, factorial = 1;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = 1;
        for (int k = 1; k <= i; k++)
    {
       factorial = factorial * k; 
    }
    sum = i / factorial + sum;
    }
    printf("%.2f",sum);
}