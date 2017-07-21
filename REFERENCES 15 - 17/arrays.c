#include <stdio.h>

typedef struct {
  int x;
  int y;
} Point;

int sum(int nums[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += nums[i];
  }
  return sum;
}

int max(int nums[], int length) {
  int max = nums[0];
  for (int i = 0; i < length; i++) {
    if (nums[i] > max) {
      max = nums[i];
    }
  }
  return max;
}

int main() {
  int nums[10]; 

  for (int i = 0; i < 10; i++) {
    nums[i] = i;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", nums[i]);
  }

  float floatNums[5];
  char characters[5];
  Point points[10];
  int* intPointers[10];

  return 0;
}
