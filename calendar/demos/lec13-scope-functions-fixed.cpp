/*
 * CS 161-020, Lecture 13, Winter 2020
 * Scope problems fixed
 * Author: Kiri Wagstaff
 * Date: February 5, 2020
 */
#include <iostream>
#include <string>

using namespace std;

int compute_sum(int x, int y) {
  int sum = x + y;
  return sum;  
}

int main() {
  int x = 2, y = 3;
  int sum = compute_sum(x, y);
  cout << sum << endl; 
  return 0;
}

