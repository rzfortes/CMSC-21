#include <stdio.h>
#include <math.h>

/* Write a function that calculates the cost per square inch of a 
 * circular pizza, given its diameter and price. The formula for area 
 * is A = πr2
 */

// float -> float
// Returns the radius given the diameter
/* stub
float radius(float diameter) {
  return 0.0f;
}
*/

/* template
float radius(float diameter) {
  return ... diameter;
}
*/

float radius(float diameter) {
  return diameter / 2;
}

// float -> float
// Returns the area of a circle given the radius
/* stub
float area(float radius) {
  return 0.0f;
}
*/

/* template
float area(float radius) {
  return ... radius M_PI;
}
*/

float area(float radius) {
  return M_PI * pow(radius, 2);
}


// float, float -> float
// Returns the cost per square inch of a pizza,
// given its diameter and price

/* stub
float costPerSqInch(float diameter, float price) {
  return 0.0f;
}
*/

/* template
float costPerSqInch(float diameter, float price) {
  return ... diameter price;
}
*/

float costPerSqInch(float diameter, float price) {
  return price / area(radius(diameter));
}

int main() {
   
  printf("%f == %f\n", radius(8.0f), 8.0f / 2);
  printf("%f == %f\n", area(4.0f), M_PI * pow(4.0f, 2));
  printf("%f == %f\n", costPerSqInch(8, 350.0f), 6.96f);

  return 0;
}
