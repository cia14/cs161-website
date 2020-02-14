/*
 * CS 161-020, Lecture 17, Winter 2020
 * Pointer and array play
 * Author: Kiri Wagstaff
 * Date: February 14, 2020
 */
#include <iostream>

using namespace std;

void print_vars(int* c, int* s) {
  if (c)
    cout << *c << ": ";
  for (int i=0; i<3; i++)
    cout << s[i] << ",";
  cout << endl;
}

int main() {

  int* captain = NULL;
  int soldier[3];
  soldier[0] = 9;
  soldier[1] = 7;
  soldier[2] = 3;
  print_vars(captain, soldier);
  soldier[0] = soldier[1] + soldier[2];
  print_vars(captain, soldier);
  soldier[2]++;
  print_vars(captain, soldier);

  captain = &soldier[1]; /* address-of */
  captain++;
  *captain = 4;
  print_vars(captain, soldier);
  soldier[1] = *captain; /* dereference */
  print_vars(captain, soldier);
  soldier[2]++;
  print_vars(captain, soldier);
  captain = soldier;
  print_vars(captain, soldier);

  return 0;
}

