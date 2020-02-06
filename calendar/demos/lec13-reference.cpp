/*
 * CS 161-020, Lecture 13, Winter 2020
 * Passing function argument values by reference
 * Author: Kiri Wagstaff
 * Date: February 5, 2020
 */
#include <iostream>
#include <string>

using namespace std;

void compute_sum(int x, int y, int& s) { 
  cout << &s << endl;
  cout << s << endl;
  s = x + y;
}

int main() {
  int x = 2, y = 3, sum = 0;
  compute_sum(x, y, sum);
  cout << sum << endl; 
  return 0;
}

