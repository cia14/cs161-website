/*
 * CS 161-020, Lecture 5, Winter 2020
 * Example of random number generation
 * Author: Kiri Wagstaff
 * Date: January 15, 2020
 */
#include <iostream>
#include <cstdlib> /* include to allow rand() to be used */
#include <ctime>   /* include to allow time() to be used */

using namespace std;

int main()
{
  int dice_roll = 0;

  /* Roll the dice */
  dice_roll = rand()%6 + 1;
  cout << "You rolled " << dice_roll << endl;
  if (dice_roll < 3)
    {
      cout << "You lose..." << endl;
    }
  else /* Rolled 3 or higher */
    {
      cout << "You win!" << endl;
    }

  return 0;
}

