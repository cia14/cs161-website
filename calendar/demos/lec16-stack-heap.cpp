/*
 * CS 161-020, Lecture 16, Winter 2020
 * Variables on the stack and the heap
 * Author: Kiri Wagstaff
 * Date: February 12, 2020
 */
#include <iostream>
#include <string>

using namespace std;

int main() {

  /* Declare variables - which are on the stack? heap? */
  int mercury = 5;
  char* venus = NULL;
  long* earth = new long;
  int& mars = mercury;
  short jupiter = mars + 27;
  venus = new char;
  int* saturn = &mercury;
  long* uranus = earth;

  /* Clean up the heap */
  delete venus; venus = NULL;
  delete earth; earth = NULL;
  // delete saturn; /* error: pointer being freed was not allocated */
  // delete uranus; /* same error, because memory was already freed */
  
  return 0;
}

