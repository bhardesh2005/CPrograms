#include <stdio.h>

int main() {
  float num1, num2, greatest;
  printf("Please enter the first number: ");
  scanf("%f", &num1);
  printf("Please enter the second number: ");
  scanf("%f", &num2);

  greatest = (num1 > num2) ? num1 : num2;
  printf("The greatest number is %.2f\n", greatest);
  return 0;
}
