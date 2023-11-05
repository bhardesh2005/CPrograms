#include <stdbool.h>
#include <stdio.h>

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
  int originalNumber = number, reversedNumber = 0;

  // Reverse the number
  for (; number > 0; number /= 10) {
    reversedNumber = reversedNumber * 10 + number % 10;
  }

  // Return true if the original number is equal to the reversed number, else
  // return false
  return originalNumber == reversedNumber;
}

int main() {
  int n;

  // Prompt the user to enter a number
  printf("Enter a number: ");
  scanf("%d", &n);

  // Display a header for the palindromic numbers
  printf("Palindromic numbers from 1 to %d:\n", n);

  // Loop through numbers from 1 to 'n' and print palindromic numbers
  for (int i = 1; i <= n; i++) {
    if (isPalindrome(i)) {
      printf("%d\n", i); // Print the palindromic number
    }
  }

  return 0; // Return 0 to indicate successful program execution
}
