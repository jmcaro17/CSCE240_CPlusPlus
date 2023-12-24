// Copyright 2023 bhipp
// test Rectangle
#include<iostream>
using std::cout;
using std::endl;
#include"rectangle.h"
using csce240_shapes::Rectangle;
#include"square.h"
using csce240_shapes::Square;
#include<iomanip>
using std::setw;

void PrintRectangle(const Rectangle& r) {
  for ( int i = 0; i < r.GetWidth(); ++i )
    cout << "* ";
  cout << endl;
  for ( int i = 2; i < r.GetLength(); ++i ) {
    cout << "*";
    if ( r.GetWidth() > 1 )
      cout << setw(r.GetWidth() - 1) << "*";
    cout << endl;
  }
  for ( int i = 0; i < s.GetWidth(); ++i )
    cout << "* ";
  cout << endl;
}

int main() {
  csce240_shapes::Rectangle r;
  cout << r << endl;
  r.SetLength(4);
  r.SetWidth(2);
  cout << r << endl;
  PrintRectangle(r);
  csce240_shapes::Square s(5);
  cout << s << endl;
  s.SetLength(8);
  cout << s << endl;
  PrintRectangle(s);
  return 0;
}
