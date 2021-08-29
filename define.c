#include <stdio.h>

#define LOWER 0
#define UPPER 10
#define TEXT "OUTPUT IS GOING TO BE "

int run(void) {
  printf("%s", TEXT);

  for (int i = LOWER; i < UPPER; i++) {
    printf("%d", i);
  }

  return 0;
}
