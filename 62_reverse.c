#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Your array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int start = 0, end = n - 1;
    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    printf("The reversed array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
