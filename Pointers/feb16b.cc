// Copyright 2023 Jesse Caro
// Introduction To Pointers In C++
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// void Double( int & x ) {
void Double( int * x ) {  
  *x *= 2; // instead of x*=2 with a reference paramater
}

// function to double all of the values in an array
// void DoubleEm(int an_array[], int size) {
            // the first paramter below is the same as the first
            // paramater above - an array is a constant pointer
void DoubleEm(int * const an_array, int size) {
  for ( int i = 0; i < size; ++i )
    an_array[i] *= 2;
}

int main() {
  int anumber = 15;
  Double(&anumber);
  cout << "after the call anumber = " << anumber << endl;
  const int kSize = 10;
  int some_nums[kSize] = { -2, 15, 7, 28, 4 };
  DoubleEm(some_nums, kSize);
  for( int i = 0; i < kSize; ++i )
    cout << some_nums[i] << " ";
  cout << endl;
  return 0;
}


/*
int main() {
  double * dptr; // dptr is a pointer to a double
  double num = 3.76;
  dptr = &num;
  cout << "&num = " << &num << endl;
  cout << "num = " << num << endl;
  cout << "&dptr = " << &dptr << endl;
  cout << "dptr = " << dptr << endl;
  cout << "*dptr = " << *dptr << endl;
  cout << "dptr[0] = " << dptr[0] << endl;
  ++dptr;
  cout << "dptr = " << dptr << endl;
  cout << "*dptr = " << *dptr << endl;
  // *dptr = 19;
  return 0;
}
*/
