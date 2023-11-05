#include <stdio.h>

int main() {
  float num;

  // Prompt the user to enter a number
  printf("Please enter a number: ");

  // Use scanf to read a floating-point number from the user
  if (scanf("%f", &num) != 1) {
    // If the input is not a valid number, display an error message and exit
    printf("Invalid Input. Please input a valid number.");
    return 1;
  }

  // Display a multiplication table for the entered number from 1 to 10
  for (int i = 1; i <= 10; i++) {
    // Calculate and display the result for each multiplication
    printf("%f * %2d = %3f\n", num, i, num * i);
  }

  return 0;
}
