#include <stdio.h>

void logTemprature(float farh, float cel);
float getCelsiusFromFarh(float farh);
float getFarhFromCel(float cel);

int main() {
  float lower, upper, step;

  lower = 0;
  upper = 300.0;
  step = 20.0;

  while (lower <= upper) {
    logTemprature(lower, getCelsiusFromFarh(lower));
    logTemprature(getFarhFromCel(lower), lower);
    lower = step + lower;
  }
}

void logTemprature(float farh, float cel) {
  printf("%ff is equal to %fc \n", farh, cel);
}

float getCelsiusFromFarh(float farh) { return (5.0 * (farh - 32.0)) / 9.0; }
float getFarhFromCel(float cel) { return (cel * 1.8) + 32.0; }
