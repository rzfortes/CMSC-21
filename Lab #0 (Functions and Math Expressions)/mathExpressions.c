#include <stdio.h>
#include <math.h>

int main() {
  // number 2
  float n = 3;
  float result;

  result = n * (n - 2) / 2;

  printf("%.3f\n", result);

  // number 3
  float x = 2;
  float y = 3;
  float aresult;

  aresult = sqrtf((50 * pow(x, 3) * pow(y, 5)));

  printf("%.4f\n", aresult);

  // number 4
  float resulta;

  resulta = ((4 * (sqrtf(5))) + (3 * (sqrtf(125))) - (2 * (sqrtf(20))));

  printf("%.4f\n", resulta);

  // number 5
  float x2 = 2;
  float aresulta;

  aresulta = (x2 * (x2 - 1)) / (x2 * (x2 + 1));

  printf("%.4f\n", aresulta);

  // number 6
  float pi = 3.14;
  float r = 2;
  float answer;

  answer = 4 * M_PI * (pow(r, 2));

  printf("%.4f\n", answer);

  // number 7
  float rr = 2;
  float aa = 3;
  float ans;

  ans = (rr * (pow(cosf(aa), 2))) + (rr * (pow(sinf(aa), 2)));

  printf("%.4f\n", ans);

  // number 8
  float a1 = 2;
  float b1 = 2;
  float c1 = 2;
  float x1 = 2;
  float angSagot;

  angSagot = (a1 * pow(x1 + (b1 / (2 * a1)), 2)) - (pow(b1, 2) - (4 * a1 * c1) / (4 * a1));

  printf("%.4f\n", angSagot);

  // number 9
  float x3 = 2;
  float anotheranswer;

  anotheranswer = (-2 * pow(x3, 2)) + x3 - 1;

  printf("%.4f\n", anotheranswer);

  // number 10
  float x4 = 4;
  float anotheranotheranswer;

  anotheranotheranswer = x4 + (abs(x4 - 2));

  printf("%.4f\n", anotheranotheranswer);

  return 0;
}
