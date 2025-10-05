#include <stdio.h>
int main()
{
    int n = 10, i, sum = 0, max, max2;
    printf("Enter your array 10 elements :\n");
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("%d: ", i);
        scanf("%d", &a[i - 1]);
    }
    max = a[0];
    max2 = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max2)
        {
            if (a[i] > max)
            {
                max2 = max;
                max = a[i];
            }
            else
            {
                max2 = a[i];
            }
        }
        printf("%d , %d\n", max, max2);
    }
    printf("ARRAY IS \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nThe maximum number in the array is %d and second maximum is %d", max, max2);
}