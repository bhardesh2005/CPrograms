#include <stdio.h>

int main() {
    FILE *file;
    int number;

    // Open a file for writing
    file = fopen("multiplication_table.txt", "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Return with an error code
    }

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Write multiplication tables to the file
    fprintf(file, "Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; ++i) {
        fprintf(file, "%d x %d = %d\n", number, i, number * i);
    }

    // Close the file
    fclose(file);

    printf("Multiplication tables have been written to the file.\n");

    return 0;
}
