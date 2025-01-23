#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  getchar();

  while (n--) {
    char word[101];
    fgets(word, 101, stdin);
    fflush(stdin);

    size_t len = strlen(word);

    if (word[len - 1] == '\n') {
      word[len - 1] = '\0';
      len--;
    }

    if (len <= 10) {
      printf("%s", word);
    } else {
      printf("%c%zu%c", word[0], len - 2, word[len - 1]);
    }
    if (len < 100) printf("\n");
  }
  return 0;
}