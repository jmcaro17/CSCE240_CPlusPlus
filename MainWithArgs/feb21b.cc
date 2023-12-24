// Copyright 2023 Jesse Caro
// pointers and dynamic memory allocation
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
  int size;
  double * some_numbers;
  do {
    cout << "How many do you need? ";
    cin >> size;
  } while ( size <= 0 );
  some_numbers = new double[size]; // new will return the adress of the
                                   // dynamically allocated memory
  if ( some_numbers == nullptr ) {
    cout << "Couldn't reserve the requested memory " << endl;
    return 0;
  }
  cout << "Enter your " << size << " numbers: ";
  for ( int i = 0; i < size; ++i )
    cin >> some_numbers[i];
  cout << endl;
  cout << "Here they are: ";
  for ( int i = 0; i < size; ++i )
    cout << some_numbers[i] << " ";

  // whenever we're finished with the dynamically allocated memory
  delete [] some_numbers; // frees up the block of memory that some_numbers
                          // points to so that it can be used for other purposes
  some_mumbers = nullptr; // note: some_numbers is still around, we will either
                          // set it to a new memory location or set it to nullptr
                          // to ensure that we know it's not pointing anywhere

  return 0;
}
