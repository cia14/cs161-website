/*
 * CS 161-020, Lecture 7, Winter 2020
 * Loop examples
 * Author: Kiri Wagstaff
 * Date: January 22, 2020
 */
#include <iostream>

using namespace std;

int main()
{
  cout << "Postfix example:" << endl;
  for (int x = 1; x <= 5; x++) 
    {
      cout << x << endl;
    }
  cout << endl;

  cout << "Prefix example:" << endl;
  for (int x = 1; x <= 5; ++x) 
    {
      cout << x << endl;
    }
  cout << endl;

  cout << "(Uncomment code to run more examples)"
       << endl;

  /*
  cout << "Modify the loop counter (postfix):" 
       << endl;
  for (int x = 1; x <= 5; x++) 
    {
      cout << x++ << endl;
    }
  cout << endl;

  cout << "Modify the loop counter (prefix):" << endl;
  for (int x = 1; x <= 5; x++) 
    {
      cout << ++x << endl;
    }
  cout << endl;

  cout << "Character loop counters:" << endl;
  for (char c = 'a'; c < 'e'; c++) 
    {
      cout << c << endl;
    }
  cout << endl;

  cout << "Increment character by 2:" << endl;
  for (char c = 'a'; c <= 'f'; c+=2) 
    {
      cout << c << endl;
    }
  cout << endl;

  cout << "Skip an iteration:" << endl;
  for (char c = 'a'; c < 'e'; c++) 
    {
      if (c == 'c')
	{
	  continue;
	}
      cout << c << endl;
    }
  cout << endl;

  cout << "Stop the loop:" << endl;
  for (char c = 'a'; c < 'e'; c++) 
    {
      if (c == 'c')
	{
	  break;
	}
      cout << c << endl;
    }
  cout << endl;

  cout << "Nested loops:" << endl;
  for (int x = 0; x < 10; x++) 
    {
      for (int y = 0; y < 5; y++) 
	{   
	  cout << "CS 161!" << endl;
	}
    }
  cout << endl;

  cout << "Nested loops:" << endl;
  for (int x = 0; x < 2; x++) 
    {
      for (int y = 0; y < 3; y++) 
	{   
	  cout << "CS 161! ";
	}
      cout << endl;
    }
  cout << endl;

  cout << "Variable reuse:" << endl;
  int x;
  for (x = 0; x < 5; x++) 
    {
      cout << "x is: " << x << endl;
    }
  for (x = 0; x < 5; x++) 
    {
      cout << "x is: " << x << endl;
    }
  cout << endl;

  cout << "Nested variable reuse:" << endl;
  for (x = 0; x < 5; x++) 
    {
      for (x = 0; x < 5; x++)
	{
	  cout << "x is: " << x << endl;
	}
    }
  cout << endl;

  cout << "Nested variable reuse:" << endl;
  for (x = 0; x < 5; x++) 
    {
      for (x = 0; x < 2; x++)
	{
	  cout << "x is: " << x << endl;
	}
    }
  cout << endl;

  cout << "Scope example 1:" << endl;
  for (int x = 0; x < 5; x++) 
    {
      for (int x = 0; x < 2; x++) 
	{
	  // outside x is "shadowed" by inside x 
	  cout << x << endl;
	}
    }
  cout << endl;

  cout << "Scope example 2:" << endl;
  for (int x = 0; x < 5; x++) 
    {
      for (int x = 0; x < 2; x++) 
	{
	  int x; // Not allowed! x already defined in this scope
	  // both outer x's are "shadowed" by this x
	  cout << x << endl;
	}
    }
  cout << endl;

  cout << "Scope example 3:" << endl;
  for (int x = 0; x < 5; x++) 
    {
      for (int x = 0; x < 2; x++) 
	{
	  {
	    int x; // Allowed because {} define new scope
	    // both outer x's are "shadowed" by this x
	    cout << x << endl;
	  }
	}
    }
  cout << endl;
  */

  return 0;
  
}
