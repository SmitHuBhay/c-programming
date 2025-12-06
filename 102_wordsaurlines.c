#include<stdio.h>
int main(){
    FILE *fp=fopen("./files/read.txt","a+");
    char ch;
    int c=0,w=0,l=0;
    if(fp==NULL){
        printf("File not found");
        return 1;
    }
    else{
        while((ch=fgetc(fp))!=EOF){
            c++;
            if(ch == ' ') w++;
            if(ch == '\t' || ch == ',' || ch == '.' || ch == '!' || ch == '?') {l++;w++;}
        }
    }
    fclose(fp);
    printf("%d,%d,%d",c,w,l);
}