#include <stdio.h>

int main(void) {
  int buff[4], count = 0; // A:500, B;100, C:50, X
  for (int i = 0; i < 4; i++)
    scanf("%d", buff + i);
  for (int a = 0; a <= buff[0]; a++)
    for (int b = 0; b <= buff[1]; b++)
      for (int c = 0; c <= buff[2]; c++)
        if (a * 500 + b * 100 + c * 50 == buff[3])
          ++count;
  printf("%d", count);

  return 0;
}
