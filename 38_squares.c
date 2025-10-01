#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i*i);
    }
}