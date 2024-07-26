#include <stdio.h>

int main() {

  // 浮点数
  float f = 23.145678912f;
  double d = 23.123456789123;

  printf("float: %f\n", f);
  printf("float: %.2f\n", f);
  printf("float: %8.3f\n", f);
  printf("double: %.12lf\n", d);
  return 0;
}