#include <stdio.h>

// Function to calculate the square of a given number
float square(float number) { return number * number; }

int main() {
  float n, n_square;

  // Prompt the user to enter a number
  printf("Please enter a number: ");

  // Read the user's input and store it in the variable n
  scanf("%f", &n);

  // Call the square function to calculate the square of the input number
  n_square = square(n);

  // Display the result with two decimal places
  printf("%.2f squared is %.2f\n", n, n_square);

  return 0;
}
