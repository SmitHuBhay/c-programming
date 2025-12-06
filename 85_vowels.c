#include <stdio.h>

int vowels(int x)
{
    if (x == 65 || x == 69 || x == 73 || x == 79 || x == 85 || x == 97 || x == 101 || x == 105 || x == 111 || x == 117)
    {
        printf("it is a vowel\n");
        return 0;
    }
    printf("it is not a vowel\n");
}

int main()
{
    while (1)
    {
        char a;
        printf("Enter your Character\n");
        scanf(" %c", &a);
        int d = a;
        // printf("%d",d);
        vowels(d);
    }
}
