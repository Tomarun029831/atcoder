#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int x[10 * 10 * 10 * 10 * 10 + 1];
  int y[10 * 10 * 10 * 10 * 10 + 1];
  int t[10 * 10 * 10 * 10 * 10 + 1];
  t[0] = 0;
  x[0] = 0;
  y[0] = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    scanf("%d %d %d", t + i, x + i, y + i);

  for (int i = 0; i < n; i++) {
    const int left_turn = t[i + 1] - t[i];
    const int nessesary_turn = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    const char can_reach = (left_turn >= nessesary_turn);
    const char can_stay = !((left_turn - nessesary_turn) & 1);
    if (can_reach && can_stay)
      continue;
    puts("No");
    return 0;
  }

  puts("Yes");

  return 0;
}
