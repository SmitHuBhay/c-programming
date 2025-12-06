#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("LNMIITSTUDENT.DAT","a+");
    if(fp==NULL){
        printf("File not found");
        return 1;
    }
    char s[100];
    system("cls");
    printf("Enter the string to append: ");
    fgets(s, sizeof(s), stdin);
    fprintf(fp,"%s", s);
    fclose(fp);
}