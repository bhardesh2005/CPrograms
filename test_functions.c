#include <stdio.h>

void max(int a, int b, int c) {
  int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
  printf("%d\n", max);
}

int main() {
  max(10, 14, 69);
  return 0;
}
