#include<stdio.h>
#include<string.h>

int main(){
    int i, j;
    char arr[50];
    char* ptr = arr;
    char temp;

    printf("Enter your string: ");
    fgets(arr, sizeof(arr), stdin);

    int n = strlen(arr);
    if (arr[n-1] == '\n') {
        arr[n-1] = '\0';
        n--;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp = *(ptr+i);
            *(ptr+i) = *(ptr+j);
            *(ptr+j) = temp;
            puts(ptr);
            temp = *(ptr+i);
            *(ptr+i) = *(ptr+j);
            *(ptr+j) = temp;
        }
    }

    return 0;
}
