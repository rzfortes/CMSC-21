#include <stdio.h>
#include <math.h>

// int -> int
// returns the given integer raised to the power of 3

/* stub
int cubed(int n){
  return 0;
}
*/

/* template
int cubed(int n){
  return ... n;
}
*/

int cubed(int n){
  return pow(n, 3);
}

// int -> boolean
// determines wheter the given number is an even number

/* stub
int isEven(int num){
  return 0;
}
*/

/* template
int isEven(int num){
  return ... num;
}
*/

int isEven(int num){
  return num % 2 == 0;
}

// char -> boolean
// determines whether the given character is an uppercase letter of the alphabet

/* stub
int isUppercase(char ch){
  return 0;
}
*/

/* template
int isUppercase(char ch){
  return ... ch;
}
*/

int isUppercase(char ch){
  return 'A' <= ch && ch <= 'Z';
}

// int -> int
// calculates the cost on an order, kapehan coffee shop

/* stub
int orderCost(int kilo){
  return 0;
}
*/

#define PERKILO 850
#define SHIP 185
#define FIXED 250

/* template
int orderCost(int kilo){
  return ... kilo PERKILO SHIP FIXED;
}
*/

int orderCost(int kilo){
  return (PERKILO * kilo) + (SHIP * kilo) + FIXED;
}

/* stub
int exceptLastDigit(int dig){
  return 0;
}
*/

/* template
int exceptLastDigit(int dig){
  return ... dig;
}
*/

int exceptLastDigit(int digit){
  return digit / 10;
}

int main(){

  printf("%d, %d == %d\n", cubed(3) == 27, cubed(3), 3 * 3 * 3);
  printf("%d, %d == %d\n", cubed(-4) == -64, cubed(-4), -64);
  printf("%d, %d == %d\n\n", cubed(0) == 0, cubed(0), 0);

  printf("%d, %d == %d\n", isEven(18) == 1, isEven(18), 18 % 2 == 0);
  printf("%d, %d == %d\n", isEven(31) == 1, isEven(31), 31 % 2 == 1);
  printf("%d, %d == %d\n\n", isEven(-102) == 1, isEven(-102), -102 % 2 == 0);

  printf("%d, %d == %d\n", isUppercase('a'), isUppercase('a') == 1);
  printf("%d, %d == %d\n", isUppercase('R'), isUppercase('R') == 1);
  printf("%d, %d == %d\n\n", isUppercase('i'), isUppercase('i') == 1);

  printf("%d, %d == %d\n", orderCost(2) == 2320, orderCost(2), 2320);
  printf("%d, %d == %d\n", orderCost(3) == 3355, orderCost(3), 3355);
  printf("%d, %d == %d\n\n", orderCost(5) == 5425, orderCost(5), (850 * 5) + (185 * 5) + 250);

  printf("%d, %d == %d\n", exceptLastDigit(102) == 10, exceptLastDigit(102), 102 / 10);
  printf("%d, %d == %d\n", exceptLastDigit(0) == 0, exceptLastDigit(0), 0);
  printf("%d, %d == %d\n", exceptLastDigit(-5064) == -506, exceptLastDigit(-5064), -5064 / 10);
  printf("%d, %d == %d\n", exceptLastDigit(20156) == 2015, exceptLastDigit(20156), 2015);

  return 0;
}
