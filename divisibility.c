#include <stdio.h>

int main() {
  printf("Numbers divisible by 3 and 5:\n");

  // Iterate through numbers from 1 to 300
  for (int i = 1; i <= 300; i++) {
    // Check if the current number is divisible by both 3 and 5
    if (i % 3 == 0 && i % 5 == 0) {
      // If divisible, print the number
      printf("%d\n", i);
    }
    // If not divisible, do nothing (no need for the ternary operator)
  }

  return 0;
}
