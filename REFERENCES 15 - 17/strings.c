#include <stdio.h>


void stringFunction(char arr[]) {
  int i;
  for (i = 0; arr[i] != '\0'; i++) {
    // do something
  }
}

void printString(char arr[]) {
  int i;
  for (i = 0; arr[i] != '\0'; i++) {
    printf("%c ", arr[i]);
  }
  printf("\n");
}

int length(char str[]) {
  int len = 0;
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    len++;
  }
  return len;
}

int isEqual(char str1[], char str2[]) {
  int i;
  for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
    if (str1[i] != str2[i]) {
      return 0;
    }
  }
  return length(str1) == length(str2);
}

int main() {

  char chars[10] = "abcde";// {'a', 'b', 'c', 'd', 'e'}
  char str[5] = "abcd";//{'a', 'b', 'c', 'd', '\0', 'd', 'e', 'f'}

  printString(chars);
  printString(str);

  printf("%d\n", isEqual(chars, str));
  printf("%s\n", chars);
  printf("%s\n", str);


  return 0;
}
