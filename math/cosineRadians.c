#include <math.h> // Include the math library for the 'cos' function
#include <stdio.h>

int main() {
  // Declare variables to store angle and cosine value
  double angle, cosineValue;

  // Prompt the user to enter the value of the angle in radians
  printf("Please enter the value of the angle in radians: ");
  scanf("%lf", &angle);

  // Calculate the cosine of the angle using the 'cos' function
  cosineValue = cos(angle);

  // Display the result to the user with two decimal places
  printf("The cosine of %.2lf radians is %.2lf\n", angle, cosineValue);

  return 0; // Return 0 to indicate successful program execution
}
