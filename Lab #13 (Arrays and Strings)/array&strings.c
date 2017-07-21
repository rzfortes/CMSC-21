#include <stdio.h>


// int, int -> int;
// returns the smallest value in the array

int smallestValue(int arr[], int length) {
  int smallest = arr[0];
  for(int i = 1; i < length; i++) {
    if (smallest > arr[i]) {
      smallest = arr[i];
    }
  }
  return smallest;
}

// float, int -> boolean
// determines whether the values inside the array are sorted to smallest to largest

int isSorted(float arr[], int length) {
  int i = 0;
  int j = 0;
  for(i = 0; i < length; i++) {
    int smallest = arr[i];
    for(j = i+1; j < length; j++) {
      if (smallest > arr[j]) {
        return 0;
      }
    }
  } return 1;
}

// char -> int
// returns the number of words in the string

int numOfWords(char str[]) {
  int i = 0;
  int num = 0;
  for(; str[i]!='\0'; i++){
    if (str[i] == ' ') {
      num = num + 1;
    }
  }
  return num + 1;
}

// char -> char
// capitalizes the string

void toUpper(char str[], int length) {
  int i = 0;
  for(; i < length && str[i]!='\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = (str[i] - 'a') + 'A';
      printf("%c", str[i]);
    } else {
      printf("%c", str[i]);
    }
  } printf("\n");
}


// char -> char
// converts the string into Caesar cipher

void intoCaesar(char str[], int length) {
  int i = 0;
  for(; i < length && str[i]!='\0'; i++) {
    if (((str[i] >= 'X') && (str[i] <= 'Z')) || ((str[i] >= 'x') && (str[i] <= 'Z'))) {
      str[i] = (str[i] + 3) - 26;
      printf("%c", str[i]);
    } else if (str[i] != ' '){
      str[i] = str[i] + 1;
      printf("%c", str[i]);
    } else {
      printf("%c", str[i]);
    }
  }
}



int main() {

  // number 1

  int value[7] = {2, 4, 1, 5, 6, 0, 4};
  int ans = 0;

  printf("%d\n", ans = smallestValue(value, 7));

  // number 2

  float sorting[5] = {1.2, 1.3, 1.3, 1.4, 1.5};
  int ans1 = 0;

  printf("%d\n", ans1 = isSorted(sorting, 5));

  // number 3

  char str[50] = "abcde hehe habusdb hdudnid jdhskhds";
  int ans2 = 0;

  printf("%d\n", ans2 = numOfWords(str));

  // number 4

  char str1[5] = "ahrye";

  toUpper(str1, 5);

  // number 5

  char str2[34] = "defend the east wall of the castle";

  intoCaesar(str2, 34);

  return 0;
}
