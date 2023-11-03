#include <stdio.h>

int main() {
  float num1, num2, num3, greatest;

  printf("Enter the first number: ");
  if (scanf("%f", &num1) != 1) {
    printf("Invalid input. Please enter a valid number.\n");
    return 1;
  }

  printf("Enter the second number: ");
  if (scanf("%f", &num2) != 1) {
    printf("Invalid inpu. Please enter a valid number.\n");
    return 1;
  }

  printf("Enter the third number: ");
  if (scanf("%f", &num3) != 1) {
    printf("Invalid input. Please enter a valid number.\n");
  }

  greatest = num1;
  if (num2 > greatest) {
    greatest = num2;
  } 
  
  if (num3 > greatest) {
    greatest = num3;
  }

  printf("The greatest number is: %.1f", greatest);
  return 0;
}
