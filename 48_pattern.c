#include <stdio.h>
int main()
{
    int i, j, k = 1, n = 5;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = n - i; j < n; j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
}