#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    char *ptr;
    int i,j,n;
    printf("Enter your string : ");
    scanf("%s",&a);
    n = strlen(a);
    for(i=0;i<n;i++){
            ptr = &a[n-i-1];
            b[i] = *ptr;
    }
    b[n]='\0';
    printf("After copying,array b is : ");
    puts(b);
}