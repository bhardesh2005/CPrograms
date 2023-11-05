#include <stdio.h>

int main() {
  // Declare variables for three numbers and the greatest number
  float num1, num2, num3, greatest;

  // Prompt the user to enter the first number
  printf("Please enter the first number: ");
  scanf("%f", &num1);

  // Prompt the user to enter the second number
  printf("Please enter the second number: ");
  scanf("%f", &num2);

  // Prompt the user to enter the third number
  printf("Please enter the third number: ");
  scanf("%f", &num3);

  // Compare the numbers to find the greatest one
  if (num1 > num2 && num1 > num3) {
    greatest = num1;
  } else if (num2 > num1 && num2 > num3) {
    greatest = num2;
  } else {
    greatest = num3;
  }

  // Display the greatest number with two decimal places
  printf("The greatest number is %.2f\n", greatest);

  return 0;
}
