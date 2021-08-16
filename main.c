#include <stdio.h>

void logTemprature(int farh, int cel) {
  printf("%df is equal to %dc \n", farh, cel);
}

float getCelsiusFromFarh(int farh) { return (5 * (farh - 32)) / 9; }

int main() {
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  while (lower <= upper) {
    int cel = (int)getCelsiusFromFarh(lower);
    logTemprature(lower, cel);
    lower = step + lower;
  }
}
