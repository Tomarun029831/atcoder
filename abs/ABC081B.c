#include <stdio.h>

int main(void) {
  int n, i, j = 0;
  scanf("%d", &n);
  int a[200];
  for (i = 0; i < n; i++)
    scanf("%d", a + i);
  while (1) {
    for (i = 0; i < n; i++) {
      if (*(a + i) % 2 == 1) {
        printf("%d\n", j);
        return 0;
      }
      *(a + i) /= 2;
    }
    ++j;
  }
}
