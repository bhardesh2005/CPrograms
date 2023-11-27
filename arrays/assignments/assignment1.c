// Write a program in C that calculates the sum of all elements in the array.
#include <stdio.h>

int main() {
  int n, sum = 0;

  // Prompt the user for the number of elements
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int numbers[n];

  // Prompt the user to enter each element and store them in an array
  for (int i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Calculate the sum of all elements in the array
  for (int i = 0; i < n; i++) {
    sum += numbers[i];
  }

  // Display the sum of all elements in the array
  printf("Sum of all the elements in the array: %d", sum);

  return 0;
}
