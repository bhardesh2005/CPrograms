#include <stdio.h>

int main() {
  float salary;

  // Prompt the user to enter an employee's salary
  printf("Please enter employee salary: ");
  scanf("%f", &salary);

  // Check if the salary is less than 15000.0
  if (salary < 15000.0) {
    // If salary is less than 15000, increase it by 10%
    salary = salary + (0.10 * salary); // Add 10% bonus
  } else {
    // If salary is 15000 or more, increase it by 5%
    salary = salary + (0.05 * salary); // Add 5% bonus
  }

  // Display the total salary with two decimal places
  printf("Total salary: %.2f", salary);

  return 0;
}
