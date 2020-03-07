/*
 * CS 161-020, Lecture 26, Winter 2020
 * Recursion with structs: two pointers (tree)
 * Author: Kiri Wagstaff
 * Date: March 6, 2020
 */
#include <iostream>

using namespace std;

/* Structure defining a box */
struct box {
  int value;
  box* left;
  box* right;
};

void print_tree(box* b) {
  if (b == NULL) /* base case */
    return;
  else {
    /* in-order printing */
    print_tree(b->left);
    cout << " /(" << b->value << ")\\ "; 
    print_tree(b->right);
  }
}

void delete_tree(box* b) {
  if (b == NULL) /* base case */
    return;
  else {
    /* delete sub-trees first */
    delete_tree(b->left);
    delete_tree(b->right);
    /* now delete this box */
    delete b;
  }
}

int main() {
  /* Create a tree with one box */
  box* my_tree = new box;
  my_tree->value = 5;
  my_tree->left = NULL;
  my_tree->right = NULL;

  /* Children of the first box */
  my_tree->left = new box;
  my_tree->left->value = 15;
  my_tree->left->left = NULL;
  my_tree->left->right = NULL;

  my_tree->right = new box;
  my_tree->right->value = 9;
  my_tree->right->left = NULL;
  my_tree->right->right = NULL;

  print_tree(my_tree);
  cout << endl;

  /* clean up recursively */
  delete_tree(my_tree);
  my_tree = NULL;
  
  return 0;
}

