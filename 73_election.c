#include <stdio.h>

int main()
{
    int x[6] = {0}, i, max = 0, e = 0;

    for (int j = 1; j <= 10; j++)
    {
        printf("Ballot %d:\n", j);
        printf("Enter the candidate number:\n");
        scanf("%d", &i);

        if (i > 0 && i <=5)
        {
            x[i] = x[i] + 1;
        }
        else
        {
            x[0] = x[0] + 1;
        }
    }

    for (int j = 1; j < 6; j++)
    {
        if (x[j] > max)
        {
            max = x[j];
            e = j;
        }
    }

    printf("Most voted candidate is no %d with %d votes\n", e, max);
    printf("No of votes in spoiled ballot are: %d",x[0]);
}