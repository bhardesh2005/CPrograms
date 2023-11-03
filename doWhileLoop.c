#include <stdio.h>

int main() {
  int choice;
  do {
    printf("\nWelcome to Do-While Loop\n[1] Repeat Loop\n[2] Exit\n==>");
    scanf("%d", &choice);
    if (choice == 1) {
      continue;
    } else if (choice == 2) {
      return 0;
    } else {
      printf("Invalid choice\n");
    }
  } while (1);
}
