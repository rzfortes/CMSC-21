#include <stdio.h>

// int, int -> int
// returns the smallest value recursively: first element or the smallest value of the rest of the element

int smallestValue(int* arr, int length) {
  if (length == 1) {
    return *arr;
  } else {
    if (*arr < *(arr + 1)) {
      *(arr + 1) = *arr;
    }
    smallestValue(arr + 1, length - 1);
  }
}

// int, int -> int
// returns the smallest value of the first and second half

int half(int* arr, int length) {
  if (length == 1) {
    return *arr;
  } else {
    if (*arr < *(arr + 1)) {
      *(arr + 1) = *arr;
    }
    half(arr + 1, length - 1);
  }
}

// int, int -> int
// returns the smallest value recursively: smallest value of the first half, smallest value of the second half

int smallestValue2(int* arr, int length) {
  int first = half(arr, length / 2);
  int second = half(arr + length / 2, length / 2);

  if (first > second){
    return second;
  } else {
    return first;
  }
}

int main() {

  int value[6] = {5, 1000, 1, -6, 3, 0};

  printf("%d", smallestValue(value, 6));

  printf("\n");

  printf("%d", smallestValue2(value, 6));

  return 0;
}

/*
void smallestValue2(int* arr, int length) {
  int first = *(arr + length / 2);
  int second = *(arr + length);

  if (first > second){
    printf("%d", second);
  } else {
    printf("%d", first);
  }
}*/
