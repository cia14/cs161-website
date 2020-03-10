/*
 * CS 161-020, Lecture 27, Winter 2020
 * Command-line arguments with trains
 * Author: Kiri Wagstaff
 * Date: March 9, 2020
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
  if (t->kind == "Caboose")   /* base case */
    delete t;
  else {
    /* Delete the rest of the train first */
    delete_train(t->next_car);  /* recursive step */
    /* Now delete this car */
    delete t;
    /* Why will it not work to delete t, 
     * then make the recursive call? */
  }
}

int main(int argc, char* argv[]) {

  /* Create my train */
  train_car* my_train = new train_car;
  my_train->kind = "Engine";
  my_train->next_car = NULL; /* be safe! */

  /* Expect and require argc == 2 (one user argument) */
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " n_cars" << endl;
    return 1; /* signal an error */
  }

  /* Convert user argument (C-style string) to int */
  int n_cars = atoi(argv[1]);

  add_cars(my_train, n_cars);

  print_train(my_train);

  delete_train(my_train);
  my_train = NULL;

  return 0;
}

