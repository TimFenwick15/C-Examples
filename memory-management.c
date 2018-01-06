#include <stdio.h> // printf
#include <stdlib.h> // malloc
#include <string.h> // strcpy

int main (void) {
  // when we know how much memory we need:
  char name[100];

  // when we don't know how much memory we need:
  char *desc; // desc must be a pointer because malloc returns a pointer to the memory it allocated
  desc = malloc( 200 * sizeof(char) );
  
  // to demonstrate that strcpy and assignment are allowed and use same memory space
  printf("Location before strcpy: %p\n", &desc);
  strcpy(desc, "A string of awesome");
  desc = "Another string";
  printf("Location after strcpy and assignment: %p\n", &desc);
  
  // In this case, you do need to use strcpy
  char desc2[10];
  printf("Location of desc2: %p\n", &desc2);
  strcpy(desc2, "2nd str"); // desc2 = "" isn't allowed
  printf("%s\n", desc2);

  char *desc3;
  desc3 = malloc(1 * sizeof(char));
  free(desc3); // Local non-pointers are automatically freed. We only free dynamically allocated pointers (ie malloc)

  int *i;
  free(i); // this is allowed but unecesary because i is local

  return 0;
}

