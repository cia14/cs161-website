/*
 * CS 161-020, Lecture 14, Winter 2020
 * Passing pointers to functions
 * Author: Kiri Wagstaff
 * Date: February 7, 2020
 */
#include <iostream>
#include <string>

using namespace std;

void compute_sum(int a, int b, int* s) { 
  cout << " s: " <<  s << "; ";
  cout << "*s: " << *s << endl;
  *s = a + b;
  cout << " s: " <<  s << "; ";
  cout << "*s: " << *s << endl;
}

int main() {
  int x = 2, y = 3, sum = 0;
  cout << "sum: " << sum << endl; 
  compute_sum(x, y, &sum);
  cout << "sum: " << sum << endl; 
  return 0;
}

