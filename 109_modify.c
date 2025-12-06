#include<stdio.h>
int main(){
    int a=25;
    int *p = &a;
    printf("Value of a is: %d\n",*p);
    printf("Enter new value for a: ");
    scanf("%d",p);
    printf("Value of a is: %d\n",*p);
}