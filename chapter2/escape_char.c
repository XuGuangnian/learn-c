#include "stdio.h"

int main(void) {

  // 转义字符 \n \t
  printf("\n");
  printf("1\t2\t3\t4\n");
  printf("\\n");

  // 转义字符大小
  printf("%d\n", sizeof("\\n"));

  printf("\"hello, world!\"\n");

  return 0;
}
