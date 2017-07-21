#include <stdio.h>

typedef struct {
  int x;
  int y;
} Point;

typedef struct {
  Point a;
  Point b;
} Line;

// Line -> float
// returns the slope of the given Line

// stub
/*float slope(Line n) {
  return 0;
}
*/

// template
/*float slope(Line n) {
  return n.b.y n.a.y n.b.x n.a.x;
}
*/

int slope(Line n){
  return (n.b.y - n.a.y) / (n.b.x - n.a.x);
}

//Line, Line -> boolean
// checks if two lines are parallel, they are parallel if their slopes are equal

// stub
/*int isParallel(Line one, Line two){
  return 0;
}
*/

// template
/*int isParallel(Line one, Line two){
  return ... slope one slope two;
}
*/

int isParallel(Line one, Line two){
  return slope(one) == slope(two);
}

typedef struct {
  int day;
  int month;
  int year;
} Date;

typedef struct {
  int year;
  int month;
  int day;
} ExactAge;

// date, date -> ExactAge
// returns the exact age of the person given the date ofBirth and date today

// stub
/*ExactAge computeExactAge(Date ofBirth, Date today){
  return 0;
}
*/

// template
/*ExactAge computeExactAge(Date ofBirth, Date today){
  return 0;
}
*/

ExactAge computeExactAge(Date ofBirth, Date today){
  ExactAge age;

  age.year = (today.year) - (ofBirth.year);
  age.month = (today.month) - (ofBirth.month);
  age.day = (today.day) - (ofBirth.day);

  return age;
}

typedef struct {
  int age;
} Person;

// person -> void
// checks the person's age after its function is called; where the function is void yet increments the person's age

// stub
/*void happyBirthday(Person age){
  person;
}
*/

// template
/*void happyBirthday(Person age){
  ... person++;
}
*/

void happyBirthday(Person* age){
  &age + 1;
}

int main() {

  Line one = {2, 1, 4, 3};
  Line two = {1, 2, 3, 4};

  printf("%d, %d == %d\n", slope(one) == 1, slope(one), 1);
  printf("%d, %d == %d\n", slope(two) == 1, slope(two), 1);
  printf("%d, %d == %d\n", isParallel(one, two) == 1, isParallel(one, two), 1);
  printf("Line one: %d %d %d %d\n", one.a.x, one.a.y, one.b.x, one.b.y);
  printf("Line two: %d %d %d %d\n\n", two.a.x, two.a.y, two.b.x, two.b.y);

  Date ofBirth = {17, 04, 1997};
  Date today = {24, 10, 2015};

  printf("Age: %d %d %d\n", computeExactAge(ofBirth, today));
  printf("%Date of Birth: %d %d %d\n", ofBirth.day, ofBirth.month, ofBirth.year);
  printf("Date today: %d %d %d\n", today.day, today.month, today.year);

  Person *ica = {18};

  happyBirthday(&ica);

  printf("%d\n", (ica->age)); //expect 19

  return 0;
}
