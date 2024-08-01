#include "stdio.h"

int main() {
  int x;
  scanf("%d", &x);
  printf("x: %d\n", x);

  getchar();// consume the newline character in the input buffer

  char y;
  scanf("%c", &y);
  printf("y: %c\n", y);

  getchar();// consume the newline character in the input buffer

  int a;
  char c;
  scanf("%d %c", &a, &c);
  printf("a: %d, c: %c\n", a, c);

  return 0;
}