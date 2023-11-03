#include <stdio.h>

int main() {
  printf("Numbers divisible by 3 and 5:\n");

  for (int i = 1; i <= 300; i++) {
    (i % 3 == 0 && i % 5 == 0) ? printf("%d\n", i) : i;
    // if (i % 3 == 0 && i % 5 == 0) {
    //   printf("%d\n", i);
    // }
  }

  return 0;
}
