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
  char letter = '';

  cout << "Please enter a letter from a to z: ";
  cin >> letter;

  if (letter == 'k') 
    {
      cout << "The letter is k." << endl;
    }
  else
    {
      cout << "The letter is not k." << endl;
    }

  return 0;
}

