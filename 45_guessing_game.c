#include <stdio.h>
int main()
{
    int number = 68;
    int i = 0, m;
    for (m = 1; i != number; m++)
    {
        printf("Enter your guess : ");
        scanf("%d", &i);
        if (5 >= (unsigned)(number - i))
            printf("Almost Their\n");
        if (i > number)
        {
            printf("Guess a smaller number.\n");
        }
        if (i < number)
        {
            printf("Guess a bigger number.\n");
        }
        if (i == number)
        {
            printf("You won in %d tries", m);
        }
    }
}