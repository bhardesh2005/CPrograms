#include <math.h>
#include <stdio.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
  int originalNumber, remainder, n = 0, result = 0;
  originalNumber = number;

  // Calculate the number of digits in the number
  while (originalNumber != 0) {
    originalNumber /= 10;
    n++;
  }

  originalNumber = number;

  // Check if it is an Armstrong number
  while (originalNumber != 0) {
    remainder = originalNumber % 10;
    result += pow(remainder, n);
    originalNumber /= 10;
  }

  // Return true if the result is equal to the original number
  return result == number;
}

int main() {
  int n;

  // Prompt the user to input an integer
  printf("Please input an integer: ");
  scanf("%d", &n);
  printf("Armstrong numbers from 1 to %d are:\n", n);

  // Iterate from 1 to n and check for Armstrong numbers
  for (int i = 1; i <= n; i++) {
    if (isArmstrong(i)) {
      printf("%d\n", i);
    }
  }

  return 0; // Return 0 to indicate successful program execution
}
