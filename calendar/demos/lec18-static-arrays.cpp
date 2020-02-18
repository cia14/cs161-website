/*
 * CS 161-020, Lecture 18, Winter 2020
 * Static arrays
 * Author: Kiri Wagstaff
 * Date: February 17, 2020
 */
#include <iostream>
#include <cstdlib> /* include to allow rand() to be used */
#include <ctime>   /* include to allow time() to be used */

using namespace std;

int main() {

  srand(time(NULL));

  /* Static array, size controlled by user */
  int n_people;
  cout << "How many people? "; 
  cin >> n_people;
  int height[n_people];
  for (int i=0; i<n_people; i++)
    height[i] = rand()%13 + 60;

  for (int i=0; i<n_people; i++)
    cout << "Person " << i << ": "
	 << height[i] << " inches." << endl;
  cout << endl;
  return 0;
}

