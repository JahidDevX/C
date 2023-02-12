#include <stdio.h>

int main()
{
  int a = 50;
  float b = 10.02f;
  char c;
  c = 'C';

  printf("%c\n", c);
  printf("%d + %f = %f\n", a, b, a + b);
  printf("%d - %f = %f\n", a, b, a - b);
  printf("%d * %f = %f\n", a, b, a * b);
  printf("%d / %f = %f", a, b, a / b);

  return 0;
}
