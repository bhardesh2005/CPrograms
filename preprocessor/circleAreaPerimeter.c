#include <stdio.h>

// Define a constant for PI
#define PI 3.1415

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
  // Formula for calculating the area of a circle: A = π * r^2
  float circleArea = PI * radius * radius;
  return circleArea;
}

int main() {
  // Declare variables
  float radius;

  // Prompt user for input
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  // Calculate and display the area of the circle
  printf("Area of the circle: %.2f\n", calculateCircleArea(radius));

  return 0;
}
