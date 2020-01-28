/*
 * CS 161-020, Lecture 9, Winter 2020
 * Function examples
 * Author: Kiri Wagstaff
 * Date: January 27, 2020
 */
#include <iostream>
#include <math.h>

using namespace std;

/* calculate the area of a circle, given radius */
float circle_area(float radius)
{
  return 3.14159 * radius * radius;
}

/* calc_BMI given height in meters and weight in kg,
 * with default value for weight */
float calc_BMI(float height, float weight = 54)
{
  return weight / pow(height, 2);
}

/* function with no parameters and no return value */
void welcome_user()
{
  cout << "Welcome, dear user!" << endl;
  return;
}

int main()
{
  welcome_user();
  
  float radius = 3.0;
  cout << "Area of a circle with radius "
       << radius << " is "
       << circle_area(radius) << endl;
  cout << endl;

  float bmi = calc_BMI(1.8, 54);
  cout << "BMI is " << bmi << endl;

  bmi = calc_BMI(1.8);
  cout << "BMI given only height is " << bmi << endl;
  
  return 0;
}
