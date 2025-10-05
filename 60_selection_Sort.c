#include <stdio.h>
int main()
{
    int i, n = 6, j, temp;
    printf("Enter 10 elements for array \n");
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("%d:", i);
        scanf("%d", &a[i - 1]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}