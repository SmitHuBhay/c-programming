#include<stdio.h>
int main(){
    int i,a;
    
    printf("Enter your number : ");
    scanf("%d",&a);
    if(a==0 || a==1){
        printf("The number %d is neither a composite number nor a prime number",a);
        return 0;
    }
    if(a==2){
        printf("The number %d is a prime number",a);
        return 0;
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("The number %d is a composite number",a);
            return 0;
        }
    }
    printf("The number %d is a prime number",a);
    return 0;
}