#include<stdio.h>
int main(){
    int i,j,n=10,temp;
    printf("Enter 10 elements for array \n");
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("%d:", i);
        scanf("%d", &a[i - 1]);
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}