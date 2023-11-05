#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
  if (num <= 1) {
    return 0; // 0 and 1 are not prime
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return 0; // If the number is divisible by any number between 2 and
                // sqrt(num), it's not prime
    }
  }
  return 1; // If no divisors were found, the number is prime
}

int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("Prime numbers from 1 to %d are:\n", n);

  for (int i = 2; i <= n; i++) { // Start from 2 since 1 is not prime
    if (isPrime(i)) {
      printf("%d\n", i); // Print the prime numbers
    }
  }

  return 0;
}
