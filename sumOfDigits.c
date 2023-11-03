#include <stdio.h>

int main() {
  int number, digit, sum = 0;

  printf("Enter an integer: ");
  scanf("%d", &number);

  // Check if the number is positive
  if (number < 0) {
    number = -number;
  }

  while (number > 0) {
    digit = number % 10; // Get the remainder
    sum += digit;        // Add the remainder digit to sum
    number /= 10;        // Remove the last digit
  }

  printf("The sum of the digits of the number is %d\n", sum);
  return 0;
}
