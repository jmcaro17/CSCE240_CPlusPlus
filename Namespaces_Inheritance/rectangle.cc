// Copyright 2023 bhipp
// Implement the functionality of the Rectangle class
#include"rectangle.h"
#include<iostream>
using std::ostream;

namespace csce240_shapes {

Rectangle::Rectangle(double l, double w) : length_(1), width_(1) {
  SetLength(l);
  SetWidth(w);
}

void Rectangle::SetLength(double l) {
  if ( l > 0 )
    length_ = l;
}

void Rectangle::SetWidth(double w) {
  if ( w > 0 )
    width_ = w;
}

double Rectangle::Area() const {
  return length_ * width_;
}

double Rectangle::Perimeter() const {
  return 2 * length_ + 2 * width_;
}

ostream& operator << (ostream& whereto, const Rectangle& toprint) {
  whereto << "Rectangle length = " << toprint.length_
          << " width = " << toprint.width_;
  return whereto;
}

}  // namespace csce240_shapes
