#include <stdio.h>

int main(void) {
  int a[2];
  scanf("%d %d", a, a + 1);
  printf("%s", (*a * *(a + 1)) % 2 ? "Odd" : "Even");
  return 0;
}
