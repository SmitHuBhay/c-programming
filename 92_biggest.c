#include<stdio.h>
int main(){
    int *ptr1,*ptr2,n,i,max;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("%d : ",i+1);
        scanf("%d",&a[i]);
    }
    ptr1 = &a[0];
    max = *ptr1;
    for(i=0;i<n;i++){
        ptr2 = &a[i];
        if(*ptr2>*ptr1){
            max = *ptr2;
            *ptr1 = *ptr2;
        };
    }
    printf("max %d",max);
}