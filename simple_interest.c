#include <stdio.h>

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
  // Calculate interest using the formula (P * R * T) / 100
  float interest = (principal * rate * time) / 100;
  return interest;
}

int main() {
  float principal, rate, time;

  // Prompt the user to enter the principal amount
  printf("Please enter the principal amount: ");
  if (scanf("%f", &principal) != 1) {
    printf("Invalid input. Please enter a valid amount.\n");
    return 1; // Exit the program with an error code
  }

  // Prompt the user to enter the rate of interest
  printf("Please enter the rate of interest: ");
  if (scanf("%f", &rate) != 1) {
    printf("Invalid input. Please enter a valid rate.\n");
    return 1; // Exit the program with an error code
  }

  // Prompt the user to enter the time in years
  printf("Please enter time (in years): ");
  if (scanf("%f", &time) != 1) {
    printf("Invalid input. Please enter a valid time.\n");
    return 1; // Exit the program with an error code
  }

  // Display a table header
  printf("%-15s %15s %15s %15s\n", "Principal Amt", "Rate of Interest",
         "Time (in years)", "Simple Interest");

  // Calculate and display the results
  printf("%-15.2f %15.1f %15.0f %15.2f\n", principal, rate, time,
         calculateSimpleInterest(principal, rate, time));

  return 0;
}
