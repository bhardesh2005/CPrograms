// Write a program in C to find an element in an array and print an error
// message if the element is not found in the array
#include <stdio.h>

int main() {
  int n, element;

  // Prompt the user to enter the number of elements in the array
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int numbers[n];

  // Input the elements into the array
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Prompt the user to enter the element they want to search for
  printf("Enter the element you want to search for: ");
  scanf("%d", &element);

  // Search for the element in the array
  for (int i = 0; i < n; i++) {
    if (element == numbers[i]) {
      // Element found, print its value and index
      printf("%d found at index %d\n", element, i);
      return 0;
    }
  }

  // Element not found in the array
  printf("%d not found in the array\n", element);
  return 1;
}
