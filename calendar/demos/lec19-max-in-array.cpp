/*
 * CS 161-020, Lecture 19, Winter 2020
 * Find the maximum value in an array
 * Author: Kiri Wagstaff
 * Date: February 19, 2020
 */
#include <iostream>
#include <cstdlib> /* include to allow rand() to be used */
#include <ctime>   /* include to allow time() to be used */

using namespace std;

int main() {

  srand(time(NULL));

  /* Static array */
  const int n_people = 5;
  int height[n_people];
  /* Initialize heights with random values */
  for (int i=0; i<n_people; i++)
    height[i] = rand()%13 + 60;

  /* Print all heights */
  for (int i=0; i<n_people; i++)
    cout << "Person " << i << ": "
	 << height[i] << " inches." << endl;
  cout << endl;

  /* Find the tallest person */
  int tallest = 0; /* start with first person */
  for (int i=1; i<n_people; i++) 
    if (height[i] > height[tallest])
      tallest = i;
  cout << "Tallest person: index " << tallest 
       << " (" << height[tallest] << " inches)" << endl;

  return 0;
}

