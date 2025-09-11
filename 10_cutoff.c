#include<stdio.h>
int main(){
    int M,P,C,E,CM;
    printf("Enter the marks in Math Examination (out of 200): \n");
    scanf("%d",&M);
    printf("Enter the marks in Entrance Examination (out of 200): \n");
    scanf("%d",&E);
    printf("Enter the marks in Physics Examination (out of 200): \n");
    scanf("%d",&P);
    printf("Enter the marks in Chemistry Examination (out of 100): \n");
    scanf("%d",&C);
    CM = M/2+P/2+C/2+E;
    printf("The cut-off mark of student is %d",CM);
}