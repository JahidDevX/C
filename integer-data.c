#include <stdio.h>

int main(void)
{
  // Signed integer data
  printf("Signed integer data\n");

  // Short - %hi %d
  short one = -25;
  printf("Short: %hi\n", one);

  // Int - %d %i
  int two = 1250;
  printf("Int: %d\n", two);

  // Long - %ld %li
  long three = 972356l;
  printf("Long: %ld\n", three);

  // Long long - %lld %lli
  long long four = -97843276732ll;
  printf("Long long: %lld\n", four);
  printf("\n");

  // Octal int - %o
  int nine = 0127;
  printf("Octal: %o\n", nine);

  // Hexadecimal int - %X %x
  int ten = 0Xeef;
  printf("Hexadecimal: %X\n", ten);

  // Unsigned integer data
  printf("Unsigned integer data\n");

  // Unsigned short - %hu
  unsigned short five = 10;
  printf("Unsigned short: %hu\n", five);

  // Unsigned int - %u
  unsigned int six = 2056;
  printf("Unsigned int: %u\n", six);

  // Unsigned long - %lu
  unsigned long seven = 2983456l;
  printf("Unsigned long: %lu\n", seven);

  // Unsigned long long - %llu
  unsigned long long eight = 9324673213ll;
  printf("Unsigned long long: %llu\n", eight);

  unsigned short neg = -5;
  printf("Negative unsigned: %hu\n", neg);

  return 0;
}

// 0000000000000101
// 1111111111111010 - 1's complement
// 1111111111111011 - 2's complement