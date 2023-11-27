#include <stdio.h>

int main() {
  // Declare variables for the number of elements and the maximum value
  int n, max;
  printf("Enter number of elements: ");
  scanf("%d", &n); // Read the number of elements from the user

  if (n <= 0) {
    // Check for a valid number of elements
    printf("Invalid number of elements\n");
    return 1; // Exit the program with an error code
  }

  int numbers[n]; // Declare an array to store the numbers

  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &numbers[i]); // Read and store each element in the array
  }

  max = numbers[0]; // Initialize the max variable with the first element of the
                    // array

  // Find the maximum element in the array
  for (int i = 0; i < n; i++) {
    if (numbers[i] > max) {
      max = numbers[i]; // Update max if a larger element is found
    }
  }

  printf("The greatest number in the array is %d\n",
         max); // Print the maximum value

  return 0; // Exit the program with a success code
}
