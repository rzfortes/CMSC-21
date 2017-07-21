#include <stdio.h>

int main() {

  // number *2
  // letter a
  int i = 10;
  int j = 5;

  printf("%d\n", !i < j);

  // letter b
  int a = 2;
  int b = 1;

  printf("%d\n", !!a + !b);

  // letter c
  int c = 5;
  int d = 0;
  int e = -5;

  printf("%d\n", c && d || e);

  // letter d
  int f = 1;
  int g = 2;
  int h = 3;

  printf("%d\n\n", f < g || h);


  // number *3
  // letter a
  int k = 3;
  int l = 4;
  int m = 5;

  printf("%d\n", k < l || ++l < m);
  printf("%d %d %d\n", k, l, m);

  // letter b
  int n = 7;
  int o = 8;
  int p = 9;

  printf("%d\n", n - 7 && o++ < p);
  printf("%d %d %d\n", n, o, p);

  // letter c
  int q = 7;
  int r = 8;
  int s = 9;

  printf("%d\n", (q = r) || (r = s));
  printf("%d %d %d\n", q, r, s);

  // letter d
  int t = 1;
  int u = 1;
  int v = 1;

  printf("%d\n", ++t || ++u && ++v);
  printf("%d %d %d\n", t, u, v);

  return 0;
}
