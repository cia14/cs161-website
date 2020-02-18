/*
 * CS 161-020, Lecture 17, Winter 2020
 * Pass arrays to functions
 * Author: Kiri Wagstaff
 * Date: February 14, 2020
 */
#include <iostream>

using namespace std;

/* Function to compute the max value in array g */
/* Either declaration will work */
//int get_max(const int g[], const int n) {
int get_max(const int* g, const int n) {
  /* Assume n >= 1 */
  int m = g[0]; /* start with the first item */
  for (int i=1; i<n; i++) {
    if (g[i] > m)  /* if item i is larger than m, update m */
      m = g[i];
  }
  return m;  /* return the max */
}

int main() {
  int grades[] = {90, 80, 85, 95, 100};
  /* The grades array is passed by reference (address), 
   * not value (copy). */
  /* We need to include the size of the array (5) 
   * so the for loop in get_max() knows where to stop */
  cout << get_max(grades, 5) << endl; 

  return 0;
}

