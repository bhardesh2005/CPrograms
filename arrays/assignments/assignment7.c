// Write a program in C to multiply two different matrices.
#include <stdio.h>

// Function to accept input of values for matrix
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter value for (%d, %d): ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
}

// Function to display matrix to console
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int row, col;

  // Prompt the user to enter the number of rows and columns.
  printf("Enter number of rows: ");
  scanf("%d", &row);
  printf("Enter number of columns: ");
  scanf("%d", &col);

  // Declare the three matrices for input and result.
  int matrix1[row][col];
  int matrix2[row][col];
  int result[row][col];

  // Input values for the first matrix.
  printf("\nEnter values for the first matrix:\n");
  inputMatrix(row, col, matrix1);

  // Input values for the second matrix.
  printf("\nEnter values for the second matrix:\n");
  inputMatrix(row, col, matrix2);

  // Display the first matrix.
  printf("\nFirst Matrix:\n");
  displayMatrix(row, col, matrix1);

  // Display the second matrix.
  printf("\nSecond Matrix:\n");
  displayMatrix(row, col, matrix2);

  // Add corresponding elements of the two matrices to calculate the result.
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      result[i][j] = matrix1[i][j] * matrix2[i][j];
    }
  }

  // Display the result matrix.
  printf("\nResult Matrix:\n");
  displayMatrix(row, col, result);

  return 0;
}
