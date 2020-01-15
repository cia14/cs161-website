/*
 * CS 161-020, Lecture 5, Winter 2020
 * Examples of if/then/else statements
 * Author: Kiri Wagstaff
 * Date: January 15, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  char user_feeling = 'n';

  cout << "Are you feeling good today? (y/n) " << endl;
  cin >> user_feeling; /* reads in a single character */

  if ((user_feeling == 'y') ||
      (user_feeling == 'Y'))
    {
      cout << "Today is a great day!" << endl;
    }
  else if ((user_feeling == 'n') ||
	   (user_feeling == 'N'))
    {
      cout << "Today is not going well." << endl;
    }
  else /* user_feeling is not 'y'/'Y' or 'n'/'N' */
    {
      cout << "Invalid choice." << endl;
    }

  return 0;
}

