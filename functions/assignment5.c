#include <stdio.h>

float multiply(float num1, float num2) { return num1 * num2; }

int main() {
  float n1, n2, product;
  printf("Please enter first number: ");
  scanf("%f", &n1);
  printf("Please enter first number: ");
  scanf("%f", &n2);
  product = multiply(n1, n2);
  printf("The product of %.2f and %.2f is %.2f\n", n1, n2, product);
  return 0;
}