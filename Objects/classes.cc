// Copyright 2023 Jesse Caro
// first example class
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"School.h"

int main() {
  School usc; // a variable of a class type is called an object
              // declaring a variable of a class type is called
              // "instantiating an object" - creating an instance
  cout << usc.GetEnrollment() << endl;
  int enrollment;
  cout << "What's the actual enrollment? ";
  cin >> enrollment;
  usc.SetEnrollment(enrollment);
  cout << "The enrollment is now " << usc.GetEnrollment() << endl;
  return 0;
}
