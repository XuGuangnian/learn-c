#include "stdio.h"

void swap_two_numbers();
int main() {
  int x = 11;
  float y = 3.5;
  float z = x * y;
  printf("z: %f\n", z);

  int a, b;
  a = 10;
  b = 3;
  float c = a / b;
  printf("c: %f\n", c);
  float m = 3.0;
  c = a / m;
  printf("c: %f\n", c);

  // printf("10/0: %d\n", 10 / 0); // 不能除0
  // printf("10%3.3: %d\n", 10 % 3.3);// 取模只在整数和整数之间

  // 自增
  a = 2;
  b = ++a;
  printf("a: %d, b: %d\n", a, b);
  a = 2;
  b = a++;
  printf("a: %d, b: %d\n", a, b);

  // a += 2;
  // a = a + 2;
  a += 2;
  printf("a: %d\n", a);

  // 关系运算符
  a = 4;
  b = 4;
  printf("a == b: %d\n", a == b);
  printf("a != b: %d\n", a != b);
  printf("a > b: %d\n", a > b);
  printf("a < b: %d\n", a < b);
  printf("a >= b: %d\n", a >= b);
  printf("a <= b: %d\n", a <= b);

  // 逻辑运算符
  printf("a && b: %d\n", a && b);
  printf("a || b: %d\n", a || b);
  printf("!a: %d\n", !a);

  // 位运算符
  printf("a & b: %d\n", a & b);
  printf("a | b: %d\n", a | b);
  printf("a ^ b: %d\n", a ^ b);
  printf("~a: %d\n", ~a);
  printf("a << b: %d\n", a << b);// 乘以2 需要注意不要超出数据的边界
  printf("a >> b: %d\n", a >> b);// 除以2

  // 不使用中间变量交换两个整数的值
  swap_two_numbers();
  // 判断整数的奇偶性 x & 1
  a = 5;
  printf("a: %d, a & 1: %d\n", a, a & 1);
  a = 6;
  printf("a: %d, a & 1: %d\n", a, a & 1);
  // 位运算进行高低位交换
  a = (a >> 8) | (a << 8);
  printf("a: %d\n", a);
  // 寄存器的置位
  // 将a的第3个bit位 置1
  a = 5;
  printf("a: %d, a | (1<<3)): %d\n", a, a | (1 << 3));
  // 将a的第3个bit位 置0
  a = 5;
  printf("a: %d, a & ~(1<<3)): %d\n", a, a & ~(1 << 3));

  // 逗号运算符
  a = 3;
  b = a *= 2, a += 4;// 6, 10 逗号运算符最终结果为逗号左边的值
  printf("a: %d, b: %d\n", a, b);

  // 条件运算符（三目运算符）
  int max = a > b ? a : b;
  printf("max: %d\n", max);

  return 0;
}

void swap_two_numbers() {
  int a = 5, b = 6;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("swap a: %d, b: %d\n", a, b);
}
