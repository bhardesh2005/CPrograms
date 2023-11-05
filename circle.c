#include <stdio.h>

// Function to calculate and return the area of a circle
float calculate_area(float radius) { return (3.14 * radius * radius); }

// Function to calculate and return the circumference of a circle
float calculate_circumference(float radius) { return (2.0 * 3.14 * radius); }

int main() {
  float rad; // Declare a variable to store the radius of the circle

  // Prompt the user to enter the radius of the circle
  printf("Please enter the radius of the circle: ");
  scanf("%f",
        &rad); // Read the radius entered by the user and store it in 'rad'

  // Call the 'calculate_area' and 'calculate_circumference' functions and print
  // the results
  printf("Area of the circle is %f square units\n", calculate_area(rad));
  printf("Circumference of the circle is %f units\n",
         calculate_circumference(rad));

  return 0;
}
