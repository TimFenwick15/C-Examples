#include <stdio.h>
#include <stdint.h>

struct example {
  uint16_t b;
  uint16_t a;
};

union u {
  uint32_t all;
  struct example e;
};

int main() {
  union u localU;
  localU.all = 0;
  localU.e.b = 2;
  printf("localU.e.b = %d\n", localU.e.b);
  printf("localU.all = %d\n", localU.all);
  return 0;
}

