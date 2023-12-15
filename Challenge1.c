#include <stdio.h>

int main() {
  float num1, num2;
  float sum1, sum2, sum3;

  printf("Enter the first float number: ");
  scanf("%f", &num1);

  printf("Enter the second float number: ");
  scanf("%f", &num2);

  sum1 = num1 + num2;
  sum2 = num1 * num2;
  sum3 = num1 / num2;

  printf("The sum of all number is : %.2f\n", sum1);
  printf("The multiplication of all number is : %.2f\n", sum2);
  printf("The division of all number is : %.2f\n", sum3);

  return 0;
}