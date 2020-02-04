/*
 * CS 161-020, Lecture 12, Winter 2020
 * Example of using \b for backspace
 * to overwrite content in the same line
 * Author: Kiri Wagstaff
 * Date: February 3, 2020
 */
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main() {

  cout << "Hello\n";
  cout << "Goodbye" << endl;
  cout << "Goodbye\b\bar" << endl;

  return 0;
}

