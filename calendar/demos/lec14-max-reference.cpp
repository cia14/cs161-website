/*
 * CS 161-020, Lecture 14, Winter 2020
 * Passing int values by reference
 * Author: Kiri Wagstaff
 * Date: February 7, 2020
 */
#include <iostream>
#include <string>

using namespace std;

void get_max(int a, int b, int& m) {
  m = (a < b) ? a : b;  /* ternary/conditional operator */
}

int main() {
  int f = 17, g = 19, mx = -1;
  get_max(f, g, mx);    
  cout << mx << endl; 
  return 0;
}
