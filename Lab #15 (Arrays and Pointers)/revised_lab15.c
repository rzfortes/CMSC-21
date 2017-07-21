#include <stdio.h>

// int, int -> int
// compares the two elements of the given array

int minArr(int first, int second) {
  if (first > second) {
    return second;
  } else {
    return first;
  }
}

// int, int -> int
// returns the smallest value of the array recursively: first element, the smallest value of the rest of the element

// STUB
/*int smallestValue(int* arr, int length) {
  return 0;
}
*/

int smallestValue(int* arr, int length) {
  if (length == 1) {
    return *arr;
  } else {
    return minArr(*arr, smallestValue(arr + 1, length - 1));
  }
}

// int, int -> int
// returns the smallest value recursively: smallest value of the first half, smallest value of the second half

// STUB
/*int smallestValue2(int* arr, int length) {
  return 0;
}
*/

int smallestValue2(int* arr, int length) {
  if (length == 0) {
    return *arr;
  } else {
    int firstHalf = minArr(*arr, smallestValue2(arr, length / 2));
    int secondHalf = minArr(*arr, smallestValue2(arr + length / 2, length / 2));

    return minArr(firstHalf, secondHalf);
  }
}

int main() {

  int value[6] = {5, 1000, 1, -6, 3, -10};

  printf("%d", smallestValue(value, 6));

  printf("\n");

  int value2[7] = {5, 1000, 1, 6, 0, 2, -3};

  printf("%d", smallestValue2(value2, 7));

  return 0;
}
