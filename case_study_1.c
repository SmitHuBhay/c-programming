#include<stdio.h>
#include<string.h>
int main(){
    //convert word to ascii
    // int i;
    // char character;
    // char *word = "hello";
    // for(int i=0;i<5;i++){
    //     character = word[i];
    //     int ascii = character;
    //     printf("Character is %c and ascii code is %d",character,ascii);
    // }

    // int i,ascii,n=3,j;
    // char *a = "abc",temp,character1,character2;
    // for(i=1;i<n;i++){
    //     for(j=i+1;j<=n;j++){
    //         character1 = a[i];
    //         character2 = a[j];
    //         int ascii1= character1;
    //         int ascii2= character2;
    //         printf("%d %d",character1,character2);
    //         if(ascii1>ascii2){
    //             char temp = character1;
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }
    // for(i=0;i<3;i++){
    //     printf("%c",a[i]);
    // }
    // char temp;
    // char a[100][5];
    // int i,j;
    // // for(i=0;i<5;i++){
    // //     printf("Enter string %d\n",i+1);
    // //     gets(a[i]);
    // // }
    // a[][1] = 'hello';
    // a[][2] = 'damnwhatt';
    // a[][3] = 'helllllllllno';
    // for(i=2;i>=0;i--){
    //     for(j=0;j<i;j++){
    //         if(strcmp(a[i],a[j])>0){
    //             temp=a[j][100];
    //             a[j][100]=a[i][100];
    //             a[i][100]=temp;
    //         }
    //     }
    // }
    // for(i=0;i<3;i++){
    //     printf("string %d\n",i+1);
    //     puts(a[i]);
    // }
    int n,i,j;
    char a[100][100],t[100];

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s",a[i]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }

    for(i=0;i<n;i++) printf("%s\n",a[i]);
}

