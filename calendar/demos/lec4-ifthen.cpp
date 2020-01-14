/*
 * CS 161-020, Lecture 4, Winter 2020
 * Example if/then statement
 * Author: Kiri Wagstaff
 * Date: January 13, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  short age = 0;

  /* Ask user age */
  cout << "Please enter your age: ";
  cin >> age;

  /* If user is under 25, 
   * they must pay an extra fee */
  if (age < 25)
    {
      cout << "You must pay an extra fee "
	   << "to rent this car." << endl;
    }
  else
    {
      cout << "No extra fee for you!" << endl;
    }
  cout << age << endl;

  return 0;
}
