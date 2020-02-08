/*
 * CS 161-020, Lecture 14, Winter 2020
 * A dramatic pointer play
 * Author: Kiri Wagstaff
 * Date: February 7, 2020
 */
#include <iostream>
#include <string>

using namespace std;

void print_vars(int* w, int c, int d, int m) {
  cout << "Witch: " << w
       << ", cat: " << c
       << ", dog: " << d
       << ", mouse: " << m << endl;
}

int main() {
  int* witch;
  witch = NULL;
  int cat = 7;
  int dog = 3;
  int mouse = 1;
  print_vars(witch, cat, dog, mouse);

  cat = dog + mouse;
  print_vars(witch, cat, dog, mouse);

  mouse *= 2;
  print_vars(witch, cat, dog, mouse);

  witch = &cat; /* address-of */
  print_vars(witch, cat, dog, mouse);

  *witch = 5;
  print_vars(witch, cat, dog, mouse);

  dog = *witch;  /* dereference */
  print_vars(witch, cat, dog, mouse);

  witch = &mouse;
  print_vars(witch, cat, dog, mouse);

  *witch = cat;
  print_vars(witch, cat, dog, mouse);

  return 0;
}

