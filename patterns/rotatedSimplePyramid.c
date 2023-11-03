#include <stdio.h>

int main() {
  int n;
  printf("Please enter number of rows: ");
  scanf("%d", &n);

  // Loop through each row
  for (int i = n; i > 0; i--) {
    // print leading spaces
    for (int j = 1; j < i; j++) {
      printf("  ");
    }

    // Print asterisks for the current row
    for (int j = i; j <= n; j++) {
      printf("* ");
    }

    // Move to the next line for the next row
    printf("\n");
  }

  return 0;
}
