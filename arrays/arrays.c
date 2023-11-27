#include <stdio.h>

int main() {
  int n;

  // Prompt the user to enter the number of elements
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Check if the user provided a valid number of elements
  if (n <= 0) {
    printf("Invalid number of elements\n");
    return 1; // Exit the program with an error code
  }

  // Declare an array of integers with 'n' elements
  int numbers[n];

  // Prompt the user to enter 'n' integers
  printf("Enter %d integers:\n", n);

  // Use a loop to read and store 'n' integers in the array
  for (int i = 0; i < n; i++) {
    printf("Element %d: ", i + 1);
    scanf("%d", &numbers[i]); // Read and store each integer in the array
  }

  // Print the elements stored in the array
  printf("Elements in the array are:\n");
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
  }
  printf("]\n");

  return 0; // Exit the program with a success code
}
