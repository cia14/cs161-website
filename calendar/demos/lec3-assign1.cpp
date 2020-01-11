/*****************************************************
 ** Program: lec3-assign1.cpp
 ** Author: Kiri Wagstaff
 ** Date: Jan. 10, 2020
 ** Description: Demonstrate part of assignment 1
 ** Input:  One value
 ** Output: One sentence with the fortune filled in
 *****************************************************/
#include <iostream>

using namespace std;

int main()
{
  /*
   * Declare variables.  For each one, include
   * (1) why you chose the data type for the variable
   * (2) the minimum and maximum value that it can hold.
   */
  /* 
   * An unsigned short enforces no negative values,
   * and the number of countries on Earth is less 
   * than 65,535 (min is 0).
   */
  unsigned short n_countries;

  /*
   * Prompt the user to enter a value for each number,
   * and store it in the appropriate variable.
   */
  cout << "Please enter a positive number: ";
  cin >> n_countries;  

  /* 
   * Print out the user's fortune with blanks
   * filled in by the numbers they entered.
   */
  cout << "You will visit " << n_countries << " countries in your life." << endl;

  return 0;
}
