#include <math.h>
#include <stdio.h>

int main() {
  double number;
  double absValue;
  printf("Please enter a number: ");
  scanf("%lf", &number);
  absValue = fabs(number);
  printf("The absolute value of %.2lf is %.2lf\n", number, absValue);
  return 0;
}
