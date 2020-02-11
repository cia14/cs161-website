/*
 * CS 161-020, Lecture 15, Winter 2020
 * Working with pointers
 * Author: Kiri Wagstaff
 * Date: February 10, 2020
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
  int r = 17;
  int s = -10;
  int* q = NULL; /* q is a pointer to an integer */
  //cout << *q << endl; /* runtime error: why? */

  q = &r;        /* q contains the address of r  */
  cout << "--- assign r (17) and q (&r) --------" << endl;
  cout << "r: " << r << "; address of r:  " << &r << endl;
  cout << "q: " << q << "; q points to:  " << *q << endl;

  r = -5;
  cout << "--- update r to -5 -------" << endl;
  cout << "r: " << r << "; address of r:  " << &r << endl;  
  cout << "q: " << q << "; q points to:  " << *q << endl;

  *q = 42;   /* update value in memory location q */
  cout << "--- update *q to 42 --------" << endl;
  cout << "r: " << r << "; address of r:  " << &r << endl;  
  cout << "q: " << q << "; q points to:  " << *q << endl;

  cout << "-----------" << endl;
  cout << "address of q:" << &q << endl;
  //cout << *r << endl; /* compiler error: why? */

  q = &s;
  s++;
  cout << "--- q points to s; update s --------" << endl;
  cout << "r: " << r << "; address of r:  " << &r << endl;  
  cout << "s: " << s << "; address of s:  " << &s << endl;  
  cout << "q: " << q << "; q points to:  " << *q << endl;
  
  cout << "-----------" << endl;
  return 0;
}

