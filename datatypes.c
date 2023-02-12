#include <stdio.h>

int main()
{
  int num = 10;
  float num2 = 20.02f;
  char alpha = 'A';

  printf("%d\n, %f\n, %c\n", num, num2, alpha);
  
  num = num2;
  printf("%f\n", num);

  return 0;
}