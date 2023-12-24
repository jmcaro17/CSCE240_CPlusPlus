// Copyright 2023 bhipp
// test Rectangle
#include<iostream>
using std::cout;
using std::endl;
// #include"rectangle.h"
#include"square.h"
int main() {
//  csce240_shapes::Rectangle r;
  csce240_shapes::Square r;
  cout << r << endl;
  r.SetLength(8);
  cout << r << endl;
  return 0;
}
