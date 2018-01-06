#include <stdio.h>

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


  return 0;
}

