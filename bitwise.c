#include <stdio.h>

// A good resource can be found at : http://www.how2lab.com/programming/c/low-level-programming.php

int main (void) {
  typedef unsigned int uint;
  uint a = 0;

  // ~ negates each bit, including the sign bit
  // so ~0 == -1
  // incidentally, printf %d will show unsigned as -ve, %u will show a large +ve
  a = ~a;
  printf("a = %u\n", a);

  // & and, | or, ^ exclusive or
  int x = 1 & 1;
  printf("1 & 1 is %d\n", x);

  int y = 1;
  y &= x; // same as y = y & x. Also get ^=, |=, <<=, >>=
  
  printf("1 << 2 is %d\n", 1 << 2);
  printf("0x1 << 2 is %d\n", 0x1 << 2);

  printf("Sizeof something = %d\n", 8 * (int) sizeof(0x0CF00401));
  printf("Sizeof some binary = %d\n", 8 * (int) sizeof(0b000000001111000000000100));

  // How to apply a mask
  // This didn't give the value I was expecting, I think it has something to do with endianness
  printf("Masked value: %#010x\n", 0x0CF00401 & 0x03FFFF00);
  return 0;
}

