#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= i - 1; j++)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}