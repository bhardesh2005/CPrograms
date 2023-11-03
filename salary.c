#include <stdio.h>

int main() {
  float salary;
  printf("Please enter employee salary: ");
  scanf("%f", &salary);

  if (salary < 15000.0) {
    salary = salary + (0.1 * salary);
  } else {
    salary = salary + (0.05 * salary);
  }
  printf("%.2f", salary);
  return 0;
}