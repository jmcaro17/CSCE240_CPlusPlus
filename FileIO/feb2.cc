// Copyright 2023 Jesse Caro
// examples of file i/o
#include<fstream> // for ifstream and ofstream
using std::ofstream;
using std::ifstream;

int main() {
  int num;
  ifstream my_input_file("someinput.txt");
  my_input_file >> num;
  ofstream my_output_file("someoutput.txt"); // Overwrite
  ofstream my_output_file("someoutput.txt", std::ios::app); // Append
  while ( my_input_file.good() ) {
    my_output_file << num << ", ";
    my_input_file >> num;
  }
  my_output_file << "Hello World!";
  my_input_file.close();
  return 0;
}
