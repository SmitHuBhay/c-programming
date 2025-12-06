#include<stdio.h>
#include<string.h>
int main(){
    char a[500],*ptr;
    int i,k=0;
    printf("Enter a string : ");
    fgets(a,sizeof(a),stdin);
    int n = strlen(a);
    for(i=0;i<n;i++){
        ptr = &a[i];
        if(*ptr == ' ' || *ptr == '\n' || *ptr == '\t' || *ptr == ',' || *ptr == '.' || *ptr == '!' || *ptr == '?'){k++;}
    }
    printf("The number of words is %d",k);
}