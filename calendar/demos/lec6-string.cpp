/*
 * CS 161-020, Lecture 6, Winter 2020
 * Example of use of strings
 * Author: Kiri Wagstaff
 * Date: January 17, 2020
 */
#include <iostream>
#include <string>   /* include to allow strings to be used */

using namespace std;

int main()
{
  string favorite_color = "red";

  /* Query the user */
  cout << "What is your favorite color? " << endl;
  cin >> favorite_color;

  cout << "You like " << favorite_color << endl;

  /* You can use \n instead of endl */
  cout << "You like " << favorite_color << "\n";
  cout << "Longer code" << endl;
  cout << "Shorter code\n";

  return 0;
}

