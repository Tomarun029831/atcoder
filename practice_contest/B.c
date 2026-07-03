#include <stdio.h>
#include <stdlib.h>

int N, Q;

int compare(const void *a, const void *b) {
  char x = *(char *)a;
  char y = *(char *)b;

  printf("? %c %c\n", x, y);
  fflush(stdout);

  char res;
  scanf(" %c", &res);
  if (res == '<')
    return -1; // x < y
  return 1;    // x > y
}

int main(void) {
  scanf("%d %d", &N, &Q);

  char s[27];
  for (int i = 0; i < N; i++)
    s[i] = 'A' + i;
  s[N] = '\0';

  qsort(s, N, sizeof(char), compare);

  printf("! %s\n", s);
  fflush(stdout);

  return 0;
}
