#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\t", i);
        i = i + 2;
    }
}