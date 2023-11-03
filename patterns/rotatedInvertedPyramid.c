#include <stdio.h>

int main() {
  int n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  // 'k' is used to control the number of spaces before the asterisks
  int k = 2 * n - 2;

  // Outer loop to handle the number of rows 'n'
  for (int i = n; i > 0; i--) {
    // Inner loop to handle the number of spaces
    for (int j = 0; j < n - i; j++) {
      printf("  "); // Print spaces
    }

    // Decrement 'k' after each loop
    k = k - 2;

    // Inner loop to handle the number of columns (asterisks)
    for (int j = 0; j < i; j++) {
      printf("* "); // Print asterisks with space
    }

    // Ending line after each row
    printf("\n");
  }

  return 0;
}
