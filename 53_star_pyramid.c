#include <stdio.h>
int main()
{
    int i, j, n = 7,m;
    for (i = 1; i <= (n + 1) / 2; i++)
    {
        for (j = 0; j < (n + 1) / 2 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n-1 ; i >= (n + 1) / 2; i--)
    {
        m=n-i;
        for(j=1;j<=m;j++){
            printf(" ");
        }
        for(j=m;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}