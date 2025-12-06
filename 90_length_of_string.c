#include <stdio.h>

int main()
{
    char a[500];
    char *ptr;
    int i = 0, j = 0;
    printf("Enter a string:\n");
    fgets(a, sizeof(a), stdin);
    while (1)
    {
        ptr = &a[i];
        if (*ptr != '\0' && *ptr != '\n')
        {
            i++;
            if (*ptr != ' ')
            {
                j++;
            }
        }
        else{
            break;
        }
    }
    printf("Length of string (with spaces): %d\n", i);
    printf("Length of string (without spaces): %d\n", j);
    return 0;
}
