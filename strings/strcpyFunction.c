#include <stdio.h>
#include <string.h>

int main() {
  // Declare and initialize a source string
  char source[] = "Sayonara";

  // Declare a target string with sufficient space
  char target[20];

  // Copy the contents of the source string to the target string
  strcpy(target, source);

  // Print the source string
  printf("Source String = %s\n", source);

  // Print the target string (the copied content from the source)
  printf("Target String = %s\n", target);

  // Return 0 to indicate successful execution
  return 0;
}
