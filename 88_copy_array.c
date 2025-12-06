#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n], b[n];
    int *p1 = a, *p2 = b;
    
    printf("Enter elements of array A:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p1 + i);
    }
    
    for(i = 0; i < n; i++) {
        *(p2 + i) = *(p1 + i);
    }
    
    printf("Elements of array B (copied):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(p2 + i));
    }
}
    