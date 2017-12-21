// gcc file.c -o out # compile to out

#include <stdio.h>

int add(int n);

int main (void) {
  //char a = 'a';
  //printf("%c", a);

  char* a = "aa";
  printf("%s\n", a);


  printf("%d\n", add(1));

  return 0;
}

int add(int n) {
  return n + 1;
}


