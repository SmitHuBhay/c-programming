#include <stdio.h>
long long factorial(long long x)
{
    if(x==0 || x == 1){return 1;}
    long long facto = 1;
    for (long long i = 1; i <= x; i++)
    {
        facto = facto * i;
    }
    return facto;
}
int main()
{
    long long n,r;
    printf("Enter value of n :\n");
    scanf("%lld", &n);
    printf("Enter value of r :\n");
    scanf("%lld", &r);
    printf("The value of combination is %lld", factorial(n) / (factorial(r) * factorial(n - r)));
}