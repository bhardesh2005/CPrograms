#include <stdio.h>

int main() {
    // Declare variables
    char userInput[100];  // Assuming a maximum input length of 99 characters
    FILE *file;

    // Open a file for writing
    file = fopen("user_input.txt", "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Return with an error code
    }

    // Prompt user for input using scanf
    printf("Enter some text: ");
    scanf("%99[^\n]", userInput);  // %[^\n] allows reading spaces and stops at the newline character

    // Write user input to the file
    fprintf(file, "User Input: %s", userInput);

    // Close the file
    fclose(file);

    printf("User input has been written to the file.\n");

    return 0;  // Return success
}
