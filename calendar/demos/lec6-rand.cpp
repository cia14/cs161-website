/*
 * CS 161-020, Lecture 6, Winter 2020
 * Example of random number generation
 * Author: Kiri Wagstaff
 * Date: January 17, 2020
 */
#include <iostream>
#include <cstdlib> /* include to allow rand() to be used */

using namespace std;

int main()
{
  int dice_roll = 0;

  /* Roll the dice a few times */
  dice_roll = rand()%6 + 1;
  cout << "You rolled " << dice_roll << endl;

  dice_roll = rand()%6 + 1;
  cout << "You rolled " << dice_roll << endl;

  dice_roll = rand()%6 + 1;
  cout << "You rolled " << dice_roll << endl;

  return 0;
}

