#include <stdio.h>

char	toUpper(char letter){
  return (letter - 'a') + 'A';
}

char toLower(char ch){
  return (ch - 'A') + 'a';
}

int	toInt(char	number){
  return (number - '0');
}

char toChar(int number2){
  return (number2 + '0');
}

char threeDown(char letter2){
  if (letter2 >= 'X' && 'Z' >= letter2) {
    return (letter2 + 1) - 26;
  } else {
    return letter2 + 3;
  }
}

int main() {

  // number 1
  char letter = 'x';
  char x;

  x = toUpper(letter);

  printf("%c\n", x);

  // number 2
  char ch = 'D';
  char y;

  y = toLower(ch);

  printf("%c\n", y);

  // number 3
  char number = '2';
  int z;

  z = toInt(number);

  printf("%d\n", z);

  // number 4
  int number2 = 8;
  char z2;

  z2 = toChar(number2);

  printf("%c\n", z2);

  // number 5
  char letter2 = 'Z';
  char z3;

  z3 = threeDown(letter2);

  printf("%c\n", z3);

  return 0;
}
