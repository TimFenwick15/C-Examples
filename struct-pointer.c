#include <stdio.h>

typedef struct a {
    int i;
    int j;
} A;

void modA1(A __a) {
  __a.i = 2;
}

void modA2(A* __a) {
  __a->i = 2;
}

void readA(A __a) {
  //std::cout << __a.i << std::endl;
  printf("_a is %d\n", __a.i);
}

int main() {
  A _a;
  readA(_a); // rubbish
  modA1(_a);
  readA(_a); // rubbish
  modA2(&_a);
  readA(_a); // 2
}

