#include <math.h>
#include <stdio.h>

int main() {
  double number, logValue;
  printf("Please enter a number: ");
  scanf("%lf", &number);

  logValue = log(number);
  printf("The natural log of %.2lf is %.4lf", number, logValue);
  return 0;
}
