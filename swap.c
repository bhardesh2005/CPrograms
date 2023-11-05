#include <stdio.h>

int main() {
  int num1, num2, temp;

  // Prompt the user to enter the first number
  printf("Please enter number 1: ");
  scanf("%d", &num1);

  // Prompt the user to enter the second number
  printf("Please enter number 2: ");
  scanf("%d", &num2);

  // Swap the values of num1 and num2 using a temporary variable
  temp = num1;
  num1 = num2;
  num2 = temp;

  // Display the swapped values
  printf("The swapped values are - \n");
  printf("Number 1: %d\n", num1);
  printf("Number 2: %d\n", num2);

  return 0;
}
