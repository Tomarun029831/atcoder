#include <stdio.h>

int main(void) {
  int a[3];
  char s[100];

  scanf("%d", a);
  scanf("%d %d", a + 1, a + 2);
  scanf("%s", s);
  printf("%d %s", a[0] + a[1] + a[2], s);

  return 0;
}
