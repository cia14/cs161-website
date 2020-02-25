/*
 * CS 161-020, Lecture 21, Winter 2020
 * Iterative factorial
 * Author: Kiri Wagstaff
 * Date: February 24, 2020
 */
#include <iostream>

using namespace std;

int factorial(int n) {
  int fact;
  if (n == 0)
    fact = 1;
  else
    for (fact = n; n > 1; n--)
      fact = fact * (n-1);
  return fact;
}

int main() {
  int pos_int = 1;
  
  cout << "Enter a positive integer: ";
  cin >> pos_int;
  cout << pos_int << "! = " << factorial(pos_int) << endl;

  return 0;
}

