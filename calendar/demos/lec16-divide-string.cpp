/*
 * CS 161-020, Lecture 16, Winter 2020
 * Working with pointers
 * Author: Kiri Wagstaff
 * Date: February 12, 2020
 */
#include <iostream>
#include <string>

using namespace std;

/* 'divide' string (top) by concatenating a line 
 * and a denominator (bottom) to it */
void div_string(string top, string bottom, string* r) {
  *r = top + "\n-----\n" + bottom;
}

int main() {
  string s = "hello", d = "bye", res;
  div_string(s, d, &res);  
  cout << res << endl; 
  return 0;
}

