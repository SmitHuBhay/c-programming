#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char strings[5][50];
    char *string_pointers[5]; 
    char *temp_ptr; 
    int i, j;

    printf("Enter the number of strings : ");
    
    if (scanf("%d", &n) != 1 || n <= 0 || n > 5) {
        printf("Invalid input for number of strings.\n");
        return 1;
    }

    while ((getchar()) != '\n'); 

    printf("Enter %d strings one by one:\n", n);
    for (i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        
        if (gets(strings[i]) == NULL) {
             break;
        }
        
        string_pointers[i] = strings[i]; 
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            
            if (strcmp(string_pointers[i], string_pointers[j]) > 0) {
                
                temp_ptr = string_pointers[i];
                string_pointers[i] = string_pointers[j];
                string_pointers[j] = temp_ptr;
            }
        }
    }

    printf("\nStrings in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", string_pointers[i]);
    }

    return 0;
}
