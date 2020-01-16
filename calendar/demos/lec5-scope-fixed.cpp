/*
 * CS 161-020, Lecture 5, Winter 2020
 * Example showing variable scope limitations
 * Author: Kiri Wagstaff
 * Date: January 15, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  short age = 0;

  /* Ask user age */
  cout << "Please enter your age: ";
  cin >> age;

  float fee = 3.95;
  /* If user is under 25, 
   * they must pay an extra fee */
  if (age < 25)
    {
      cout << "You must pay an extra fee of " << fee
	   << "to rent this car." << endl;
    }
  else
    {
      cout << "No extra fee for you!" << endl;
    }
  cout << "The underage driver fee is " << fee << endl;

  return 0;
}
