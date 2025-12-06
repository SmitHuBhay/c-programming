#include <stdio.h>
int main(){
    int a[3][3],b[3][3],sub[3][3];
    int i,j;
    printf("Enter elements of first matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d,%d: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d,%d: ", i + 1, j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Difference of the matrices:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
}