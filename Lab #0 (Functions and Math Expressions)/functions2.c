#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float two(float n) {
  return (n * (n - 2) / 2);
}

float three(float x, float y) {
  return sqrtf((50 * pow(x,3) * pow(y,5)));
}

float four() {
  return ((4 * (sqrtf(5))) + (3 * (sqrtf(125))) - (2 * (sqrtf(20))));
}

float five(float x2) {
  return (x2 * (x2 - 1)) / (x2 * (x2 + 1));
}

float six(float r) {
  return 4 * M_PI * (pow(r, 2));
}

float seven(float rr, float aa) {
  return (rr * (pow(cosf(aa), 2))) + (rr * (pow(sinf(aa), 2)));
}

float eight(float a1, float b1, float c1, float x1) {
  return (a1 * pow(x1 + (b1 / (2 * a1)), 2)) - (pow(b1, 2) - (4 * a1 * c1) / (4 * a1));
}

float nine(float x3) {
  return (-2 * pow(x3, 2)) + x3 - 1;
}

float ten(float x4) {
  return x4 + (abs(x4 - 2));
}

int main() {
  // number 2
  float n = 3;
  float result;

  result = two(n);

  printf("Number 2: %.3f\n", result);

  // number 3
  float x = 2;
  float y = 3;
  float aresult;

  aresult = three(x, y);

  printf("Number 3: %.4f\n", aresult);

  // number 4
  float a = 4;
  float b = 5;
  float c = 3;
  float d = 125;
  float e = 2;
  float f = 20;
  float resulta;

  resulta = four(a, b, c, d, e, f);

  printf("Number 4: %.4f\n", resulta);

  // number 5
  float x2 = 2;
  float aresulta;

  aresulta = five(x2);

  printf("Number 5: %.4f\n", aresulta);

  // number 6
  //float pi = 3.14;
  float r = 2;
  float answer;

  answer = six(r);

  printf("Number 6: %.4f\n", answer);

  // number 7
  float rr = 2;
  float aa = 3;
  float ans;

  ans = seven(rr, aa);

  printf("Number 7: %.4f\n", ans);

  // number 8
  float a1 = 2;
  float b1 = 2;
  float c1 = 2;
  float x1 = 2;
  float angSagot;

  angSagot = eight(a1, b1, c1, x1);

  printf("Number 8: %.4f\n", angSagot);

  // number 9
  float x3 = 2;
  float anotheranswer;

  anotheranswer = nine(x3);

  printf("Number 9: %.4f\n", anotheranswer);

  // number 10
  float x4 = 4;
  float anotheranotheranswer;

  anotheranotheranswer = ten(x4);

  printf("Number 10: %.4f\n", anotheranotheranswer);

  return 0;
}
