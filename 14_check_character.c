#include<stdio.h>
int main(){
    char c;
    printf("Enter your character: \n");
    scanf("%c",&c);
    int ascii= c;
    printf("The ascii code of character is %d \n",ascii);
    if((ascii>=33 && ascii<=47) || (ascii>=58 && ascii<=64) || (ascii>=91 && ascii<=96) || (ascii>122 && ascii<127) ){
        printf("%c is a special character \n",c);
        return 0;
    }
    if(ascii>=48 && ascii<=57){
        printf("%c is a number \n",c);
        return 0;
    }
    if(ascii>=65 && ascii<=90){
        printf("%c is a Capital letter \n",c);
        return 0;
    }
    if(ascii>=97 && ascii<=122){
        printf("%c is a Small letter \n",c);
        return 0;
    }
    else{
        printf("%c is an unknown character \n",c);
    }
}
//33-47 & 58-64 & 91-96 & 123-126 special characters(!,@,#,....) , 
//48-57 numbers
//65-90 capital letters
//97-122 small letters