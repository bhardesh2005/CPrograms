#include <stdio.h>

float calculate_area(float side)
{
  return (side * side);
}

float calculate_perimeter(float side)
{
  return (side * 4);
}

int main()
{
  float side;
  printf("Please enter of length of side of square: ");
  scanf("%f", &side);
  printf(
      "Area of square is %f units\nPerimeter of square is %f units\n",
      calculate_area(side), calculate_perimeter(side));
  return 0;
}
