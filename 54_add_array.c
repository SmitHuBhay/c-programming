#include<stdio.h>
int main()
{
    int n = 10, i, sum = 0;
    printf("Enter your array 10 elements :\n");
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("%d: ", i);
        scanf("%d", &a[i - 1]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of all array elements is %d", sum);
}