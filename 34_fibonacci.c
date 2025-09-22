#include<stdio.h>
int main(){
    int i=0,j=1,k,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&k);
    for(int m=0;m<k;m++){
        printf("%d\n",i);
        sum=i+j;
        i=j;
        j=sum;
    }
}