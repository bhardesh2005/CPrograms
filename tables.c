#include <stdio.h>

int main() {
  float num;
  printf("Please enter a number: ");
  if (scanf("%f", &num) != 1) {
    printf("Invalid Input. Please input a valid number.");
    return 1;
  }

  for (int i = 1; i <= 10; i++) {
    printf("%-3.1f * %2d = %3.2f\n", num, i, num * i);
  }

  return 0;
}
