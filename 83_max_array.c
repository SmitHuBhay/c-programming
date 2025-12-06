#include <stdio.h>
int array(int a[]);
int main()
{
    int n = 10, i;
    printf("Enter 10 elements for array \n");
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("%d:", i);
        scanf("%d", &a[i - 1]);
    }
    array(a);
    printf("The max value is %d", a[9]);
}
int array(int a[10])
{
    int i, j,temp;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a[10];
}