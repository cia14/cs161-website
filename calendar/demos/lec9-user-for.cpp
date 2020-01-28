/*
 * CS 161-020, Lecture 9, Winter 2020
 * User-controlled for loop
 * Author: Kiri Wagstaff
 * Date: January 27, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  /* declare two variables */  
  int end_loop, step;

  /* let user control loop */
  cout << "Loop until: ";
  cin >> end_loop;
  cout << "Step by: ";
  cin >> step;
  
  for (int x = 0; x < end_loop; x += step)
    {
      cout << x << endl;
    }
  return 0;
}
