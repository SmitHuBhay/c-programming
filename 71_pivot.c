#include <stdio.h>

int main()
{
    int n, i, l, r, m;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &a[i]);
    }

    l = 0;
    r = n - 1;

    while (l <= r)
    {
        if (a[l] <= a[r])
        {
            printf("Pivot element: %d\n", a[l]);
            return 0;
        }
        m = (l + r) / 2;

        if (m > 0 && a[m] < a[m - 1])
        {
            printf("Pivot element: %d\n", a[m]);
            return 0;
        }

        if (a[m] >= a[l])
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
}
