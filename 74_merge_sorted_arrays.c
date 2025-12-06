#include <stdio.h>
int main()
{
    int a[10], b[10], c[20], i, j, k, n = 10, temp;
    printf("Enter the elements of first array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Enter the elements of second array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (b[j] > b[i])
            {
                temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < 10; i++)
    {
        c[i + 10] = b[i];
    }
    for (i = n * 2 - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (c[j] > c[i])
            {
                temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }
        }
    }
    printf("Merged array:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d: ", i + 1);
        printf("%d\n", c[i]);
    }
    return 0;
}