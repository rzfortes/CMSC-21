#include <stdio.h>
#include <math.h>

// int, int -> int
// compares the two integers

/* stub
int largerValue(int x, int y){
  return 0;
}
*/

/* template
int largerValue(int x, int y){
  return ... x y;
}
*/

int largerValue(int x, int y){
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

// int, int, int -> int
// returns the largest value among x, y, z

/* stub
int largestValue(int x, int y, int z){
  return 0;
}
*/

/* template
int largestValue(int x, int y, int z){
  return x y z;
}
*/

int largestValue(int x, int y, int z){
  return largerValue(largerValue(x, y), z);
}

// float -> float
// converts degrees into radians

/* stub
float radians(float angle){
  return 0;
}
*/

/* template
float radians(float angle){
  return ... M_PI 180 angle;
}
*/

float radians(float angle){
  return (angle * M_PI) / 180;
}

// int, int -> float
// computes for the length of the ladder given the height and converting the angle into radian

/* stub
int lengthOfLadder(int height, int angle){
  return 0;
}
*/

/* template
int lengthOfLadder(int height, int angle){
  return height M_PI sin angle;
}
*/

/*float radians(int angle){
  return (M_PI * angle) / 180;
}
*/

float lengthOfLadder(float height, float angle){
  return height / sinf(radians(angle));
}

// int -> float
// calculates for the radius of the given diameter

/* stub
float radius(int diameter){
  return 0;
}
*/

/* template
float radius(int diameter){
  return ... diameter;
}
*/

float radius(int diameter){
  return diameter / 2;
}

// float -> float
// calculates for the Area

/* stub
float area(float radius){
  return 0;
}
*/

/* template
float area(float radius){
  return ... M_PI radius;
}
*/

float area(float diameter){
  return M_PI * powf(radius(diameter), 2);
}

// float, float -> float
// calculates the cost per sq in of a circular pizza, given the diameter and price

/* stub
float costPerSqInch(int diameter, int price){
  return 0;
}
*/

/* template
float costPerSqInch(int diameter, int price){
  return ... diameter price M_PI;
}
*/

float costPerSqInch(float diameter, float price){
  return price / area(diameter);
}

int main(){

  printf("%d, %d == %d\n", largestValue(1, 2, 3) == 3, largestValue(1, 2, 3), 3);
  printf("%d, %d == %d\n", largestValue(1, 2, 2) == 2, largestValue(1, 2, 2), 2);
  printf("%d, %d == %d\n", largestValue(3, 2, 1) == 3, largestValue(3, 2, 1), 3);
  printf("%d, %d == %d\n", largestValue(-1, -2, -3) == -1, largestValue(-1, -2, -3), -1);
  printf("%d, %d == %d\n", largestValue(-1, -2, -1) == -1, largestValue(-1, -2, -1), -1);
  printf("%d, %d == %d\n", largestValue(-3, -2, -1) == -1, largestValue(-3, -2, -1), -1);
  printf("%d, %d == %d\n", largestValue(-1, 1, 0) == 1, largestValue(-1, 1, 0), 1);
  printf("%d, %d == %d\n\n", largestValue(0, -1, 1) == 1, largestValue(0, -1, 1), 1);

  printf("%d, %.2f == %.2f\n\n", lengthOfLadder(15.0f, 45.0f) == 21.213203f, lengthOfLadder(15.0f, 45.0f), 21.213203f);

  printf("%d, %.2f == %.2f\n", costPerSqInch(8.0, 300.0) == 5.9683, costPerSqInch(8.0, 300.0), 5.9683);

  return 0;
}
