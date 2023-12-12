#include <stdio.h>

int main() {
  // Declare and initialize variables
  // This will lead to undefined behaviour as variables 'i' and 'j' will have
  // garbage values
  auto int i, j;

  // Print the values of i and j
  printf("Values of i and j: %d %d\n", i, j);

  return 0; // Return 0 to indicate successful program execution
}
