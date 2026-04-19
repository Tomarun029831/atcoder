#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b) { return *b - *a; }

int main(void) {
  int n, a[100], diff_sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", a + i);
  qsort(a, n, sizeof(int), (int (*)(const void *, const void *))compare);
  for (int i = 0; i < n; i += 2) {
    if (i + 1 == n) {
      diff_sum += a[i];
      break;
    }
    diff_sum += a[i] - a[i + 1]; // Alice - Bob
  }
  printf("%d", diff_sum);

  return 0;
}
