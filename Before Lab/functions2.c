#include <stdio.h>
#include <math.h>

float f(float p) {
  return sqrt(pow(1 - p, 3));
}

int main() {
  float p = -3;
  float result = f(p);
  printf("%f\n", result);
  return 0;
}
