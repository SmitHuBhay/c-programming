#include <stdio.h>
int main()
{
    int n, i, element, j = 0;
    printf("Enter the length of array:\n");
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("%d:", i);
        scanf("%d", &a[i - 1]);
    }
    printf("Enter the element you want to find :\n");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            printf("Element found at location %d\n", i + 1);
            j++;
        }
    }
    printf("Element found at %d locations.", j);
}