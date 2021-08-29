#include <stdio.h>

#define LOWER 0
#define UPPER 10

int main(void) {

  for (int i = LOWER; i < UPPER; i++) {
    printf("%d", i);
  }

  return 0;
}
