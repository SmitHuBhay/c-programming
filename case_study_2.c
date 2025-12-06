#include <stdio.h>
int main()
{
    int n,m, a, b, c, i, j;
    printf("Enter the value of N & M\n");
    scanf("%d %d",&n,&m);
    int p[n];
    // n = number of jars
    // m = number of turns to fill the jars
    for (j = 0; j < 5; j++)
    {
        p[j] = 0;
    }
    for (i = 0; i < 3; i++)
    {
        printf("Enter a b c :\n");
        scanf("%d %d %d", &a, &b, &c);
        // a is starting position
        // b is ending position
        // c is amount to be filled
        a = a - 1;
        b = b - 1;
        for (a; a <= b; a++)
        {
            p[a] = p[a] + c;
        };
    }
    int sum=0;
        for (i = 0; i < 5; i++)
        {
            sum = sum + p[i];
            printf("%d\t", p[i]);
        }
        printf("\nThe total sum is %d and the average is %d",sum,sum/n);
        
}