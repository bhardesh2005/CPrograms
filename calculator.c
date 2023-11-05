#include <stdio.h>

int main() {
  // Declare variables to store input numbers and the result
  float num1, num2, result;
  // Declare a variable to store the operation character
  char operation;

  // Prompt the user to enter the first number
  printf("Please enter the first number: ");
  // Use scanf to read a floating-point number and check for valid input
  if (scanf("%f", &num1) != 1) {
    printf("Invalid input. Please enter a valid number.");
    return 1; // Exit the program with an error code
  }

  // Prompt the user to enter the second number
  printf("Please enter the second number: ");
  // Use scanf to read a floating-point number and check for valid input
  if (scanf("%f", &num2) != 1) {
    printf("Invalid input. Please enter a valid number.");
    return 1;
  }

  // Prompt the user to enter the desired operation (+, -, *, /)
  printf("Please enter the operation to perform (+, -, *, /): ");
  // Use scanf to read a character (operation) and check for valid input
  if (scanf(" %c", &operation) != 1) {
    printf("Invalid input. Please enter a valid operation.");
    return 1;
  }

  // Perform the selected operation based on the user's input
  switch (operation) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    // Check for division by zero
    if (num2 == 0) {
      printf("Division by zero is not allowed.");
      return 1;
    }
    result = num1 / num2;
    break;
  default:
    printf("Invalid input. Please enter a valid operation.");
    return 1;
  }

  // Display the result with two decimal places
  printf("The result: %.2f", result);

  return 0;
}
