#include <math.h>
#include <stdio.h>

int main() {
  double base1, base2, exponent1, exponent2, result; // Declare variables

  // Prompt the user to enter the base and exponent of the first number
  printf("Please enter the base of the first number: ");
  scanf("%lf", &base1);
  printf("Please enter the exponent of the first number: ");
  scanf("%lf", &exponent1);

  // Prompt the user to enter the base and exponent of the second number
  printf("Please enter the base of the second number: ");
  scanf("%lf", &base2);
  printf("Please enter the exponent of the second number: ");
  scanf("%lf", &exponent2);

  // Calculate the result by raising the first base to the first exponent
  // and adding it to the result of raising the second base to the second
  // exponent
  result = pow(base1, exponent1) + pow(base2, exponent2);

  // Display the result with two decimal places
  printf("%.2lf raised to %.2lf + %.2lf raised to %.2lf = %.2lf\n", base1,
         exponent1, base2, exponent2, result);

  return 0; // Return 0 to indicate successful program execution
}
