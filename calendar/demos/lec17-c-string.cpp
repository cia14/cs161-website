/*
 * CS 161-020, Lecture 17, Winter 2020
 * C-style strings
 * Author: Kiri Wagstaff
 * Date: February 14, 2020
 */
#include <iostream>
#include <cstring>  /* not <string> */

using namespace std;

int main() {

  char name[5] = {}; /* space for 4 characters plus '\0' */
  cout << name << ", length " << strlen(name) << endl;

  cin.getline(name, 5); /* 5 includes '\0' */
  cout << name << ", length " << strlen(name) << endl;
  return 0;
    
  /* Print name with underscores between letters */
  cout << name[0];
  for (int i=1; i<strlen(name); i++) {
    cout << "_" << name[i];
  }
  cout << endl << endl;

  /* String search */
  char search[] = {'i', 'r', '\0'}; /* "ir" */
  //char search[] = {"ir"}; /* automatically adds \0 for you */
  char* sptr    = strstr(name, search);
  if (sptr)
    cout << "Starting from " << search << ": "
	 << sptr << endl;
  else
    cout << search << " not found in "
	 << name << endl;
  cout << endl;
  
  /* Compare strings */
  char name2[] = {"Kiri"};
  cout << name << " = \"" << name2 << "\"? "
       << strcmp(name, name2) << endl;
  cout << endl;

  /* Compatibility between C++ and C-style strings */
  string s = "Hello";
  cout << s << endl;
  /* Cannot automatically convert s to a char* */
  //cout << strcmp(name, s) << endl;
  /* Call c_str() to get a char* */
  cout << strcmp(name, s.c_str()) << endl;
  /* Can convert char* to a string */
  s = name;
  cout << s << endl;

  return 0;
}

