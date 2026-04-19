#include <stdio.h>

int compare(const int *a, const int *b) { return *a - *b; }

int main(void) {
  int n, d, bucket[101] = {0}, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &d);
    ++bucket[d];
  }

  for (int i = 1; i <= 100; i++)
    if (bucket[i] > 0)
      ++count;

  printf("%d", count);

  return 0;
}
