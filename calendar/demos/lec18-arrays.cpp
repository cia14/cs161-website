/*
 * CS 161-020, Lecture 18, Winter 2020
 * Static and dynamic arrays
 * Author: Kiri Wagstaff
 * Date: February 17, 2020
 */
#include <iostream>

using namespace std;

/* Print an array; 'kind' should be 'stack' or 'heap' */
void print_arr(const string kind, const int* a, const int n) {
  /* Check validity of array pointer */
  if (!a) {
    cout << kind << "array:\tArray pointer is NULL." << endl;
    return;
  }
  int i = 0;
  cout << kind << " array:\t";
  for (i=0; i<n-1; i++) /* loop to n-1 (why?) */
    cout << a[i] << ", ";
  cout << a[i] << endl;  /* print the last item */
}

int main() {

  /* Declare variables */
  int stack_arr[5] = {}; /* initalize to 0 */
  int* heap_arr = NULL;  /* point to NULL; values not allocated */
  print_arr("Stack", stack_arr, 5);
  print_arr("Heap",  heap_arr, 5);

  /* 1. Allocate 5 integers from the heap for heap_arr */
  heap_arr = new int[5];
  /* and set them to 0 */
  for (int i=0; i<5; i++)
    heap_arr[i] = 0;
  print_arr("Heap", heap_arr, 5);

  /* 2. For each array (stack_arr, heap_arr): */
  /* a) Set the item at index 2 to 42 */
  stack_arr[2] = 42;
  print_arr("Stack", stack_arr, 5);
  heap_arr[2]  = 42;
  print_arr("Heap",  heap_arr, 5);

  /* b) Print the item at index 2 */
  cout << "Stack:\t" << stack_arr[2] << endl;
  cout << "Heap:\t"  << heap_arr[2]  << endl;

  /* c) Increment the item at index 2 */
  stack_arr[2]++;
  // stack_arr[2] += 1; /* this version works too */
  print_arr("Stack", stack_arr, 5);
  heap_arr[2]++;
  // heap_arr[2] += 1; /* this version works too */
  print_arr("Heap",  heap_arr, 5);

  /* d) Print the address of the first item */
  cout << "Stack array starts at:\t" << stack_arr << endl;
  /* This version works too (why?) */
  cout << "Stack array starts at:\t" << &(stack_arr[0]) << endl;
  cout << "Heap  array starts at:\t" << heap_arr  << endl;
  cout << "Heap  array starts at:\t" << &(heap_arr[0])  << endl;

  /* 3. Free the memory associated with heap_arr */
  delete [] heap_arr;

  return 0;
}

