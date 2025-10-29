#include <stdio.h>
#include <process.h>
int check_even_odd(int); // prototype
int main()
{
    int n;
    printf("Enter your Number : ");
    scanf("%d", &n);
    check_even_odd(n);
}
int check_even_odd(int n)
{
    if (n <= 0)
    {
        printf("The number is not even nor odd");
        return 0;
    }
    if (n % 2 == 0)
    {
        printf("The number %d is even", n);
        return 0;
    }
    else
    {
        printf("The number %d is odd", n);
        return 0;
    }
}