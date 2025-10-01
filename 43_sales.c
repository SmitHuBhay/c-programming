#include<stdio.h>
int main(){
    float sales,com;
        printf("Enter a number : ");
        scanf("%f",&sales);
    if(sales<0){
        printf("Enter a valid number");
        return 0;
    }
    else if(sales<=500){
        com = sales*5.0/100;
    }
    else if(sales>500 && sales<=2000){
        com = 35 + 10.0/100*(sales-500);
    }
    else if(sales>2000 && sales<=5000){
        com = 185 + 12.0/100*(sales-2000);
    }
    else{
        com = sales*12.5/100;
    }
    printf("The commission for %.0f $ item is %.2f $",sales,com);
}