// Copyright 2023 Jesse Caro
// Test drive the Set template class
#include"set.h"
#include"set.cc"
using namespace csce240_set;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  Set<int> set_of_ints;
  set_of_ints.Print();
  int int_array[10] = { 1, 13, 22, 36, 57, 66, 67, 89, 90 };
  set_of_ints.SetValues(10, int_array);
  set_of_ints.Print();

  Set<double> set_of_doubles;
  set_of_doubles.Print();
  double double_array[9] = { -4.6, 3.25, 10.1, 123, 7, 6, 9, 10, 8 };
  set_of_doubles.SetValues(4, double_array);
  set_of_doubles.Print();
  
  Set<double> set_of_doubles_copy(set_of_doubles);
  set_of_doubles_copy.Print();
  set_of_doubles_copy.SetValues(9, double_array);
  set_of_doubles.Print();
  set_of_doubles_copy.Print();
  if ( set_of_doubles.IsASubset(set_of_doubles_copy) )
    cout << "set of doubles copy is a subset of set of doubles" << endl;

  if ( set_of_doubles_copy.IsASubset(set_of_doubles) )
    cout << "set of doubles is a subset of set of doubles copy" << endl;

  Set<double> empty;
  if ( set_of_doubles.IsASubset(empty) )
    cout << "the empty set is a subset of set of doubles" << endl;

  if ( empty.IsASubset(set_of_doubles) )
    cout << "the set of doubles is a subset of the empty set" << endl;


  return 0;
}
