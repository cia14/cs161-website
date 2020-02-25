/*
 * CS 161-020, Lecture 21, Winter 2020
 * Recursive factorial
 * Author: Kiri Wagstaff
 * Date: February 24, 2020
 */
#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0) /* base case */
    return 1;
  else
    return n * factorial(n - 1); /* recursive call */
}

int main() {
  int pos_int = 1;
  
  cout << "Enter a positive integer: ";
  cin >> pos_int;
  cout << pos_int << "! = " << factorial(pos_int) << endl;

  return 0;
}

