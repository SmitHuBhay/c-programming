// TO CHECK WHETHER A NO IS PRIME OR NOT.
// AUTHR:SMIT PANDIT
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &i);
    n = pow(i, 0.5);
    for (int j = 2; j <= n; j++)
    {
        if (i % j == 0)
        {
            printf("%d is not a prime number.\n", i);
            return 0;
        }
    }
    printf("%d is a prime number.\n", i);
}