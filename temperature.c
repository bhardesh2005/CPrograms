#include <stdio.h>

float celcius_to_farenheit(float celcius)
{
  float farenheit = (9.0 / 5.0 * celcius) + 32;
  return farenheit;
}

int main()
{
  float c_temp;
  printf("Enter temperature value in celcius: ");
  scanf("%f", &c_temp);

  printf("The temperature in farenheit is %f\n", celcius_to_farenheit(c_temp));
  return 0;
}
