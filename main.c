#include <stdio.h>

void logTemprature(int farh, int cel);
int getCelsiusFromFarh(int farh);

int main() {
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  while (lower <= upper) {
    logTemprature(lower, getCelsiusFromFarh(lower));
    lower = step + lower;
  }
}

void logTemprature(int farh, int cel) {
  printf("%df is equal to %dc \n", farh, cel);
}

int getCelsiusFromFarh(int farh) { return (5 * (farh - 32)) / 9; }
