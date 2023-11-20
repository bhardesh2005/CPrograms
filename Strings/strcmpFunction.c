#include <stdio.h>
#include <string.h>

int main() {
  // Declare and initialize two character arrays
  char string1[] = "Jerry";
  char string2[] = "Ferry";

  // Compare string1 with a constant string "Jerry"
  int difference1 = strcmp(string1, "Jerry");

  // Compare string1 with string2
  int difference2 = strcmp(string1, string2);

  // Compare string1 with a constant string "Jerry boy"
  int difference3 = strcmp(string1, "Jerry boy");

  // Print the results of the comparisons
  printf("Comparison 1: %d\nComparison 2: %d\nComparison 3: %d\n", difference1,
         difference2, difference3);

  // Return 0 to indicate successful execution
  return 0;
}
