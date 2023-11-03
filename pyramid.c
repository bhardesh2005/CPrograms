#include <stdio.h>

int main() {
  int numRows, space, asterisk;

  printf("Enter the number of rows for the pyramid: ");
  scanf("%d", &numRows);

  for (int i = 1; i <= numRows; i++) {
    // Print spaces
    for (space = 1; space <= numRows - i; space++) {
      printf(" ");
    }

    // Print asterisks
    for (asterisk = 1; asterisk <= 2 * i - 1; asterisk++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
