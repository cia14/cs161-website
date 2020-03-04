/*
 * CS 161-020, Lecture 25, Winter 2020
 * Recursion with structs: trains
 * Author: Kiri Wagstaff
 * Date: March 4, 2020
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/* Structure defining a train car */
struct train_car {
  string kind; /* Engine, regular car (_***_), or Caboose */
  train_car* next_car; /* pointer to the next train car */
};

/* Recursively add n_cars new train cars to train t */
/* Assume n_cars > 0 */
void add_cars(train_car* t, int n_cars) {
  /* Add another train car */
  t->next_car = new train_car;
  t->next_car->next_car = NULL; /* be safe! */

  if (n_cars == 1) { /* base case: caboose */
    t->next_car->kind = "Caboose";
  } else {
    t->next_car->kind = "_***_";
    add_cars(t->next_car, n_cars-1); /* recursive call */
  }
}

/* Recursively print the train, one car at a time */
void print_train(train_car* t) {
  /* Print this car */
  cout << t->kind; 
  if (t->kind == "Caboose")   /* base case */
    cout << "\n";
  else
    print_train(t->next_car); /* recursive step */
}

/* Recursively delete the memory for this train */
void delete_train(train_car* t) {
  /* Nothing implemented yet - give it a try! */
  /* Use valgrind to see memory leaks,
   * then confirm you have fixed them all 
   * after implementing this function */
}

int main() {
  srand(time(NULL));

  /* Create my train */
  train_car* my_train = new train_car;
  my_train->kind = "Engine";
  my_train->next_car = NULL; /* be safe! */

  int n_cars = rand()%10 + 1; /* number of cars to add: 1 to 10 */
  add_cars(my_train, n_cars);

  print_train(my_train);

  delete_train(my_train);

  return 0;
}

