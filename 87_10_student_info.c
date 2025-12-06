#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void displayHighMarks(struct Student s[], int n) {
    int i;
    printf("Students with marks greater than 500:\n");
    for(i = 0; i < n; i++) {
        if(s[i].marks > 500) {
            printf("Name: %s, Roll: %d, Marks: %d\n", s[i].name, s[i].roll, s[i].marks);
        }
    }
}

int main() {
    struct Student s[10];
    int i;
    int n = 10;
    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    displayHighMarks(s, 10);
}
