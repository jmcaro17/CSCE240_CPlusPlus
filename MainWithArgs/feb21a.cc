// Copyright 2023 Jesse Caro
// example main function with arguments
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<fstream>
using std::ifstream;
using std::ofstream;

// int main(int, char**)
int main( int num_cstrings, char * the_cstrings [] ) {
  ifstream input_file(the_cstrings[1]);
  char next;
  input_file >> next;
  while ( input_file.good() ) {
    cout << next;
    input_file >> next;
  }
  cout << endl;
  input_file.close();
//  cout << num_cstrings << endl;
//  for (int i = 0; i < num_cstrings; ++i )
//    cout << the_cstrings[i] << endl;
  return 0;
}
