#include <stdio.h>

int main() {
  // Declare variables for the number of elements and the maximum value
  int n, min;
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

  min = numbers[0]; // Initialize the min variable with the first element of the
                    // array

  // Find the maximum element in the array
  for (int i = 0; i < n; i++) {
    if (numbers[i] < min) {
      min = numbers[i]; // Update min if a smaller element is found
    }
  }

  printf("The smallest number in the array is %d\n",
         min); // Print the minimum value

  return 0; // Exit the program with a success code
}
