#include <stdio.h>

int main() {
  int choice;

  // The loop continues until explicitly exited by the user
  do {
    // Display menu options to the user
    printf("\nWelcome to Do-While Loop\n[1] Repeat Loop\n[2] Exit\n==>");

    // Read the user's choice
    scanf("%d", &choice);

    if (choice == 1) {
      // User chose to repeat the loop, so the loop continues
      continue;
    } else if (choice == 2) {
      // User chose to exit, so the program terminates
      return 0;
    } else {
      // Invalid choice; display an error message and continue the loop
      printf("Invalid choice\n");
    }
  } while (1); // Continue the loop indefinitely (until user chooses to exit)
}
