// Roger Song, 2/10/2020
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int* i = NULL;
  //i = new int; //uncomment this line to fix the segfault
  *i = 3;

  cout << "Addr of i: " << &i << endl;
  cout << "i points to: " << i << endl;
  cout << "*i: " << *i << endl;
	
  //delete i; //uncomment this and next line to fix memory leaks 
  //i = NULL;


  return 0;
}
