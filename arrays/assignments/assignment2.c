// Write a program to find the greatest and the smallest numbers in the array.
#include <stdio.h>

int main() {
  int n, greatest, smallest;

  // Prompt the user to enter the number of elements
  printf("Enter number of elements: ");
  scanf("%d", &n);

  int numbers[n];

  // Prompt the user to enter each element
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Initialize the greatest and smallest variables with the first element
  greatest = smallest = numbers[0];

  // Find the greatest and smallest numbers in the array
  for (int i = 0; i < n; i++) {
    if (numbers[i] > greatest) {
      greatest = numbers[i];
    }

    if (numbers[i] < smallest) {
      smallest = numbers[i];
    }
  }

  // Display the greatest and smallest numbers in the array
  printf("Greatest number of the array: %d\n", greatest);
  printf("Smallest number of the array: %d\n", smallest);

  return 0;
}
