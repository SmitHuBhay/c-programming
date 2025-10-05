#include <stdio.h>
int main()
{
    int n = 10, e = 0, o = 0;
    printf("Enter your array 10 elements :\n");
    int a[n];
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d:", i);
        scanf("%d", &a[i - 1]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e++;
            // printf("even:%d\n",a[i]);
        }
        if (a[i] % 2 != 0)
        {
            o++;
            // printf("odd:%d\n",a[i]);
        }
    }
    printf("Number of odd elements is %d and that of even is %d", o, e);
}