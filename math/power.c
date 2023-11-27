#include <math.h>  // Include the math library for pow function
#include <stdio.h> // Include the standard input/output library

int main() {
  double base, exponent,
      result; // Declare variables to store base, exponent, and result

  // Prompt the user to enter the base
  printf("Please enter the base: ");
  scanf("%lf", &base);

  // Prompt the user to enter the exponent
  printf("Please enter the exponent: ");
  scanf("%lf", &exponent);

  // Calculate the result using the pow function from the math library
  result = pow(base, exponent);

  // Display the result with two decimal places
  printf("%.2lf raised to %.2lf is %.2lf\n", base, exponent, result);

  return 0; // Return 0 to indicate successful program execution
}
