// Copyright 2023 Jesse Caro
#include<iostream>
using std::cout;
using std::endl;
using std::cin;  //object in iostream to accept input from
                 //the standard input device

int main() {
  double height;
  cout << "How tall are you?\n   feet\r";
  cin >> height;
  cout << "I got " << height << " feet" << endl;
  return 0;
}


/*
int main() {
  //integer division. cuts off decimal bc both variables are ints
  int x = 5, y = 6;
  double z = x / y;
  cout << x << " / " << y << " = " << z << endl;
  return 0;
  
  //real division. saves decimal bc one variable is temporarily
  //casted as an int
  int x = 5, y = 6;
  double z = x / static_cast<double>(y);
  cout << x << " / " << y << " = " << z << endl;
  return 0;
}
*/

/*
int main() {
  cout << "Hello World!\n";
  cout << "What's up?" << endl;
  int x, y, z;
  
  x = y = z = 10; //assignment operator commutes from right to left
  cout << "x = " << x << "\ny = " << y << "\nz = " << z <<endl;
  
  cout << "++x = " << ++x << endl;
  cout < ""x = " << endl:
  
  cout << "y++ = " << y++ << endl;
  cout << "y = " << y << endl;
  
  int w = 4 * ++z;
  
  const double kNum = 15; //a constant variable
  
  //kNum = 1.2 can't chage the value of a constant variable
  //           after the declaration
  return 0;
}
*/
