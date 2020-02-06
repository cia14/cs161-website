/*
 * CS 161-020, Lecture 13, Winter 2020
 * Scope problems fixed
 * Author: Kiri Wagstaff
 * Date: February 5, 2020
 */
#include <iostream>
#include <string>

using namespace std;

/* Better approach: use different variable names */
int compute_sum(int a, int b) { 
  int sum = a + b;
  return sum;  
}

int main() {
  int x = 2, y = 3;
  int sum = compute_sum(x, y);
  cout << sum << endl; 
  return 0;
}

