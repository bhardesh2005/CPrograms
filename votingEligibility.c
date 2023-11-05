#include <stdio.h>

int main() {
  int age;

  // Prompt the user to enter their age
  printf("Please enter your age: ");
  scanf("%d", &age);

  // Use a ternary conditional operator to check if the age is greater than or
  // equal to 18 If true, the user is eligible to vote; if false, they are not
  // eligible
  (age >= 18) ? printf("Eligible to vote.\n")
              : printf("Not eligible to vote.\n");

  return 0; // Return 0 to indicate successful program execution
}
