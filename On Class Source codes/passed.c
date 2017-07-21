#include <stdio.h>

#define FINAL_POINTS 150
#define STANDING_PERCENT 0.80f
#define FINAL_PERCENT 0.20f 
#define PASSING 0.60f

// int -> float
// Returns the percent score of the final exam
float finalExamPercentage(int finalScore) {
  return (float) finalScore / (float) FINAL_POINTS;
}

// float, float -> float
// Returns the final grade given final exam and standing
float finalGrade(float finalExamPercentage, float standing) {
  return (standing * STANDING_PERCENT) 
    + (finalExamPercentage * FINAL_PERCENT);
}
 
// int, float -> boolean
// Returns true if final exam score is high enough
// for student to pass, given class standing
/* stub
int hasPassed(int finalScore, float standing) {
  return 0;
}
*/


/* template
int hasPassed(int finalScore, float standing) {
  return ... finalScore standing FINAL_POINTS STANDING_PERCENT
    FINAL_PERCENT PASSING;
}
*/


int hasPassed(int finalScore, float standing) {
  return finalGrade(finalExamPercentage(finalScore), standing) 
    >= 0.60f;
}

int main() {
  printf("%f == %f\n", 
    finalExamPercentage(150), 
    (float) 150 / (float) FINAL_POINTS
  );
  printf("%f == %f\n", 
    finalExamPercentage(120), 
    (float) 120 / (float) FINAL_POINTS
  );
  printf("%f == %f\n", 
    finalExamPercentage(50), 
    (float) 50 / (float) FINAL_POINTS
  );
 

  printf("%d == %d\n", hasPassed(150, 0.60f), 1); // 1
  printf("%d == %d\n", hasPassed(120, 0.60f), 1); // 1
  printf("%d == %d\n", hasPassed(50, 0.60f), 0); // 1
  return 0;
}
