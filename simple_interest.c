#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, float time) {
  float interest = (principal * rate * time) / 100;
  return interest;
}

int main() {
  float p, r, t;

  printf("Please enter principal amount: ");
  if (scanf("%f", &p) != 1) {
    printf("Invalid input. Please enter a valid amount.");
    return 1;
  }

  printf("Please enter rate of interest: ");
  if (scanf("%f", &r) != 1) {
    printf("Invalid input. Please enter a valid rate");
    return 1;
  }

  printf("Please enter time(in years): ");
  if (scanf("%f", &t) != 1) {
    printf("Invalid input. Please enter a valid time.");
  }

  printf("%-15s %15s %15s %15s\n", "Principal Amt", "Rate of Interest",
         "Time (in years)", "Simple Interest");
  printf("%-15.2f %15.1f %15.0f %15.2f\n", p, r, t,
         calculateSimpleInterest(p, r, t));

  return 0;
}
