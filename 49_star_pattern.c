#include <stdio.h>
int main()
{
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}