#include <stdio.h>

/*
 * Create a function that returns the largest value
 * of three integers
 */

// int, int, int -> int
// Returns the maximum value of three integers
/* stub
int maxOfThree(int num1, int num2, int num3) {
  return 0;
}
*/

/* template
int maxOfThree(int num1, int num2, int num3) {
  return ... num1 num2 num3;
}
*/

int maxOfThreeOld(int num1, int num2, int num3) {
  if (num1 > num2 && num1 > num3) {
    return num1;
  } else if (num2 > num1 && num2 > num3) {
    return num2;
  } else {
    return num3;
  }
}

int maxOfTwo(int num1, int num2) {
  if (num1 > num2)  {
    return num1;
  } else {
    return num2;
  }
}

int maxOfThree(int num1, int num2, int num3) {
  return maxOfTwo(maxOfTwo(num1, num2), num3);
}


int main() {
  printf("%d, %d == %d\n", maxOfThree(3, 2, 1) == 3,
    maxOfThree(3, 2, 1), 3); // 3
  printf("%d, %d == %d\n", maxOfThree(2, 3, 1) == 3,
    maxOfThree(2, 3, 1), 3); // 3
  printf("%d, %d == %d\n", maxOfThree(1, 2, 3) == 3,
    maxOfThree(1, 2, 3), 3); // 3
  printf("%d, %d == %d\n", maxOfThree(3, 3, 3) == 3,
    maxOfThree(3, 3, 3), 3); // 3

  printf("%d\n", maxOfTwo(1, 2));
  printf("%d\n", maxOfTwo(2, 1));
  printf("%d\n", maxOfTwo(2, 2));
    
  return 0;
}
