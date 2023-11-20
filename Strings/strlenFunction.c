#include <stdio.h>
#include <string.h>

int main() {
  // Declare and initialize a character array with the string "MITWPU"
  char arr[] = "MITWPU";

  // Calculate the length of the first string
  int len1 = strlen(arr);

  // Print the first string and its length
  printf("String = %s\nLength = %d\n", arr, len1);

  // Declare and initialize another character array with the string "MITWPU
  // Pune"
  char arr2[] = "MITWPU Pune";

  // Calculate the length of the second string
  int len2 = strlen(arr2);

  // Print the second string and its length
  printf("String = %s\nLength = %d\n", arr2, len2);

  // Return 0 to indicate successful execution
  return 0;
}
