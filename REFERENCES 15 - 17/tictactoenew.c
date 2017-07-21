#include <stdio.h>


// determine winner
int determineWinner(int board[][3]) {
  // check horizontal
  int i;
  int j;
  for (i = 0; i < 3; i++) {
    int row = 0;
    for (j = 0; j < 3; j++) {
      row += board[i][j];
    }
    if (row == -3) {
      return -1;
    } else if (row == 3) {
      return 1;
    }
  }

  // check vertical
  for (i = 0; i < 3; i++) {
    int coloumn = 0;
    for (j = 0; j< 3; j++) {
      coloumn += board[j][i];
    }
    if (coloumn == -3) {
      return -1;
    } else if (coloumn == 3) {
      return 1;
    }
  }

  // check diagonal
  int diagonal = board[0][0] + board[1][1] + board[2][2];
  if (diagonal == -3) {
    return -1;
  } else if (diagonal == 3) {
    return 1;
  }
  return 0;

}

// display
void display(int board[][3]) {
  int i;
  int j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (board[i][j] == 1) {
        printf("x ");
      } else if (board[i][j] == -1){
        printf("o ");
      } else {
        printf("- ");
      }
    }
    printf("\n");
  }
}


int main() {
  int board[3][3] = {
    {1, -1, -1},
    {0, 1, 1},
    {0, 0, 1}
  };


  display(board);

  int winner = determineWinner(board);

  if (winner == 0) {
    printf("No one has won yet!\n");
  } else {
    printf("Player %d is the winner!\n", determineWinner(board) == -1 ? 2 : 1);
  }
  return 0;
}
