/*
 * CS 161-020, Lecture 13, Winter 2020
 * Passing string values by reference
 * Author: Kiri Wagstaff
 * Date: February 5, 2020
 */
#include <iostream>
#include <string>

using namespace std;

/* Replace character at position i in string s
 * with an underscore _ */
void destroy_character(string& s, int i) {
  /* Check arguments */
  if (i < 0 || i > s.length())
    return; /* Do nothing */
  /* Change character i to an underscore */
  s.at(i) = '_';
}

int main() {
  string input;
  cin >> input;
  destroy_character(input, 3);
  cout << input << endl;
  return 0;
}

