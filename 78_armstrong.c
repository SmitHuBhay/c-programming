#include <math.h>
#include <stdio.h>
int length(int);
int armstrong(int);
int main()
{
  int i, n, r, num;
  printf("Enter your number: \n");
  scanf("%d", &num);
  int m = armstrong(num);
  if (m == num)
  {
    printf("The number %d is an Armstrong Number",num);
  }
  else
  {
    printf("The number %d is not an Armstrong Number",num);
  }
}

int length(int num){
  int i;
    for (i = 0; num != 0; i++)
  {
    num = num / 10;
  }
  return i;
}
int armstrong(int num){
  int z,sum=0,m;
  int i = length(num);
  for (z = 0; num != 0; z++)
  {
    m = num % 10;
    sum = pow(m, i) + sum;
    num = num / 10;
  }
  return sum;
}