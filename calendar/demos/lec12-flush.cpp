/*
 * CS 161-020, Lecture 12, Winter 2020
 * Example of flushing the output stream
 * Author: Kiri Wagstaff
 * Date: February 3, 2020
 */
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main() {

  for (int i=0; i<5; i++)
    {
      cout << 'O' << flush;
      sleep(1);
    }
  return 0;
}

