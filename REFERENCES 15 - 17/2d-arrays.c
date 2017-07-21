#include <stdio.h>

int main() {
  // float scores[5] = {7.0, 7.0, 7.0, 7.0, 7.0};
  float scores[5];

  scores[0] = 7.0;
  scores[1] = 7.0;
  scores[2] = 7.0;
  scores[3] = 7.0;
  scores[4] = 7.0;

  float sum = 0;
  int i;
  for (i = 0; i < 5; i++) {
    sum += scores[i];
  }
  float ave = sum / 5;
  printf("%f\n", ave);


  //float manyscores[4][3] = {
  //  {7.0, 7.0, 7.0},
  //  {7.0, 7.0, 7.0},
  //  {7.0, 7.0, 7.0},
  //  {7.0, 7.0, 7.0}
  //};
  float manyscores[4][3];

  manyscores[0][0] = 7.0;
  manyscores[0][1] = 7.0;
  manyscores[0][2] = 7.0;

  manyscores[1][0] = 7.0;
  manyscores[1][1] = 7.0;
  manyscores[1][2] = 7.0;

  manyscores[2][0] = 7.0;
  manyscores[2][1] = 7.0;
  manyscores[2][2] = 7.0;

  manyscores[3][0] = 7.0;
  manyscores[3][1] = 7.0;
  manyscores[3][2] = 7.0;

  float manysum = 0;
  int j;
  for (i = 0; i < 4; i++) {
    float studentsum = 0;
    for (j = 0; j < 3; j++) {
      studentsum += manyscores[i][j];
    }
    manysum += studentsum;
  }
  float manyave = manysum / (4 * 3);
  printf("%f\n", manyave);

  return 0;
}
