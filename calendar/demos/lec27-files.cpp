/*
 * CS 161-020, Lecture 27, Winter 2020
 * Working with files
 * Author: Kiri Wagstaff
 * Date: March 9, 2020
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {

  /* Create file stream objects */
  ifstream in_stream;
  ofstream out_stream;

  /* Write out to a text file */
  out_stream.open("my_output.txt");
  out_stream << "I am writing to a text file." << endl;
  out_stream.close();
  cout << "Wrote some words to my_output.txt." << endl;

  /* Read the file back in and count its words (whitespace-separated) */
  string w;
  int n_words = 0;
  in_stream.open("my_output.txt");
  while (in_stream >> w) {
    n_words++;
  }
  in_stream.close();
  cout << "Read " << n_words << " words from file." << endl;

  return 0;
}

