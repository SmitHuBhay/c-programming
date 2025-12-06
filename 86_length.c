#include <stdio.h>
#include<string.h>
int Length()
{
    char str[100];
    int l = 0;
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    while (str[l] != '\0' && str[l] != '\n')
    {
        l++;
    }
    printf("Length of the string: %d\n", l);
    return 0;
}

int main()
{
    Length();
}
