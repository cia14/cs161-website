/*
 * CS 161-020, Lecture 6, Winter 2020
 * Example of use of strings
 * Author: Kiri Wagstaff
 * Date: January 17, 2020
 */
#include <iostream>
#include <string>   /* include to allow strings to be used */

using namespace std;

int main()
{
  string favorite_color = "red";

  /* Query the user */
  cout << "What is your favorite color? " << endl;
  cin >> favorite_color;
  cout << "You like " << favorite_color << endl;

  /* String concatenation, version 1 */
  string two_colors = favorite_color + " and pink";
  cout << "How about " << two_colors << "?" << endl;

  /* String concatenation, version 2 */
  favorite_color += " and green";
  cout << "How about " << favorite_color << "?" << endl;
  /* What will this print? */
  cout << "You like " << favorite_color << endl;

  return 0;
}

