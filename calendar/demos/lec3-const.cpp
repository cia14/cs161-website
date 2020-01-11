/*
 * CS 161-020, Lecture 3, Winter 2020
 * Use of 'const' keyword
 * Author: Kiri Wagstaff
 * Date: January 10, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  /* The answer to Life, the Universe, and Everything! */
  const int answer = 42;

  /* I changed my mind */
  answer = 37;

  /* Print the answer */
  cout << answer << endl;

  return 0;
}
