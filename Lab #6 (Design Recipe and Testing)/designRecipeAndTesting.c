#include <stdio.h>

#define LUX 0.01
#define FREEZING_POINT 0

// float, float -> boolean
// determines whether the camera should be switched on or not; light level must be less than 0.01 LUX,
// temperature must be above freezing (Celsius)

/* stub
int toSwitch(float lightLevel, int temp){
  return 0;
}
*/

/* template
int toSwitch(float lightLevel, int temp){
  return lightLevel, temp;
}
*/

int toSwitch(float lightLevel, int temp){
  return ((lightLevel < LUX && temp < FREEZING_POINT) || (lightLevel > LUX && temp > FREEZING_POINT));
}

// int, int, int -> int
// accepts 3 integers and returns the largest int value

/* stub
int largestInt(int a, int b, int c){
  return 0;
}
*/

/* template
int largestInt(int a, int b, int c){
  return ... a, b, c;
}
*/

int largestInt(int a, int b, int c){
  if (a > b && a > c) {
    return a;
  } else if (b > a && b > c) {
    return b;
  } else {
    return c;
  }
}

// int, int -> int
// determines if someone is at risk for heart disease; 1 for low, 2 for medium, 3 for high

/* stub
int heartDisease(int age, float BMI){
  return 0;
}
*/

/* template
int heartDisease(int age, float BMI){
  return ... x, y;
}
*/

#define CONSTANT_AGE 45
#define CONSTANT_BMI 22.0

int heartDisease(int age, float BMI){
  if ((age < CONSTANT_AGE) && (BMI < CONSTANT_BMI)) {
    return 1;
  } else if (((age < CONSTANT_AGE) && (BMI >= CONSTANT_BMI)) || ((age >= CONSTANT_AGE) && (BMI < CONSTANT_BMI))) {
    return 2;
  } else {
    return 3;
  }
}

int main(){

  printf("%d, %d == %d\n", toSwitch(0.0, 1) == 0, toSwitch(0.0, 1), 0);
  printf("%d, %d == %d\n", toSwitch(1.0, -1) == 0, toSwitch(1.0, -1), 0);
  printf("%d, %d == %d\n", toSwitch(0.01, 0) == 1, toSwitch(0.01, 0), 1);
  printf("%d, %d == %d\n", toSwitch(0.01, 1) == 0, toSwitch(0.01, 1), 0);
  printf("%d, %d == %d\n", toSwitch(0.01, -1) == 1, toSwitch(0.01, -1), 1);
  printf("%d, %d == %d\n", toSwitch(0.009, 0) == 1, toSwitch(0.009, 0), 1);
  printf("%d, %d == %d\n", toSwitch(0.009, 1) == 0, toSwitch(0.009, 1), 0);
  printf("%d, %d == %d\n", toSwitch(0.009, -1) == 1, toSwitch(0.009, -1), 1);
  printf("%d, %d == %d\n", toSwitch(0.02, 0) == 1, toSwitch(0.02, 0), 1);
  printf("%d, %d == %d\n", toSwitch(0.02, 1) == 1, toSwitch(0.02, 1), 1);
  printf("%d, %d == %d\n\n", toSwitch(0.02, -1) == 0, toSwitch(0.02, -1), 0);

  printf("%d, %d == %d\n", largestInt(3, 1, 2) == 3, largestInt(3, 1, 2), 3);
  printf("%d, %d == %d\n", largestInt(1, 2, 3) == 3, largestInt(1, 2, 3), 3);
  printf("%d, %d == %d\n", largestInt(2, 1, 3) == 3, largestInt(2, 1, 3), 3);
  printf("%d, %d == %d\n", largestInt(3, 2, 1) == 3, largestInt(3, 2, 1), 3);
  printf("%d, %d == %d\n", largestInt(-3, 1, 2) == 2, largestInt(-3, 1, 2), 2);
  printf("%d, %d == %d\n", largestInt(2, 1, -3) == 2, largestInt(2, 1, -3), 2);
  printf("%d, %d == %d\n", largestInt(3, 3, 3) == 3, largestInt(3, 3, 3), 3);
  printf("%d, %d == %d\n", largestInt(3, -1, 2) == 3, largestInt(3, -1, 2), 3);
  printf("%d, %d == %d\n\n", largestInt(0, 1, 2) == 2, largestInt(0, 1, 2), 2);

  printf("%d, %d == %d\n", heartDisease(44, 21) == 1, heartDisease(44, 21), 1);
  printf("%d, %d == %d\n", heartDisease(44, 22) == 2, heartDisease(44, 22), 2);
  printf("%d, %d == %d\n", heartDisease(44, 23) == 2, heartDisease(44, 23), 2);
  printf("%d, %d == %d\n", heartDisease(45, 21) == 2, heartDisease(45, 21), 2);
  printf("%d, %d == %d\n", heartDisease(45, 22) == 3, heartDisease(45, 22), 3);
  printf("%d, %d == %d\n", heartDisease(45, 23) == 3, heartDisease(45, 23), 3);
  printf("%d, %d == %d\n", heartDisease(46, 21) == 2, heartDisease(46, 21), 2);
  printf("%d, %d == %d\n", heartDisease(46, 22) == 3, heartDisease(46, 22), 3);
  printf("%d, %d == %d\n\n", heartDisease(46, 23) == 3, heartDisease(46, 23), 3);

  return 0;
}
