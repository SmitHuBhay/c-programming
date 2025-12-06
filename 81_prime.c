#include <stdio.h>
#include <math.h>
int is_prime(int);
int main()
{
    int n;
    printf("Enter your number :\n");
    scanf("%d", &n);
    printf("The return value is %d", is_prime(n));
}
int is_prime(int n)
{
    if (n == 0 || n == 1)
    {
        printf("The numbers are not classified");
        return 0;
    }
    int x = pow(n, 0.5);
    for (int i = 2; i <= x; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}