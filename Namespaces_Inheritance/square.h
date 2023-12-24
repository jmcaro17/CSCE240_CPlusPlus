// Copyright 2023 bhipp
// define the Square derived class
#ifndef _SQUARE_H_
#define _SQUARE_H_

#include"rectangle.h"

namespace csce240_shapes {

class Square : public Rectangle {
 public:
  explicit Square(double side=1);

  // redefine - write a function in the derived class with the same protoype
  //            as an existing function in the base class
  void SetLength(double side);
  void SetWidth(double side);
};

}  // namespace csce240_shapes

#endif  // end _SQUARE_H_
