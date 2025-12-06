#include <stdio.h>
void swap(char *,char *);
int main()
{
    char a, b;
    printf("Enter your character in the format x,y :\n");
    scanf("%c,%c", &a,&b);
    printf("The value of x & y is %c & %c\n",a,b);
    swap(&a , &b);
    printf("The values are swapped to %c & %c",a,b);
}
void swap(char *x,char *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}