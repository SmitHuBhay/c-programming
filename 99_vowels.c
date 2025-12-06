#include<stdio.h>
int main(){
    FILE *fp=fopen("./files/read.txt","a+");
    char ch;
    int v=0;
    if(fp==NULL){
        printf("File not found");
        return 1;
    }
    else{
        while((ch=fgetc(fp))!=EOF){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
               ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                v++;
            }
        }
        printf("Number of vowels = %d\n",v);
        fclose(fp);
        return 0;
    }
}