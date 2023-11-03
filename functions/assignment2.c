#include <stdio.h>

float square(float number) { return number * number; }

int main() {
  float n, n_square;
  printf("Please enter a number: ");
  scanf("%f", &n);
  n_square = square(n);
  printf("%.2f squared is %.2f\n", n, n_square);
  return 0;
}
