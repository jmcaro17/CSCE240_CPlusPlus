//Copyright 2023 Jesse Caro
//Functions - seperate compilation
#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
#include "myfunctions.h"

int main() {
  int num, num2;
  cout << "Enter a non-negative integer ";
  cin >> num;
  cout << num << "! = " << Factorial(num) << endl;
  cout << "Enter another integer " << endl;
  cin >> num2;
  cout << "The GCD of " << num << " and " << num2 << " is "
	   << GCD(num, num2) << endl;
  return 0;
}


/*
int main() {
  double x
  cout << "Enter a real number ";
  cin >> x;
  cout << x << endl;
  cout << std::setprecision(3) << x << endl;
  cout << std::setiosflags(std::ios::showpoint | std ::ios::fixed);
  cout << x << endl;
  return 0;
}  
*/


