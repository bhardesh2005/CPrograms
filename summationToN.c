#include <stdio.h>

int main() {
  int n, summation;

  // Prompt the user to enter the limit number
  printf("Please enter the limit number: ");
  scanf("%d", &n);

  // Use the formula for the sum of the first 'n' natural numbers
  summation = n * (n + 1) / 2;

  // Display the result
  printf("The summation of numbers 1 to %d is %d\n", n, summation);

  return 0;
}
