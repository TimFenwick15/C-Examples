#include <stdio.h>

void addOne(int *i) {
  *i += 1;
}
int main (void) {
  int a = 1;
  addOne(&a);
  printf("a is %d\n", a);

  return 0;
}

