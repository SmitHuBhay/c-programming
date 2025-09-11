//calculating the gross salary
//AUTHOR - SMIT PANDIT
#include<stdio.h>
int main(){
    int salary,income_tax,stocks,other_earnings,gross_salary;
    printf("Enter your Salary\n");
    scanf("%d",&salary);
    printf("Enter the income tax paid by you\n");
    scanf("%d",&income_tax);
    printf("Enter your stock gains\n");
    scanf("%d",&stocks);
    printf("Enter your other earnings\n");
    scanf("%d",&other_earnings);
    gross_salary=salary-income_tax+stocks+other_earnings;
    printf("You earn $%d from all your sources",gross_salary);
}