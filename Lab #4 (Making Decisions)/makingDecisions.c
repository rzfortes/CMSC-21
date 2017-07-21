#include <stdio.h>

int isRetired(int aged){
  return aged >= 65;
}

int isAcid(float phlevel){
  return phlevel < 7;
}

int isTeenager(int age){
  return 13 <= age && age <= 19;
}

int isEven(int x){
  return x % 2 == 0;
}

int isMultipleof10(int y){
  return y % 10 == 0;
}

int isVowel(char letter){
  return letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u';
}

int isConsonant(char letter){
  return letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u';
}

char toUpper(char letter){
  if (letter >= 'A' && 'Z' >= letter) {
    return letter;
  } else {
    return (letter - 'a') + 'A';
  }
}

char toLower(char letter){
  if (letter >= 'a' && 'z' >= letter) {
    return letter;
  } else {
    return (letter - 'A') + 'a';
  }
}

int toInt(char number){
  if (number >= '0' && '9' >= number) {
    return (number - '1') + 1;
  } else {
    return -1;
  }
}

char toChar(int number){
  if (number >= 0 && 9 >= number) {
    return (number - 1) + '1';
  } else {
    return '\0';
  }
}

int main(){

  // number 1
  int aged = 34;
  int ans;

  ans = isRetired(aged);

  printf("%d\n", ans);

  // number 2
  float phlevel = 7.8;
  int level;

  level = isAcid(phlevel);

  printf("%d\n", level);

  // number 3
  int age = 18;
  int teen;

  teen = isTeenager(age);

  printf("%d\n", teen);

  // number 4
  int x = 20;
  int ode;

  ode = isEven(x);

  printf("%d\n", ode);

  // number 5
  int y = 22;
  int multiple;

  multiple = isMultipleof10(y);

  printf("%d\n", multiple);

  // number 6
  char letter = 'u';
  int vowel;

  vowel = isVowel(letter);

  printf("%d\n", vowel);

  // number 7
  char letter2 = 'r';
  int cons;

  cons = isConsonant(letter2);

  printf("%d\n", cons);

  // number 8
  char letter3 = 'r';
  char big;

  big = toUpper(letter3);

  printf("%c\n", big);

  // number 9
  char letter4 = 'D';
  char small;

  small = toLower(letter4);

  printf("%c\n", small);

  // number 10
  char number = '5';
  int digit;

  digit = toInt(number);

  printf("%d\n", digit);

  // number 11
  int number2 = 24;
  char digit2;

  digit2 = toChar(number2);

  printf("%c\n", digit2);

  return 0;
}
