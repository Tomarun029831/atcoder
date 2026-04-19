#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b) { return *a - *b; }

int main(void) {
  int n, d[100], count = 1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", d + i);
  qsort(d, n, sizeof(int), (int (*)(const void *, const void *))compare);
  for (int i = 0; i < n - 1; i++)
    if (d[i] < d[i + 1])
      ++count;
  printf("%d", count);

  return 0;
}
