#include <stdio.h>

int main() {
  float phy_marks, chem_marks, math_marks;
  float average, total;
  int seat_no;
  printf("Please enter your seat no: ");
  scanf("%d", &seat_no);

  printf("Please enter your physics marks: ");
  scanf("%f", &phy_marks);

  printf("Please enter your chemistry marks: ");
  scanf("%f", &chem_marks);

  printf("Please enter your mathematics marks: ");
  scanf("%f", &math_marks);

  average = (phy_marks + chem_marks + math_marks) / 3;
  total = phy_marks + chem_marks + math_marks;

  printf("%-5s %-20s %-20s %-20s %-20s %-20s\n", "SEAT NO", "PHY", "CHEM", "MATH", "TOTAL", "AVG");
  printf("%-5d %-20.2f %-20.2f %-20.2f %-20.2f %-20.2f", seat_no, phy_marks, chem_marks, math_marks, total, average);
  return 0;
}
