#include <stdio.h>

int main(void) {
  int buff[3], tsum = 0; // N, A, B
  for (int i = 0; i < 3; i++)
    scanf("%d", buff + i);

  for (int i = 1; i <= buff[0]; i++) {
    int sum = 0, temp = i;
    while (temp > 0) {
      sum += temp % 10;
      temp /= 10;
    }
    if (buff[1] <= sum && sum <= buff[2])
      tsum += i;
  }

  printf("%d", tsum);

  return 0;
}
