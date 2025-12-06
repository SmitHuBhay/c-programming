#include <stddef.h>
#include <stdio.h>
int main()
{
    int n, i = 0, j = 1, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (; i <= n;)
    {
        sum = i + j;
        i = j;
        j = sum;
        if (n == i)
        {
            printf("The number %d is a fibonacci number", n);
            return 0;
        }
    }
    printf("The number %d is not a fibonacci number", n);
}
