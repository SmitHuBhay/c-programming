//Value of Y
//AUTHOR:SMIT PANDIT
#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter your numbers (in the form of (x,n))");
    int x, n, y;
    scanf("(%d,%d)", &x, &n);
    printf("You entered: x = %d, n = %d\n", x, n);
    if(n==1){
        y=1+x;
    }
    else if(n==2){
        y=1+x/n;
    }
    else if(n==3){
        y=1+pow(x,n);
    }
    else{
        y=1+n*x;
    }
    printf("The value of y is: %d\n", y);
}