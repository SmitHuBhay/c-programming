//calculate the percentage 
//AUTHOR - SMIT PANDIT
#include<stdio.h>
int main(){
    int math,phy,eng,chem,cs,total;
    printf("Enter your Math Score : \n");
    scanf("%d",&math);
    printf("Enter your Chemistry Score : \n");
    scanf("%d",&chem);
    printf("Enter your Physics Score : \n");
    scanf("%d",&phy);
    printf("Enter your English Score : \n");
    scanf("%d",&eng);
    printf("Enter your CS Score : \n");
    scanf("%d",&cs);
    total=cs+math+chem+phy+eng;
    printf("You scored a total of %d out of 500 and secured %.2f%%",total,total/5.0);
}