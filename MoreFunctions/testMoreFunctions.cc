// Copyright 2023 Jesse Caro
// test functions in morefunctions.h
#include<iostream>
using std::cout;
using std::endl;
#include"morefunctions.h"

int main() {
  int num1 = 10, num2 = 7;
  swap(num1, num2);
  cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
  return 0;
  // Swap (4, 5); // Can't send constants when the function is
                  // is expecting a non constant reference
  cout << Median(2, 3) << "\n" << Median(2, 100, 3) << endl;
}
