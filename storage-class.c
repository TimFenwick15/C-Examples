#include <stdio.h>

// auto, static, extern, register

// static foo can only been seen in this file
static int foo() {
  // On each call to foo, the same static a is used
  static int a = 1;
  a++;
  return a;
}

int main (void) {
  // a's storage class is called auto. This means it is scoped
  // auto is the default so you never need to declare a var as auto
  int a = 0;

  for (int i = 0; i < 5; i++)
    printf("%d\n", foo());

  // register variables are stored in a CPU register instead of in memory
  // faster because the CPU doesn't need to comunicate with memeory
  // There's a machine dependent limit on the number of registers availbale
  // register vars are auto scoped. It there is no space, register will store in memory instead
  register int count = 0;
  printf("Count: %d", count);

  return 0;
}

// extern tells the compiler that a var/function is declared elsewhere
// Shouldn't need to use this
