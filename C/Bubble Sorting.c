// Michael Lam
// August 24, 2018
// Sorting in ascending order (bubble sorting)

// Declaring header files
#include <stdio.h>

int a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

int main() {
  for (int pass = 1; pass <= 10 - 1; pass++) {
    for (int i = 0; i <= 10 - 2; i++) {
      if (a[i] > a[i + 1]) {
        int hold;
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
      }
    }
  }
  for (int i = 0; i <= 10 - 1; i++) {
    printf("%4d", a[i]);
  }
  return 0;
}
