#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int number) {
  int originalNumber = number, reversedNumber = 0;

  // Reverse the number
  for (; number > 0; number /= 10) {
    reversedNumber = reversedNumber * 10 + number % 10;
  }

  return originalNumber == reversedNumber; // Returns true or false
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Palindromic numbers from 1 to %d:\n", n);

  for (int i = 1; i <= n; i++) {
    if (isPalindrome(i)) {
      printf("%d\n", i);
    }
  }
  return 0;
}
