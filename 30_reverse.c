#include <stdio.h>
int main()
{
    int num, rev = 0, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    int m = num;
    while (num != 0)
    {
        k = num % 10;
        rev = rev * 10 + k;
        num = num / 10;
    }
    printf("The number %d is reversed to %d", m,rev);
}
