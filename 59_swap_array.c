#include <stdio.h>
int main()
{
    int n = 10, i, j, temp;
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
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    printf("After swapping");
    printf("Array \"A\" is :");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nArray \"B\" is :");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", b[i]);
    }
}