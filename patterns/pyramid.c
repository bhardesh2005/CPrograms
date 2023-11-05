#include <stdio.h>

int main() {
  int numRows, space, asterisk;

  // Prompt the user to enter the number of rows for the pyramid
  printf("Enter the number of rows for the pyramid: ");
  scanf("%d", &numRows);

  // Loop to print each row of the pyramid
  for (int i = 1; i <= numRows; i++) {
    // Print leading spaces to center the pyramid
    for (space = 1; space <= numRows - i; space++) {
      printf(" ");
    }

    // Print asterisks for the current row
    for (asterisk = 1; asterisk <= 2 * i - 1; asterisk++) {
      printf("*");
    }

    // Move to the next line for the next row
    printf("\n");
  }

  return 0; // Return 0 to indicate successful program execution
}
