#include <stdio.h>

int main() {
  // Declare an integer variable
  int num;

  // Prompt the user to enter a number
  printf("Enter a number: ");

  // Read the input number from the user
  scanf("%d", &num);

  // Declare a pointer variable and assign the address of num to it
  int *ptr = &num;

  // Display the value of the number using the pointer
  printf("Value of the number: %d\n", *ptr);

  // Display the address of num using the pointer
  printf("Address of num: %p\n", (void *)ptr);

  // Return 0 to indicate successful execution
  return 0;
}
