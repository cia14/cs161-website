/*
 * CS 161-020, Lecture 13, Winter 2020
 * Scope practice 3 - what does this code print?
 * Author: Kiri Wagstaff
 * Date: February 5, 2020
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int z = 14;
  for (z = 0; z < 3; z++) {
    cout << z << endl;
  }
  cout << z << endl;

  return 0;
}

