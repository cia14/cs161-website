/*
 * CS 161-020, Lecture 5, Winter 2020
 * Example use of else to handle bad inputs
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

  /* If user is under 25, 
   * they must pay an extra fee */
  if (0 < age && age < 25)
    {
      cout << "You must pay an extra fee "
	   << "to rent this car." << endl;
    }
  else if (age >= 25)
    {
      cout << "No extra fee for you!" << endl;
    }
  else /* age <= 0 */
    {
      cout << "Age must be positive." << endl;
      return 1;
    }

  return 0;
}

