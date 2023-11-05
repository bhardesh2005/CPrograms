#include <stdio.h>

// Function to multiply two floating-point numbers
float multiply(float num1, float num2) { return num1 * num2; }

int main() {
  float n1, n2, product; // Declare variables to store input numbers and product

  // Prompt the user to enter the first number
  printf("Please enter the first number: ");
  scanf("%f", &n1);

  // Prompt the user to enter the second number
  printf("Please enter the second number: ");
  scanf("%f", &n2);

  // Calculate the product of the two numbers using the 'multiply' function
  product = multiply(n1, n2);

  // Display the result to the user with two decimal places
  printf("The product of %.2f and %.2f is %.2f\n", n1, n2, product);

  return 0; // Return 0 to indicate successful program execution
}
