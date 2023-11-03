#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seeding the random number generator with the current time
  srand(time(NULL));
  int guess, randomNumber = (rand() % 10) + 1;
  printf("The random number: %d\n", randomNumber);

  while (1) {
    printf("Please guess the random number: ");
    if (scanf("%d", &guess) == 1) {
      // Input was successful
      if (guess > randomNumber) {
        printf("Guess lower.\n");
      } else if (guess < randomNumber) {
        printf("Guess higher.\n");
      } else {
        printf("You guessed correct!");
        break;
      }
    } else {
      // Input was not successful
      int c;

      // Clearing the input buffer to not get stuck in an infinite loop
      while ((c = getchar()) != '\n' && c != EOF)
        ;
      printf("Invalid input. Please input a valid number.\n");
    }
  }

  return 0;
}
