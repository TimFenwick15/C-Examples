#define DECLARE

#include "global.h"
#include "extern.h"

int main(void) {
  int local;
  varInit();
  local = global;
  return 0;
}

