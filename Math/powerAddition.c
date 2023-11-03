#include <math.h>
#include <stdio.h>

int main() {
  double base1, base2, exponent1, exponent2, result;
  printf("Please enter base of first number: ");
  scanf("%lf", &base1);
  printf("Please enter exponent of first number: ");
  scanf("%lf", &exponent1);

  printf("Please enter base of second number: ");
  scanf("%lf", &base2);
  printf("Please enter exponent of second number: ");
  scanf("%lf", &exponent2);

  result = pow(base1, exponent1) + pow(base2, exponent2);
  printf("%.2lf raised to %.2lf + %.2lf raised to %.2lf = %.2lf", base1,
         exponent1, base2, exponent2, result);
  return 0;
}
