#include <stdio.h>
int main()
{
    int n = 10, i, j;
    printf("Enter 10 elements for array \"A\" \n");
    int a[10], b[10], c[10];
    for (i = 1; i <= n; i++)
    {
        printf("%d:", i);
        scanf("%d", &a[i - 1]);
    }
    printf("Enter 10 elements for array \"B\" \n");
    for (i = 1; i <= n; i++)
    {
        printf("%d:", i);
        scanf("%d", &b[i - 1]);
    }
    printf("The summation of the two array's is:\n");
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d\t", c[i]);
    }
}