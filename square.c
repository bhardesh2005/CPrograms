#include <stdio.h>

// Function to calculate the area of a square
float calculate_area(float side) { return (side * side); }

// Function to calculate the perimeter of a square
float calculate_perimeter(float side) { return (side * 4); }

int main() {
  float side;

  // Prompt the user to enter the length of the side of the square
  printf("Please enter the length of the side of the square: ");
  scanf("%f", &side);

  // Calculate the area and perimeter of the square using the functions
  float area = calculate_area(side);
  float perimeter = calculate_perimeter(side);

  // Display the results to the user
  printf("Area of the square is %f units\n", area);
  printf("Perimeter of the square is %f units\n", perimeter);

  return 0;
}
