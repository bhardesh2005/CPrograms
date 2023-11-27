#include <stdio.h>

int main() {
  struct student {
    int roll;
    float percentage;
  };

  struct student person;
  person.roll = 33;
  person.percentage = 100;

  printf("Person Roll Number: %d\nPerson Percentage: %.2f%%\n", person.roll,
         person.percentage);
  return 0;
}
