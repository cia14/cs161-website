/*
 * CS 161-020, Lecture 27, Winter 2020
 * Static vs. dynamic allocation
 * Author: Kiri Wagstaff
 * Date: March 9, 2020
 */
#include <iostream>

using namespace std;

/* Structure defining a train car */
struct train_car {
  string kind; /* Engine, regular car (_***_), or Caboose */
  train_car* next_car; /* pointer to the next train car */
};

int main() {

  /* Static allocation */
  train_car my_train_static[1000000]; // seg fault

  /* Dynamic allocation */
  /*
  train_car* my_train_dyn = new train_car[1000000];
  delete [] my_train_dyn;
  my_train_dyn = NULL;
  */

  return 0;
}

