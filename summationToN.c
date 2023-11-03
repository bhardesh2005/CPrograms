#include <stdio.h>

int main() {
  int n, summation;
  printf("Please enter the limit number: ");
  scanf("%d", &n);
  summation = n * (n + 1) / 2;
  printf("The sumation of numbers - 1...%d is %d\n", n, summation);
  return 0;
}
