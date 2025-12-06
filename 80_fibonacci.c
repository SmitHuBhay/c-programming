#include <stdio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("Enter the number of elements you need :\n");
    scanf("%d", &n);
    fibonacci(n);
}
int fibonacci(int n)
{
    int i = 0, j = 1, sum = 0;
    for (int m = 0; m < n; m++)
    {
        printf("%d\t", i);
        sum = i + j;
        i = j;
        j = sum;
    }
}