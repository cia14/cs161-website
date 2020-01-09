/*
 * CS 161-020, Lecture 2, Winter 2020
 * Examples of variable use
 * Author: Kiri Wagstaff
 * Date: January 8, 2020
 */

#include <iostream>

using namespace std;

int main()
{
  int n_students;  /* 1. Declare variable */

  n_students = 256;  /* 2. Assign variable a value */

  //int n_students = 256;  /* 3. Initialize variable */

  cout << "Hello, " << n_students << " humans!" << endl;

  return 0;
}
