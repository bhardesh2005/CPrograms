#include <math.h> // Include the math library for the 'log' function
#include <stdio.h>

int main() {
  // Declare variables to store input number and log result
  double number, logValue;

  // Prompt the user to enter a number
  printf("Please enter a number: ");
  scanf("%lf", &number);

  // Calculate the natural logarithm of the entered number using the 'log'
  // function
  logValue = log(number);

  // Display the result to the user with two decimal places for the input and
  // four decimal places for the log value
  printf("The natural log of %.2lf is %.4lf\n", number, logValue);

  return 0; // Return 0 to indicate successful program execution
}
