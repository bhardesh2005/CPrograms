#include <stdio.h>

// Define a constant for the upper limit
#define UPPER_LIMIT 25

// Function to print numbers from 0 to UPPER_LIMIT - 1
void printNumbers() {
  // Loop through the numbers and print each one
  for (int i = 0; i < UPPER_LIMIT; ++i) {
    printf("%d\n", i);
  }
}

int main() {
  // Call the function to print numbers
  printNumbers();

  // Indicate successful execution to the operating system
  return 0;
}
