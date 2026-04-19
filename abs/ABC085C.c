#include <stdio.h>

int main(void) {
  int buff[2]; // N:[1~2000], Y = {n | n=1000k (k:int >= 0)}
  for (int i = 0; i < 2; i++)
    scanf("%d", buff + i);
  for (int a = 0; a <= buff[0]; a++)
    for (int b = 0; b <= buff[0] - a; b++) {
      const int c = buff[0] - a - b;
      const int money = 10000 * c + 5000 * b + 1000 * a;
      if (money == buff[1]) {
        printf("%d %d %d", c, b, a);
        return 0;
      }
    }
  printf("-1 -1 -1");

  return 0;
}
