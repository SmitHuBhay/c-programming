#include <stdio.h>
int main()
{
    int m = 10, a[m], n, k, i, j, temp;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    k = k % m;
    printf("Enter the number of rotations:\n");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        temp = a[m - 1];
        for (j = (m - 1); j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    printf("Array after rotation:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d: ", i + 1);
        printf("%d\n", a[i]);
    }
}