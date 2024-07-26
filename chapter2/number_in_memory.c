#include "stdio.h"

int main() {
  // 数值在内存中的存储方式以补码的方式存在
  // 补码：正数的补码即是原码，负数的补码为它的反码加1
  int a = 5;
  unsigned int b = a - 11;
  printf("%d\n", 5 > -6);
  printf("%d\n", a > b);

  printf("%f\n", 3 / 2);// 1当做浮点数打印
  return 0;
}