#include <stdio.h>

int main() {
  float num1, num2, result;
  char operation;
  printf("Please enter the first number: ");
  if (scanf("%f", &num1) != 1) {
    printf("Invalid input. Please enter a valid number.");
    return 1;
  }

  printf("Please enter the second number: ");
  if (scanf("%f", &num2) != 1) {
    printf("Invalid input. Please enter a valid number.");
    return 1;
  }

  printf("Please enter the operation to perform[+, -, *, /]: ");
  if (scanf(" %c", &operation) != 1) {
    printf("Invalid input. Please enter a valid operation.");
    return 1;
  }
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
    result = num1 / num2;
    break;
  default:
    printf("Invalid input. Please enter a valid operation.");
  }

  printf("The result: %.2f", result);

  return 0;
}
