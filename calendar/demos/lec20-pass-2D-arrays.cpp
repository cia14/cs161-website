/*
 * CS 161-020, Lecture 20, Winter 2020
 * Pass 2D arrays to functions
 * Author: Kiri Wagstaff
 * Date: February 21, 2020
 */
#include <iostream>

using namespace std;

/* Two ways to pass static arrays */
void pass_2Darray_1(int a[3][3]) {
  cout << a[0][0] << endl;
}

void pass_2Darray_2(int a[][3]) {
  cout << a[0][0] << endl;
}

/* This version will not work - incomplete element type */
/*
void pass_2Darray_2(int a[3][]) {
  cout << a[0][0] << endl;
}
*/

/* Two ways to pass dynamic arrays */
void pass_2Darray_3(int* a[]) { 
  cout << a[0][0] << endl;
}

void pass_2Darray_4(int** a) {  
  cout << a[0][0] << endl;
}

int main() {
  /****** Static array ******/
  int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  /* These both work: */
  pass_2Darray_1(array);
  pass_2Darray_2(array);

  /****** Dynamic array *******/
  int** dyn_array = new int*[3];
  for (int i=0; i<3; i++)
    dyn_array[i] = new int[3];
  /* Initialize the first value */
  dyn_array[0][0] = 17;
  
  /* These both work: */
  pass_2Darray_3(dyn_array);
  pass_2Darray_4(dyn_array);

  /* Free heap memory */
  for (int i=0; i<3; i++)
    delete [] dyn_array[i];
  delete [] dyn_array;
  
  return 0;
}

