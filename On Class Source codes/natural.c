#include <stdio.h>

// int -> void
// Print all integers from 0 to n
void printNatural(int n) {
  if (n == 0) {
    printf("%d ", n);
  } else {
    printNatural(n - 1);
    printf("%d ", n);
  }
}

// int -> int
// Returns the sum of all integers from 1 to n
int sum(int n) {
  if (n == 0) {
    return n;
  } else {
    return n + sum(n - 1);
  }
}

// int, int -> int
// Returns x * y
int multiply(int x, int y) {
  if (y == 0) {
    return 0;
  } else {
    return x + multiply(x, y - 1);
  }
}


int main() {

  printf("%d\n", multiply(2, 3)); // expect 6
  printNatural(5); // expect print 1 2 3 4 5
  printf("\n");

  printf("%d\n", sum(5)); // expect 15

  return 0;
}
