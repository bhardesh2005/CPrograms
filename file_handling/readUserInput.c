#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open a file for reading
    file = fopen("output.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Return with an error code
    }

    // Read and print the contents of the file
    printf("Contents of the file:\n");
    while (fscanf(file, "%99[^\n]", buffer) == 1) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}
