#include <stdio.h>

int main() {
    int roll[10],sub1[10], sub2[10], sub3[10],total[10];
    int i;
    printf("Enter Roll No and marks of 3 subjects for 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d (Roll, Sub1, Sub2, Sub3): ", i + 1);
        scanf("%d %d %d %d", &roll[i], &sub1[i], &sub2[i], &sub3[i]);
    }
    for (i = 0; i < 10; i++) {
        total[i] = sub1[i] + sub2[i] + sub3[i];
    }
    int max1 = sub1[0], r1 = roll[0];
    int max2 = sub2[0], r2 = roll[0];
    int max3 = sub3[0], r3 = roll[0];
    int max_t = total[0], rmax_t = roll[0];

    for (i = 1; i < 10; i++) {
        if (sub1[i] > max1) {
            max1 = sub1[i];
            r1 = roll[i];
        }
        if (sub2[i] > max2) {
            max2 = sub2[i];
            r2 = roll[i];
        }
        if (sub3[i] > max3) {
            max3 = sub3[i];
            r3 = roll[i];
        }
        if (total[i] > max_t) {
            max_t = total[i];
            rmax_t = roll[i];
        }
    }

    printf("\nTOTAL MARKS OF STUDENTS\n");
    for (i = 0; i < 10; i++) {
        printf("Roll %d -> Total = %d\n", roll[i], total[i]);
    }

    printf("\nHIGHEST MARKS IN EACH SUBJECT\n");
    printf("Subject 1: %d (Roll No: %d)\n", max1, r1);
    printf("Subject 2: %d (Roll No: %d)\n", max2, r2);
    printf("Subject 3: %d (Roll No: %d)\n", max3, r3);

    printf("\nSTUDENT WITH HIGHEST TOTAL MARKS\n");
    printf("Roll No %d -> Total = %d\n", rmax_t, max_t);

    return 0;
}
