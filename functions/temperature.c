#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
  float fahrenheit = (celsius * 9.0 / 5.0) + 32;
  return fahrenheit;
}

int main() {
  float c_temp;

  // Prompt the user to enter a temperature value in Celsius
  printf("Enter temperature value in Celsius: ");
  scanf("%f", &c_temp);

  // Call the conversion function and print the result
  float f_temp = celsius_to_fahrenheit(c_temp);
  printf("The temperature in Fahrenheit is %.2f\n", f_temp);

  return 0;
}
