#include <stdio.h>

int main() {
  float num1, num2, num3, greatest;

  // Prompt and read the first number
  printf("Enter the first number: ");
  if (scanf("%f", &num1) != 1) {
    printf("Invalid input. Please enter a valid number.\n");
    return 1; // Exit the program with an error code
  }

  // Prompt and read the second number
  printf("Enter the second number: ");
  if (scanf("%f", &num2) != 1) {
    printf("Invalid input. Please enter a valid number.\n");
    return 1; // Exit the program with an error code
  }

  // Prompt and read the third number
  printf("Enter the third number: ");
  if (scanf("%f", &num3) != 1) {
    printf("Invalid input. Please enter a valid number.\n");
    return 1; // Exit the program with an error code
  }

  // Initialize 'greatest' with the value of 'num1'
  greatest = num1;

  // Compare 'num2' and 'greatest' to find the maximum
  if (num2 > greatest) {
    greatest = num2;
  }

  // Compare 'num3' and 'greatest' to find the maximum
  if (num3 > greatest) {
    greatest = num3;
  }

  // Print the greatest number with one decimal place
  printf("The greatest number is: %.1f\n", greatest);

  return 0;
}
