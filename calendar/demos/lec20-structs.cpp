/*
 * CS 161-020, Lecture 20, Winter 2020
 * Structs - with planet example
 * Author: Kiri Wagstaff
 * Date: February 21, 2020
 */
#include <iostream>

using namespace std;

/* Declare my own data type to store data about planets */
struct planet {
  string name;
  float radius; /* km */
  unsigned short n_moons;  
  string color; 
};

void print_planet(planet p) {
  cout << "Planet " << p.name
       << " has a radius of " << p.radius << " km." << endl;
  cout << p.name << " has " << p.n_moons << " moons, "
       << "and its color is " << p.color << "." << endl;
}

/* Return the name of the largest planet */
string largest_planet(planet p1, planet p2) {
  if (p1.radius >= p2.radius)
    return p1.name;
  else /* p2.radius > p1.radius */
    return p2.name;
}

/* We discovered a new moon for this planet! */
/* Specify pass by reference so we can modify p.n_moons */
void add_moon_r(planet& p) {
  p.n_moons++;
}

/* We discovered a new moon for this planet! */
/* Pass a pointer so we can modify p.n_moons */
void add_moon_p(planet* p) {
  //(*p).n_moons++;
  /* the arrow operator does the same thing */
  p->n_moons++; 
}

int main() {

  /* Create some planets */
  planet mars;
  mars.name = "Mars";
  mars.radius = 3389.5; 
  mars.n_moons = 2;
  mars.color = "red";

  planet jupiter;
  jupiter.name = "Jupiter";
  jupiter.radius = 69911; /* km */
  jupiter.n_moons = 79;
  jupiter.color = "bands of white, orange, brown, and red";
  
  /* Print planet info */
  print_planet(mars);
  cout << endl;
  print_planet(jupiter);
  cout << endl;

  cout << "Largest planet: ";
  cout << largest_planet(mars, jupiter) << endl;

  /* Call add_moon() functions */
  cout << "We discovered a new moon of Jupiter!" << endl;
  add_moon_r(jupiter);
  print_planet(jupiter);
  cout << endl;

  cout << "We discovered another new moon of Jupiter!" << endl;
  add_moon_p(&jupiter);
  print_planet(jupiter);
  cout << endl;

  /* With initializer instead: */
  planet earth = { "Earth", 6371, 1, "pale blue" };
  print_planet(earth);
  cout << endl;

  return 0;
}

