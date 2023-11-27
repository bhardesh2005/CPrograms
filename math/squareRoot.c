#include <math.h> // Include the math library for the sqrt() function
#include <stdio.h>

int main() {
  double number;
  double squareRoot;

  // Prompt the user to enter an integer
  printf("Please enter a number: ");
  scanf("%lf", &number);

  // Calculate the square root of the input number using the sqrt() function
  squareRoot = sqrt(number);

  // Display the square root result with two decimal places
  printf("Square root of %.2lf is %.2lf\n", number, squareRoot);

  return 0; // Return 0 to indicate successful program execution
}
