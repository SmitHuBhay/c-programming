#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    printf("Enter number of rocks:\n");
    scanf("%d", &n);
    char rock[100][101];
    int count[26] = {0};

    for(i = 0; i < n; i++) {
        scanf("%s", rock[i]);
        int seen[26] = {0};
        for(j = 0; rock[i][j] != '\0'; j++) {
            seen[rock[i][j] - 'a'] = 1;
        }
        for(j = 0; j < 26; j++) {
            count[j] += seen[j];
        }
    }

    int gems = 0;
    for(i = 0; i < 26; i++) {
        if(count[i] == n) gems++;
    }

    printf("%d\n", gems);
}
