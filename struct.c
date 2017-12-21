#include <stdio.h>

struct Bike {
  int wheels;
  int gears;
  char* name;
};

// This makes the syntax in main more prettier
typedef struct Books {
  int pages;
} Book;

int main(void) {
  struct Bike bicycle;
  bicycle.wheels = 2;
  printf("%d\n", bicycle.wheels);

  struct Bike tricycle;
  tricycle.wheels = 3;
  printf("%d\n", tricycle.wheels);

  Book dragonTatoo;
  dragonTatoo.pages = 500;
  printf("%d\n", dragonTatoo.pages);

  typedef unsigned char BYTE;
  BYTE b = 'a';
  printf("%c\n", b);

  return 0;
}
