#include <stdio.h>
#include <string.h>

int main() {
  // Declare and initialize source and target strings
  char source[] = "Nagpur";
  char target[20] = "Bombay";

  // Concatenate the source string onto the end of the target string
  strcat(target, source);

  // Print the source and target strings
  printf("Source String = %s\n", source);
  printf("Target String = %s\n", target);

  // Return 0 to indicate successful execution
  return 0;
}
