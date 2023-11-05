#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate a random number between 1 and 10 (inclusive)
  int guess, randomNumber = (rand() % 10) + 1;

  printf("Welcome to the Number Guessing Game!\n");
  printf(
      "I have selected a random number between 1 and 10. Try to guess it!\n");

  while (1) {
    printf("Please guess the random number: ");

    if (scanf("%d", &guess) == 1) {
      // Input was successful
      if (guess > randomNumber) {
        printf("Guess lower.\n");
      } else if (guess < randomNumber) {
        printf("Guess higher.\n");
      } else {
        printf("Congratulations! You guessed the correct number: %d\n",
               randomNumber);
        break; // Exit the loop when the guess is correct
      }
    } else {
      // Input was not successful
      int c;

      // Clearing the input buffer to avoid getting stuck in an infinite loop
      while ((c = getchar()) != '\n' && c != EOF)
        ;

      printf("Invalid input. Please input a valid number.\n");
    }
  }

  return 0;
}
