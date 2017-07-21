#include <stdio.h>
#include <math.h>

// float-> float
// computes for the 20% grade of the final exam

/* stub
float finalExam(float exam){
  return 0;
}
*/

/* template
float finalExam(float exam){
  return ... exam TOTAL_EXAM EXAM_COMPRISES;
}
*/

#define STANDING_COMPRISES 0.80
#define EXAM_COMPRISES 0.20
#define TOTAL_EXAM 150.0
#define PASSING_GRADE .60

float finalExamPercentage(float exam){
  return (exam / TOTAL_EXAM) * EXAM_COMPRISES;
}

// float -> float
// computes for the final class standing

/* stub
float cStanding(float standing){
  return 0;
}
*/

/* template
float cStanding(float standing){
  return ... standing STANDING_COMPRISES;
}
*/

float classStandingPercentage(float standing){
  return standing * STANDING_COMPRISES;
}

// int, float -> float
// determines whether a student passed or failed given his finals exam score and current standing

/* stub
float finalGrade(int exam, float standing){
  return 0;
}
*/

/* template
float finalGrade(int exam, float standing){
  return ... exam standing;
}
*/

float finalGrade(float exam, float standing){
  return finalExamPercentage(exam) + classStandingPercentage(standing);
}

// float, float -> boolean
// determines whether student is passing or not

/* stub
int isPassing(float exam, float standing){
  return 0;
}
*/

/* template
int isPassing(float exam, float standing){
  return ...finalGrade PASSING_GRADE;
}
*/

int isPassing(float exam, float standing){
  return finalGrade(exam, standing) >= PASSING_GRADE;
}

// int, int -> float
// calculates the total fare given the kilometers and how many persons

/* stub
float totalFare(int kilometers, int person){
  return 0;
}
*/

/* template
float totalFare(int kilometers, int person){
  return ... kilometers KM_BASE ADD_FARE person;
}
*/

#define FARE_RATE 7.50
#define KM_BASE 5
#define ADD_FARE 0.75

float totalFare(int kilometers, int person){
  return (((kilometers - KM_BASE) * ADD_FARE) + FARE_RATE) * person;
}

// Point, Point -> float
// calculates the slope of the given points

/* stub
float slope(Point a, Point b){
  return 0;
}*/

/* template
float slope(Point a, Point b){
  return ... b.y a.y b.x a.x;
}
*/

typedef struct{
  int x;
  int y;
}Point;

float slope(Point a, Point b){
  return (float) (b.y - a.y) / (float) (b.x - a.x);
}

// Point, Point -> boolean
// determines whether the slope is horizontal

/* stub
int isHorizontal(Point a, Point b){
  return 0;
}
*/

/* template
int isHorizontal(Point a, Point b){
  return ... slope(a, b) 0;
}
*/

int isHorizontal(Point a, Point b){
  return slope(a, b) == 0;
}

int main(){

  printf("%d, %f == %f\n", isPassing(120.0, 0.60) == 1, finalGrade(120.0, 0.60), 0.64);
  printf("%d, %f == %f\n", isPassing(90.0, 0.60) == 1, finalGrade(90.0, 0.60), 0.60);
  printf("%d, %f == %f\n", isPassing(75.0, 0.59) == 0, finalGrade(75.0, 0.59), 0.572);
  printf("%d, %f == %f\n", isPassing(120.0, 0.30) == 0, finalGrade(120.0, 0.30), 0.40);
  printf("%d, %f == %f\n", isPassing(74.0, 0.80) == 1, finalGrade(74.0, 0.80), 0.738667);
  printf("%d, %f == %f\n\n", isPassing(120.0, 0.40) == 0, finalGrade(120.0, 0.40), 0.48);

  printf("%d, %f == %f\n", totalFare(5, 1) == 7.50, totalFare(5, 1), 7.50);
  printf("%d, %f == %f\n", totalFare(5, 2) == 15.0, totalFare(5, 2), 15.0);
  printf("%d, %f == %f\n", totalFare(5, 3) == 22.5, totalFare(5, 3), 22.5);
  printf("%d, %f == %f\n", totalFare(6, 1) == 8.25, totalFare(6, 1), 8.25);
  printf("%d, %f == %f\n", totalFare(6, 2) == 16.5, totalFare(6, 2), 16.5);
  printf("%d, %f == %f\n\n", totalFare(6, 3) == 24.75, totalFare(6, 3), 24.75);

  Point a = {2.0, 1.0};
  Point b = {3.0, 2.0};

  printf("%d, %f == %f\n", isHorizontal(a, b) == 0, slope(a, b), 1.0);

  a.x = -2.0;
  a.y = 1.0;
  b.x = -2.0;
  b.y = 1.0;

  printf("%d, %f == %f\n", isHorizontal(a, b) == 0, slope(a, b), 0.0);

  return 0;
}
