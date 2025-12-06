#include<stdio.h>
int main(){
    int num,i,sq=1;
    int *ptr;
    printf("Enter your number : ");
    scanf("%d",&num);
    ptr = &num;
    for(i=0;i<2;i++){
        sq=sq*(*ptr);
    }
    printf("square is : %d\n",sq);
    printf("cube is : %d",sq*(*ptr));
}