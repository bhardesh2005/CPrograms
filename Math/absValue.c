#include <math.h>
#include <stdio.h>

int main() {
  double number;
  double absValue;

  // Prompt the user to enter a number
  printf("Please enter a number: ");
  scanf("%lf", &number);

  // Calculate the absolute value of the entered number using the 'fabs'
  // function
  absValue = fabs(number);

  // Display the absolute value to the user with two decimal places
  printf("The absolute value of %.2lf is %.2lf\n", number, absValue);

  return 0; // Return 0 to indicate successful program execution
}
