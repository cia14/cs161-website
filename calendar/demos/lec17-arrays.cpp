/*
 * CS 161-020, Lecture 17, Winter 2020
 * Static arrays
 * Author: Kiri Wagstaff
 * Date: February 14, 2020
 */
#include <iostream>

using namespace std;

int main() {

  /* Declare array but don't initialize */
  int gr[5];
  cout << "(Uninitialized) Grades: ";
  for (int i=0; i<5; i++)
    cout << gr[i] << ", ";
  cout << endl << endl;;

  /* Declare and initialize int array */
  int grades[5] = {90, 80, 85, 95, 100};
  cout << "(Initialized) Grades: ";
  for (int i=0; i<5; i++)
    cout << grades[i] << ", ";
  cout << endl << endl;

  /* Cannot use initializer to assign later */
  //grades = {82, 98, 87, 99, 93};

  /* array name is a pointer to the first item */
  cout << "grades: "     << grades << endl;
  cout << "grades[0]: "  << grades[0] << endl;
  cout << "&grades[0]: " << &grades[0] << endl;
  cout << "*grades: "    << *grades << endl;
  cout << endl;

  /* Declare+initialize, then assign int array in for loop */
  int lengths[5] = {0, 0, 0, 0, 0};
  cout << "Lengths: ";
  for (int i=0; i<5; i++)
    lengths[i] = i+1;
  for (int i=0; i<5; i++)
    cout << lengths[i] << ", ";
  cout << endl;
  
  return 0;
}

