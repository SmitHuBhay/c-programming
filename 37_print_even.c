#include <stdio.h>
int main()
{
    int i = 2, n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    do
    {
        printf("%d\t", i);
        i = i + 2;
    } while (i <= n);
}