#include <stdio.h>

enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday, christmas = 25 };

int main(void) {
  enum week today;
  today = wednesday;
  printf("Day %d\n", today + 1);

  enum week xmas;
  xmas = christmas;
  printf("Day %d\n", christmas);

  return 0;
}
