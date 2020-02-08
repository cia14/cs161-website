/*
 * CS 161-020, Lecture 14, Winter 2020
 * Passing string values by reference
 * Author: Kiri Wagstaff
 * Date: February 7, 2020
 */
#include <iostream>
#include <string>

using namespace std;

/* Split string s into two pieces (s1 and s2)
 * at index i and update both pieces. */
void split_string(string s, int i,
		  string& s1, string& s2) {
  s1 = s.substr(0, i); /* get from index 0 to i-1 */
  s2 = s.substr(i);    /* get from index i to end */
}

int main() {
  string input, first_part, second_part;
  cin >> input;
  split_string(input, 3, first_part, second_part);
  cout << input << " : "
       << first_part << ", "
       << second_part << endl;
  return 0;
}

