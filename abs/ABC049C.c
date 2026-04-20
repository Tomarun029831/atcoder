#include <stdio.h>
#include <string.h>
void reverse_string(char *str) {
  char *start = str;
  char *end = str + strlen(str) - 1;
  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main(void) {
  char matchers[4][10] = {"dream", "dreamer", "erase", "eraser"};
  reverse_string(matchers[0]);
  reverse_string(matchers[1]);
  reverse_string(matchers[2]);
  reverse_string(matchers[3]);
  char input_string[10 * 10 * 10 * 10 * 10];
  scanf("%s", input_string);
  reverse_string(input_string);
  int pos = 0;
  int len = strlen(input_string);
  while (pos < len) {
    int found = 0;
    for (int k = 0; k < 4; k++) {
      int m_len = strlen(matchers[k]);
      if (strncmp(input_string + pos, matchers[k], m_len) == 0) {
        pos += m_len;
        found = 1;
        break;
      }
    }
    if (!found) {
      puts("NO");
      return 0;
    }
  }

  puts("YES");
  return 0;
}
