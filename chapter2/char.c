#include "stdio.h"

int main(void) {

  char ch;
  ch = 'A';
  printf("ch: %c\n", ch);
  printf("ch: %d\n", ch);

  ch = 83;// S
  printf("83: %c\n", ch);
  printf("'S': %d\n", ch);

  // 大小写字母转换
  printf("A -> %c\n", 'A' + 32);
  printf("a -> %c\n", 'a' - 32);

  // 整数的字符形式转换为整数
  printf("'1' -> %d\n", '1' - '0');
  printf("'2' -> %d\n", '2' - '0');
  printf("'3' -> %d\n", '3' - '0');
  printf("'4' -> %d\n", '4' - '0');

  // 整数转换为字符形式
  printf("1 -> '%c'\n", 1 + '0');
  printf("2 -> '%c'\n", 2 + '0');
  printf("3 -> '%c'\n", 3 + '0');
  printf("4 -> '%c'\n", 4 + '0');

  return 0;
}
