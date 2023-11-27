// Write a program in C to find the max element in a matrix
#include <stdio.h>

// Function to find the maximum element in a matrix
int findMax(int rows, int cols, int matrix[rows][cols]) {
  int max = matrix[0][0];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] > max) {
        max = matrix[i][j];
      }
    }
  }

  return max;
}

int main() {
  int rows, cols;
  printf("Enter number of rows: ");
  scanf("%d", &rows);
  printf("Enter number of cols: ");
  scanf("%d", &cols);

  int matrix[rows][cols];

  // Input matrix elements
  printf("Enter matrix elements:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter element at position [%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  // Find and print the maximum element
  int maxElement = findMax(rows, cols, matrix);
  printf("The maximum element in the matrix is: %d\n", maxElement);

  return 0;
}
