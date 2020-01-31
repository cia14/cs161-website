/*
 * CS 161-020, Lecture 10, Winter 2020
 * More string examples
 * Author: Kiri Wagstaff
 * Date: January 29, 2020
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;

  cout << "Please enter your name: ";
  cin >> name;

  cout << endl;
  cout << name << ", your name is "
       << name.length()
       << " characters long." << endl;
  cout << "The letter at position 2 is "
       << name.at(2) << endl;
  cout << "The letter at position 2 is "
       << name[2] << endl;
  cout << "Your name is ";
  if (!name.empty())
    {
      cout << "not ";
    }
  cout << "empty" << endl;

  return 0;
}
