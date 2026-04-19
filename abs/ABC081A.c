#include <stdio.h>

int main(void) {
  char grid[4];
  scanf("%s", grid);
  printf("%d", *grid + *(grid + 1) + *(grid + 2) - 3 * '0');

  return 0;
}
