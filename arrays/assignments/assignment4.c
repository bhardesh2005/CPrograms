// Write a program in C to transpose a given matrix
#include <stdio.h>

// Function to accept input of values for a matrix
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter value for (%d, %d): ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
}

// Function to display a matrix to the console
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int rows, cols;

  // Input the number of rows and columns for the matrix
  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  // Declare original and transposed matrices
  int originalMatrix[rows][cols];
  int transposedMatrix[rows][cols];

  // Input values for the original matrix
  printf("\nEnter values for the matrix - \n");
  inputMatrix(rows, cols, originalMatrix);

  // Display the original matrix
  printf("Original Matrix: \n");
  displayMatrix(rows, cols, originalMatrix);

  // Transpose the matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      transposedMatrix[i][j] = originalMatrix[j][i];
    }
  }

  // Display the transposed matrix
  printf("Transposed Matrix: \n");
  displayMatrix(rows, cols, transposedMatrix);

  return 0;
}
