#include <stdio.h>
int main() {
    char str[500];
    char *ptr;
    int i = 0, j = 0;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        ptr = &str[i];
        if (*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' ||
            *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U') {
            j++;
        }
        i++;
    }
    printf("Number of vowels = %d\n", j);
    return 0;
}
