#include <stdio.h>

float circleArea(float radius) { return radius * radius * 3.1412; }

int main() {
  float radius, area;
  printf("Enter radius of circle - ");
  scanf("%f", &radius);
  area = circleArea(radius);
  printf("The area of the circle is %.3f units\n", area);
  return 0;
}