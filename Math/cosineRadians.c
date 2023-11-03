#include <math.h>
#include <stdio.h>

int main() {
  double angle, cosineValue;
  printf("Please enter value of angle in radians: ");
  scanf("%lf", &angle);
  cosineValue = cos(angle);
  printf("The cosine of %.2lf radians is %.2lf\n", angle, cosineValue);
  return 0;
}
