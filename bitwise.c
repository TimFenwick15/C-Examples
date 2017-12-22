#include <stdio.h>

int main (void) {
  unsigned int a = 0;

  // ~ negates each bit, including the sign bit
  // so ~0 == -1
  // incidentally, printf %d will show unsigned as -ve, %u will show a large +ve
  a = ~a;
  printf("a = %u\n", a);

  // & and



  // | or



  // ^ exclusive or



  return 0;
}
