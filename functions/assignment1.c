#include <stdio.h>

// Function to calculate the area of a circle
float circleArea(float radius) { return radius * radius * 3.1412; }

int main() {
  float radius, area;

  // Prompt the user to enter the radius of the circle
  printf("Enter radius of circle: ");
  scanf("%f", &radius);

  // Calculate the area of the circle using the circleArea function
  area = circleArea(radius);

  // Display the calculated area with 3 decimal places
  printf("The area of the circle is %.3f units\n", area);

  return 0;
}
