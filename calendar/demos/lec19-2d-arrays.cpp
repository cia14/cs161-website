/*
 * CS 161-020, Lecture 19, Winter 2020
 * 2D arrays
 * Author: Kiri Wagstaff
 * Date: February 19, 2020
 */
#include <iostream>

using namespace std;

int main() {

  /* Declare variables */
  int stack_arr[2][3];

  int** heap_arr = new int*[2];
  for (int i=0; i<2; i++)
    heap_arr[i] = new int[3];

  /* Initialize 2D stack array */
  for (int i=0; i<2; i++) 
    for (int j=0; j<3; j++) 
      stack_arr[i][j] = i + j;

  cout << "Stack: " << endl;
  for (int i=0; i<2; i++) {
    for (int j=0; j<3; j++) 
      cout << stack_arr[i][j] << ", ";
    cout << endl;
  }

  /* Initialize 2D heap array */
  for (int i=0; i<2; i++) 
    for (int j=0; j<3; j++) 
      heap_arr[i][j] = i * j;

  cout << "Heap: " << endl;
  for (int i=0; i<2; i++) {
    for (int j=0; j<3; j++) 
      cout << heap_arr[i][j] << ", ";
    cout << endl;
  }

  /* Free heap memory */
  for (int i=0; i<2; i++) {
    delete [] heap_arr[i];
    heap_arr[i] = NULL;
  }
  delete [] heap_arr;
  heap_arr = NULL;

  return 0;

}

