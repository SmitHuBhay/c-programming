#include <stdio.h>
int main()
{
    int n = 10, i,p=0,q=0,o=0;
    printf("Enter your array 10 array elements\n");
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("%d:",i);
        scanf("%d", &a[i - 1]);
    }
    for (i = 0; i < n;i++){
        if(a[i]>0){p++;}
        if(a[i]<0){q++;}
        if(a[i]==0){o++;}
    }
    printf("The number of positive elements is %d , negative is %d and zero's are %d",p,q,o);
}