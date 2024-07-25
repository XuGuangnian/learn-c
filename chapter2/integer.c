#include "stdio.h"

int main(void) {

  // 整型大小，单位字节Byte
  printf("short: %llu\n", sizeof(short));
  printf("int: %llu\n", sizeof(int));
  printf("long: %llu\n", sizeof(long));
  printf("long long: %llu\n", sizeof(long long));

  // 有符号整数与无符号整数（unsigned）
  int signed_int = 10;
  unsigned long long unsigned_int = 20L;
  printf("signed_int: %d\n", signed_int);
  printf("unsigned_int: %llu\n", unsigned_int);

  // 整型数据的输出格式
  short b = -123;
  unsigned short b1 = 123;
  int c = -1234;
  unsigned c1 = 1234;
  long d = -12345;
  unsigned long d1 = 12345;
  long long e = -123456;
  unsigned long long e1 = 123456;
  printf("short: %hd\n", b);
  printf("unsigned short: %hu\n", b1);
  printf("int: %d\n", c);
  printf("unsigned int: %u\n", c1);
  printf("long: %ld\n", d);
  printf("unsigned long: %lu\n", d1);
  printf("long long: %lld\n", e);
  printf("unsigned long long: %llu\n", e1);

  return 0;
}
