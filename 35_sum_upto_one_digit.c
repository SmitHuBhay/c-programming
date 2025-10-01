#include <stdio.h>
int main()
{
    int d, n, sum = 10;
    printf("ENTER YOUR NUMBER : ");
    scanf("%d", &n);
    for (;sum>9;)
    {   
        sum = 0;
        for (;n!=0;)
        {   
            d = n % 10;
            printf("%d\t",d);
            sum = sum + d;
            n = n / 10;
        }
        printf("\n%d\n",sum);
        n = sum;
    }
    printf("End");
}