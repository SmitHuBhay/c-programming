#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
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
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The mulitplied matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}