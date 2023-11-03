#include <stdio.h>

int main() {
  int age;
  printf("Please enter your age: ");
  scanf("%d", &age);
  (age >= 18) ? printf("Eligible to vote.\n")
              : printf("Not eligible to vote.\n");
}
