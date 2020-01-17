/*
 * CS 161-020, Lecture 6, Winter 2020
 * Example of switch statement
 * Author: Kiri Wagstaff
 * Date: January 17, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  char user_feeling = 'n';

  cout << "Are you feeling good today? (y/n) " << endl;
  cin >> user_feeling;

  switch (user_feeling)
    {
    case 'y': /* fall through to case 'Y' */
    case 'Y': 
      cout << "Today is a great day!" << endl;
      break;
    case 'n': /* fall through to case 'N' */
    case 'N':
      cout << "Today is not going well." << endl;
      break;
    default: /* user_feeling is not 'y'/'Y' or 'n'/'N' */
      cout << "Invalid choice." << endl;
    }

  return 0;
}

