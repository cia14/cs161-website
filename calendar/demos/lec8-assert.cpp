/*
 * CS 161-020, Lecture 8, Winter 2020
 * Assert
 * Author: Kiri Wagstaff
 * Date: January 24, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  char c;

  cout << "Enter a character.. but not q! : "
       << endl;
  cin >> c;
  assert(c != 'q');

  cout << "You typed " << c << endl;
  
  return 0;
}
