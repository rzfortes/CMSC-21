#include <stdio.h>

//1. Design a function that determines the least common multiple of a given pair of
// integers.

// int, int -> int
// determines the least common multiple of a given pair of integers

/* stub
int leastCommonMultiple(int num1, int num2) {
  return 0;
}
*/

/* template
int leastCommonMultiple(int num1, int num2) {
  return ... num1 num2;
}
*/

int leastCommonMultiple(int num1, int num2) {

}


/*int leastCommonMultiple(int num1, int num2) {
  if(num2 % num1 == 0 || num1 % num2 == 0) {
    if (num1 > num2) {
      return num1;
    } else {
      return num2;
    }
  } else {
    return num1 * num2;
  }
}
*/

// 2. Given a positive integer n, design a function that prints a list of the first n cubes
// assuming 1 is the first cube. Sample: n = 4, output: 1, 8, 27, 64 (because 1*1*1 is
// 1, 2*2*2 is 8, 3*3*3 is 27 and 4*4*4 is 64).

// int -> void
// prints the list of the first n cubes assuming 1 is the first cube

/* stub
void nCubes(int n) {
  return 0;
}
*/

/* template
void nCubes(int n) {
  ..n count i ans;
}
*/

void nCubes(int n) {
  int count = 1;
  int i;
  int ans = 1;

  for (i = 1; i <= n; i++) {
    printf("%d ", ans);

    if (i == 1) {
      printf("\nCube: %d ", ans);
    } else {
      for (count = 1; count <= 3; count++) {
        ans = ans * i;
      }
    }
    ans = 1;
  }
}

// 3. Design a function that determines whether a number is prime. A number is prime
// if it does not have factors other than 1 and itself.

// int -> boolean
// determines whether a number is prime or not

/* stub
int isPrime(int n) {
  return 0;
}
*/

/* template
int isPrime(int n) {
  return ... n
}
*/

int isPrime(int n) {
  int i;
  for(i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return 0;
      break;
    }
  }
  return 1;
}

int main() {

  printf("%d\n", leastCommonMultiple(2, 4));
  printf("%d\n", leastCommonMultiple(1, 3));
  printf("%d\n", leastCommonMultiple(3, 3));
  printf("%d\n", leastCommonMultiple(6, 12));
  printf("%d\n\n", leastCommonMultiple(7, 6));

  nCubes(1);
  nCubes(2);
  nCubes(3);
  nCubes(4);
  nCubes(5);
  nCubes(6);
  nCubes(7);
  nCubes(8);
  nCubes(9);

  printf("\n\n");

  printf("%d\n", isPrime(2));
  printf("%d\n", isPrime(3));
  printf("%d\n", isPrime(4));
  printf("%d\n", isPrime(121));
  printf("%d\n", isPrime(169));
  printf("%d\n", isPrime(13));
  printf("%d\n", isPrime(99));
  printf("%d\n", isPrime(1048));
  printf("%d\n", isPrime(33));
  printf("%d\n", isPrime(27));
  printf("%d\n", isPrime(25));

  return 0;
}
