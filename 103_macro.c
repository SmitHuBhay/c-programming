#include<stdio.h>
#define BIGGEST(a,b) ((a>b)?a:b)
int main(){
    int i,j;
    printf("Enter two numbers\n");
    scanf("%d,%d",&i,&j);
    printf("The biggest number is %d\n",BIGGEST(i,j));
}