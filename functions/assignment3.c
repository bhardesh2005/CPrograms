#include <stdio.h>

int main() {
  // Declare variables to store two numbers and the greatest one
  float num1, num2, greatest;
  printf("Please enter the first number: ");
  scanf("%f", &num1); // Read the first number from the user
  printf("Please enter the second number: ");
  scanf("%f", &num2); // Read the second number from the user

  // Use the conditional (ternary) operator to find the greatest number
  greatest = (num1 > num2) ? num1 : num2;

  printf("The greatest number is %.2f\n",
         greatest); // Print the greatest number with 2 decimal places
  return 0;
}
