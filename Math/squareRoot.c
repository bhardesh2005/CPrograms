#include <math.h>
#include <stdio.h>

int main() {
  double number;
  double squareRoot;
  printf("Please enter an integer: ");
  scanf("%lf", &number);
  squareRoot = sqrt(number);
  printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
  return 0;
}
