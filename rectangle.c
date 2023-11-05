#include <stdio.h>

// Function to calculate the area of a rectangle
float calculate_area(float length, float breadth) { return (length * breadth); }

// Function to calculate the perimeter of a rectangle
float calculate_perimeter(float length, float breadth) {
  return (2 * (length + breadth));
}

int main() {
  float length, breadth;

  // Prompt the user for the length of the rectangle
  printf("Please enter the length of the rectangle: ");
  scanf("%f", &length);

  // Prompt the user for the breadth of the rectangle
  printf("Please enter the breadth of the rectangle: ");
  scanf("%f", &breadth);

  // Calculate the area and perimeter using the functions and display the
  // results
  float area = calculate_area(length, breadth);
  float perimeter = calculate_perimeter(length, breadth);
  printf("Area of the rectangle is %f square units\n", area);
  printf("Perimeter of the rectangle is %f units\n", perimeter);

  return 0;
}
