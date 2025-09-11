//calculate area of triangle
//AUTHOR-SMIT PANDIT
#include <stdio.h>
#include <math.h>
int main()
{
    int side_a, side_b, side_c, s;
    float area;
    printf("Enter the length of 1st side : ");
    scanf("%d", &side_a);
    printf("Enter the length of 2nd side : ");
    scanf("%d", &side_b);
    printf("Enter the length of 3rd side : ");
    scanf("%d", &side_c);
    s = (side_a + side_b + side_c) / 2;
    area = pow(s * (s - side_a) * (s - side_b) * (s - side_c), 0.5);
    printf("The area of triangle is %.2f ", area);
}