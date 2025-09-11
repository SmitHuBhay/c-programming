//check if the character is small case or not
//AUTHOR:SMIT PANDIT
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character : \n");
    scanf("%c",&c);
    int x = c;
    (x>=97 && x<=122) ? printf("The character you've entered %c is small case character",c):printf("The character you've entered %c is not a small case character",c);
}