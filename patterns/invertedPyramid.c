#include <stdio.h>

int main() {
  int n; // Number of rows
  printf("Please enter the number of rows: ");
  scanf("%d", &n);

  // Loop to print a pattern of asterisks in decreasing order of rows
  for (int i = n; i > 0; i--) {
    // Loop to print asterisks in each row
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n"); // Move to the next line after each row
  }

  return 0; // Return 0 to indicate successful program execution
}
