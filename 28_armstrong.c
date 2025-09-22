#include <math.h>
#include <stdio.h>
int main() {
  int i, n, r, num, m, sum = 0;
  printf("Enter your number: ");
  printf("\n");
  scanf("%d", &num);
  n = num;
  r=n;
  for (i = 0; num != 0; i++) {
    num = num / 10;
  }
  printf("i = %d\n", i);
  for (int z = 0; n != 0; z++) {
    m = n % 10;
    sum = pow(m, i) + sum;
    n = n / 10;
  }
  if (r == sum) {
    printf("The number is Arstrong Number");
  } else {
    printf("It is not an Armstrong Number");
  }
}