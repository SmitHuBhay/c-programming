//PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
//AUTHR:SMIT PANDIT
#include<stdio.h>
int main(){
    int n, odd=0, even=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even+=i;
        }
        else{
            odd+=i;
        }
    }
    printf("Sum of all even numbers between 1 to %d is: %d\n",n,even);
    printf("Sum of all odd numbers between 1 to %d is: %d\n",n,odd);
}