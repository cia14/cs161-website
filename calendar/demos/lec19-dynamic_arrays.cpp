/*
 * CS 161-020, Lecture 19, Winter 2020
 * Dynamic arrays
 * Author: Kiri Wagstaff
 * Date: February 19, 2020
 */
#include <iostream>
#include <cstdlib> /* include to allow rand() to be used */
#include <ctime>   /* include to allow time() to be used */

using namespace std;

/* Custom print function to report yield per field */
void print_yield(const int* y, const int n) {
  for (int i=0; i<n; i++)
    cout << "Field " << i << ": "
	 << y[i] << " bushels." << endl;
  cout << endl;
}

int main() {

  srand(time(NULL));

  int n_fields;
  /* Dynamic array; can change size */
  int* corn_yield;

  n_fields = 3; /* in year 1, plant 3 fields */
  corn_yield = new int[n_fields];
  for (int i=0; i<n_fields; i++)
    corn_yield[i] = rand()%10 + 30;
  print_yield(corn_yield, n_fields);

  /* Done using memory */
  delete [] corn_yield;
  corn_yield = NULL;
 
  n_fields = 5; /* in year 2, plant 5 fields */
  corn_yield = new int[n_fields];
  for (int i=0; i<n_fields; i++)
    corn_yield[i] = rand()%10 + 30;
  print_yield(corn_yield, n_fields);

  /* Done using memory */
  delete [] corn_yield;
  corn_yield = NULL;
 
  return 0;
}

