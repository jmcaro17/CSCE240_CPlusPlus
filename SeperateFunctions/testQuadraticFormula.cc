// Copyright 2023 Jesse Caro
// test the Quadratic Formula function in myfunctions.h
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"myfunctions.h"

int main() {
  double a, b, c, r1 = -1, r2 = -1;
  cout << "Enter the coefficient of x^2, the coefficient of x"
       << ", and the constant coefficient" << endl;
  cin >> a >> b >> c;
  if ( QuadraticFormula(a, b, c, r1, r2 )
    cout << "Your quadratic has real roots" << endl;
  else
