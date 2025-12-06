#include <stdio.h>
int main() {
    int a[3][3];
    int sum[3] = {0};
    printf("Enter elements of the matrix:\n");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d,%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i] += a[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        printf("Sum of row %d: %d\n", i + 1, sum[i]);
    }
}