/*
 * CS 161-020, Lecture 6, Winter 2020
 * Example of random number generation with do-while loop
 * Author: Kiri Wagstaff
 * Date: January 17, 2020
 */
#include <iostream>
#include <cstdlib> /* include to allow rand() to be used */
#include <ctime>   /* include to allow time() to be used */

using namespace std;

int main()
{
  int dice_roll = 0;

  /* Seed the generator with the current time,
   * so it's different each time */
  srand(time(NULL));

  /* Keep rolling until you get a 3 */
  do
    {
      dice_roll = rand()%6 + 1;
      cout << "You rolled " << dice_roll << endl;
    } while (dice_roll != 3);
  cout << "You win!" << endl;
  
  return 0;
}

