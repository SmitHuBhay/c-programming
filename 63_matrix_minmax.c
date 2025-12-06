#include <stdio.h>  

int main(){
    int a[3][3];
    int min, max;  
    printf("Enter elements of the matrix:\n");
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d,%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    min = a[0][0];
    max = a[0][0]; 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]<min){
                min = a[i][j];
            }
            if(a[i][j]>max){
                max = a[i][j];
            }
        }
    }

    printf("Minimum element: %d & Maximum element: %d\n", min, max);
    return 0;
}