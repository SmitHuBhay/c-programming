//Program to calculate the marks and give back total grade for 5 subjects
//AUTHOR:SMIT PANDIT
#include <stdio.h>
int main()
{
    int maths, chem, physics, cs, english, total;
    float percentage;
    char grade;
    printf("Enter the marks of 5 subjects out of 100: \n");
    scanf("%d %d %d %d %d", &maths, &chem, &physics, &cs, &english);
    total = maths + chem + physics + cs + english;
    percentage = (total / 500.0) * 100;
    if (percentage > 100 || maths < 0 || chem < 0 || physics < 0 || cs < 0 || english < 0 || maths > 100 || chem > 100 || physics > 100 || cs > 100 || english > 100)
    {
        printf("Invalid marks entered. Please enter marks between 0 and 100 for each subject.\n");
        return 0;
    }
    if (maths < 33 || chem < 33 || physics < 33 || cs < 33 || english < 33)
    {
        printf("The student has failed as one or more subjects have marks less than 33.\n");
        return 0;
    }
    else if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("The total marks obtained is %d out of 500 \n", total);
    printf("The percentage obtained is %.2f%% \n", percentage);
    printf("The grade obtained is %c \n", grade);
}