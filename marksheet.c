#include <stdio.h>

int main() {
  // Declare variables to store seat number and subject marks
  int seat_no;
  float phy_marks, chem_marks, math_marks;

  // Declare variables to calculate the average and total marks
  float average, total;

  // Prompt the user to enter their seat number
  printf("Please enter your seat no: ");
  scanf("%d", &seat_no);

  // Prompt the user to enter physics marks
  printf("Please enter your physics marks: ");
  scanf("%f", &phy_marks);

  // Prompt the user to enter chemistry marks
  printf("Please enter your chemistry marks: ");
  scanf("%f", &chem_marks);

  // Prompt the user to enter mathematics marks
  printf("Please enter your mathematics marks: ");
  scanf("%f", &math_marks);

  // Calculate the average and total marks
  average = (phy_marks + chem_marks + math_marks) / 3;
  total = phy_marks + chem_marks + math_marks;

  // Print a header for the table
  printf("%-5s %-20s %-20s %-20s %-20s %-20s\n", "SEAT NO", "PHY", "CHEM",
         "MATH", "TOTAL", "AVG");

  // Print the seat number, subject marks, total, and average neatly formatted
  printf("%-5d %-20.2f %-20.2f %-20.2f %-20.2f %-20.2f", seat_no, phy_marks,
         chem_marks, math_marks, total, average);

  return 0;
}
