/*
 * CS 161-020, Lecture 19, Winter 2020
 * Tic-tac-toe
 * Author: Kiri Wagstaff
 * Date: February 19, 2020
 */
#include <iostream>

using namespace std;

int main() {

  char** tic_tac_toe = new char*[3];
  for (int i=0; i<3; i++)
    tic_tac_toe[i] = new char[3];

  /* initialize board */
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      tic_tac_toe[i][j] = '_';

  /* print board */
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++)
      cout << tic_tac_toe[i][j];
    cout << endl;
  }
  cout << endl;

  /* cheat! specify 3 in a row */
  tic_tac_toe[0][2] = 'X';
  tic_tac_toe[1][1] = 'X';
  tic_tac_toe[2][0] = 'X';

  /* print board */
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++)
      cout << tic_tac_toe[i][j];
    cout << endl;
  }

  /* free memory */
  for (int i=0; i<3; i++) 
    delete [] tic_tac_toe[i];
  delete [] tic_tac_toe;

  return 0;

}

