// Copyright 2023 Jesse Caro
// Functions
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cstdlib> //rand(), srand
#include<ctime> // time - gives current time from the system clock
#include<cmath> // double pow(double base, double exponent)
                            //sqrt(double)
                            //ceil(double)   -rounds up
                            //floor(double)  -rounds down

// prototype for a function that rounds to the nearest integer
int roundit( double );

// implementation for the roundit function
int roundit( double x ) {
  return floor(x + 0.5);
}

int main() {
  cout << "int = " << sizeof(int) << " \nlong = " << sizeof(long)
          << "\nshort " << sizeof(short) << endl;
  
  cout << pow( 8, 0.5 ) << endl;
  
  double num;
  cout << "enter a decimal number ";
  cin >> num;
  cout << "Rounded with out function " << roundit(num) << endl;
  cout << "square root + " << sqrt(num) << "\nceil = " << ceil(num)
          << "\nfloor = " << floor(num) << endl;
  
  srand(time(0));
  for ( int i = 0; i < 10; ++i)
    cout << rand() % 6 + 1 << endl;
  return 0;
}
