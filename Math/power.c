#include <math.h>
#include <stdio.h>

int main() {
  double base, exponent, result;
  printf("Please enter the base: ");
  scanf("%lf", &base);
  printf("Please enter the exponent: ");
  scanf("%lf", &exponent);

  result = pow(base, exponent);
  printf("%.2lf raised to %.2lf is %.2lf\n", base, exponent, result);
  return 0;
}
