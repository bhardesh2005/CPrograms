#include <stdio.h>

int main() {
  float num1, num2, num3, greatest;
  printf("Please enter the first number: ");
  scanf("%f", &num1);
  printf("Please enter the second number: ");
  scanf("%f", &num2);
  printf("Please enter the third number: ");
  scanf("%f", &num3);

  if (num1 > num2 && num1 > num3) {
    greatest = num1;
  } else if (num2 > num1 && num2 > num3) {
    greatest = num2;
  } else {
    greatest = num3;
  }

  printf("The greatest number is %.2f\n", greatest);
  return 0;
}
