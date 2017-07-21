#include <stdio.h>

// int, int -> int
// removes an element from the array given the array elements and the index

void deleteElement(int arr[], int len, int index) {
  int i;
  for (i = index; i < len - 1; i++)
    arr[i] = arr[i+1];
  for (i = 0; i < len - 1; i++)
    printf("%d ", arr[i]);
}

void insertElement(int arr[], int len, int index, int newValue) {
  int i;
  for (i = 0; i < len; i++)
    printf("%d ", arr[i]);
    printf("\n");
  for (i = len; i >= index; i--)
    arr[i+1] = arr[i];
  arr[index] = newValue;
  printf("\n");
  for (i = 0; i <= len; i++)
    printf("%d ", arr[i]);
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

 // deleteElement(arr, 5, 3);
  printf("\n\n");
  insertElement(arr, 5, 3, -1);
}
