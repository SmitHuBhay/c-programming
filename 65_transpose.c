#include <stdio.h>
int main()
{
    int a[3][3], t[3][3];
    printf("Enter elements of the matrix:\n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d,%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    printf("New matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}
