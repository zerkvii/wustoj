#include <stdio.h>
#include<string.h>
int main() {
  int n;
  scanf("%d", &n);
  getchar();
  while (n--) {
    char s[10000];
    gets(s);
    for (int l = strlen(s) - 1; l >= 0; --l) {
      printf("%c", s[l]);
    }
    printf("\n");
  }
}