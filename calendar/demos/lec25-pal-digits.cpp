/*
 * CS 161-020, Lecture 25, Winter 2020
 * Palindromic digits
 * Author: Kiri Wagstaff
 * Date: March 4, 2020
 */
#include <iostream>

using namespace std;

string pal(char n) {
  if (n == '1')
    return "1";
  else 
    return n + pal(n-1) + n;
}

int main() {
  
  for (char c='1'; c<'5'; c++) 
    cout << c << ":" << pal(c) << endl;
  
  return 0;
}

