#include <stdio.h> 
int main() {
    int a[10], i, n, flag = 0;

    printf("Enter integers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d : ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++) {
        if (a[i] == n) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("Number %d found in the array at position %d\n", n, i+1);
    } else {
        printf("Number %d not found in the array\n", n);
    }

    return 0;
}