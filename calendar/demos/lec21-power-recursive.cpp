/*
 * CS 161-020, Lecture 21, Winter 2020
 * Recursive exponentiation
 * Author: Kiri Wagstaff
 * Date: February 24, 2020
 */
#include <iostream>

using namespace std;

int pwr(int base, int exp) {
  if (exp == 0) /* base case */
    return 1;
  else
    return base * pwr(base, exp - 1); /* recursive call */
}

int main() {
  int base = 0;
  int exp = 1;
  
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter exponent: ";
  cin >> exp;
  cout << base << "^" << exp << " = "
       << pwr(base, exp) << endl;

  return 0;
}

