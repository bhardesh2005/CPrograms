#include <stdio.h>

int main() {
  int row, col;
  printf("Enter number of row: ");
  scanf("%d", &row);
  printf("Enter number of columns: ");
  scanf("%d", &col);
  int matrix1[row][col], matrix2[row][col], result[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Enter second matrix value: ");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  printf("First Matrix: \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf(" %d", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("Second Matrix: \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf(" %d", matrix2[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      result[i][j] = matrix1[i][j] - matrix2[i][j];
    }
    printf("\n");
  }

  printf("\nResult Matrix: \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf(" %d", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
