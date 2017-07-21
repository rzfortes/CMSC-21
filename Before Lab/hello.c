#include <stdio.h>
#include <math.h>

int f(int length);
float distanceToOrigin(int x, int y);

int main() {
  int a = 2;
  int areaA = f(a);
  printf("%d\n", areaA);
  
  float distance = distanceToOrigin(2, 3);
  printf("%f\n", distance);
  
	return 0;
}

float distanceToOrigin(int x, int y) {
  return sqrt(pow(x, 2) + pow(y, 2));
}


int f(int length) {
  return length * length;
}
