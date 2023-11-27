#include <stdio.h>

// Define a structure to represent a student
struct Student {
  int rollNumber;   // Roll number of the student
  float percentage; // Percentage obtained by the student
};

int main() {
  // Declare a variable of type struct Student
  struct Student person;

  // Initialize the attributes of the person struct
  person.rollNumber = 33;
  person.percentage = 100.0;

  // Print information about the person
  printf("Person Roll Number: %d\nPerson Percentage: %.2f%%\n",
         person.rollNumber, person.percentage);

  return 0;
}
