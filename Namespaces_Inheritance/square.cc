// Copyright 2023 bipp
// implement the functionality of the Square class
#include"square.h"
#include"rectangle.h"
#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

namespace csce240_shapes {

ostream& operator << (ostream& whereto, const Square& s) {
  whereto << "Square with side length " << s.GetLength();
  // casting a derived class object as a base class object is a perfectly
  // valid operation in order to call the base class version of a function
  // or a operator
//  whereto << static_cast<Rectangle>(s);
  return whereto;
}

// important to use the member initializer list to call the base class
// constructor rthe way we want it to be called instead of setting it up
// with the default constructor and then fixing things
Square::Square(double side) : Rectangle(side, side) {
}

void Square::SetLength(double side) {
  // to call the base class version of a function we've redefined, qualify
  // the function call with the base class name and the scope resolution
  // operator
  Rectangle::SetLength(side);
  Rectangle::SetWidth(side);
}

void Square::Width(double side) {
  Rectangle::SetLength(side);
  Rectangle::SetWidth(side);
}

}  // namespace csce240_shapes
