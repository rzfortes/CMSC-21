#include <stdio.h>
#include <math.h>

int slicesOfPizza(int n, int s) {
  return ((n * s) / 8);
}

int easter(int year) {
  int C = year / 100;
  return ((8 + (C / 4) - C + ((8 * C + 13) / 25) + 11 * (year % 19)) % 30);
}

int kape(int kilo) {
  return ((850 * kilo) + (185 * kilo) + 250);
}

int ladder(int height, int angle) {
  return (height / (sin((angle * M_PI) / 180)));
}

int main() {

  //number 2

  int n = 13;
  int s = 4;
  int x;

  x = slicesOfPizza(n, s);

  printf("%d\n", x);

  //number 3

  int year = 2015;
  int epact;

  epact = easter(year);

  printf("%d\n", epact);

  //number 4

  int kilo = 2;
  int price;

  price = kape(kilo);

  printf("%d\n", price);

  //number 5

  int height = 30;
  int angle = 45;
  int length;

  length = ladder(height, angle);

  printf("%d\n", length);

  return 0;
}
