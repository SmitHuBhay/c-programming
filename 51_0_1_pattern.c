#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("0");
        }
        printf("1");
        for (j = i + 1; j < n; j++)
        {
            printf("0");
        }
        printf("\n");
    }
}