#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b) { return *b - *a; }

int main(void) {
  int n, a[100], diff_sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", a + i);
  qsort(a, n, sizeof(int), (int (*)(const void *, const void *))compare);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      diff_sum += a[i]; // Alice
    else
      diff_sum -= a[i]; // Bob
  }
  printf("%d", diff_sum);

  return 0;
}
