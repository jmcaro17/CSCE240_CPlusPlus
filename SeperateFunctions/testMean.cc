// Copyright Jesse Caro
// test the Mean functions in myfunctions.cc
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<ctime>
#include"myfunctions.h"

int main() {
  /*
  cout << "Mean(1.5, 2.7) = " << Mean(1.5, 2.7) << endl;
  cout << "Mean(1.5, 2.7, 10.1) = " << Mean(1.5, 2.7, 10.1) << endl;
  cout << "Mean('a', 'c') = " << Mean(a, c) << endl;
  // in the call below, the ints are implicitly casted as doubles
  cout << "Mean(1, 7, 8) = " << Mean(1, 7, 8) << endl;
  // in the line below, the compiler doesn't know whether to cast
  // the ints as chars or doubles because of our prototypes
  //cout << "Mean(1, 7) = " << Mean(1, 7) << endl;
  cout << TestAverage() <<  "\n" << TestAverage(100) << "\n"
       << TestAverage(90, 85, 100, 72, 99) << endl;
  */
  int n;
  cin >> n;
  int start = clock();
  cout << Fibonacci(n) << endl;
  cout << clock() - start << endl;
  return 0;
}
