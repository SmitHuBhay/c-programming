#include<stdio.h>
#include<stdlib.h>

int main(){
    int *a[3],*b[3],*c[3];
    int i,j,k;
    for(i=0;i<3;i++){
        a[i] = (int *)calloc(3,sizeof(int));
        b[i] = (int *)calloc(3,sizeof(int));
        c[i] = (int *)calloc(3,sizeof(int));
    }
    printf("For matrix A : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Element %d,%d :",i+1,j+1);
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("For matrix B : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Element %d,%d :",i+1,j+1);
            scanf("%d",(*(b+i)+j));
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            *(*(c+i)+j)=0;
            for(k=0;k<3;k++){
               *(*(c+i)+j)+=*(*(a+i)+k)*(*(*(b+k)+j));
            }
        }
    }
    printf("Printing matrix C \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",*(*(c+i)+j));
        }
        printf("\n");
    }
}