#include <stdio.h>

int main() {
  int a, b;
  float c, d;
  char alpha;

  scanf("%c %d %d %f %f", &alpha, &a, &b, &c, &d);
  printf("%c\n %d %d\n %f %f\n", alpha, a, b, c, d);
  
  return 0;
}