// Copyright 2023 Jesse Caro
#include"School.h"

// To implement a member function outside of the class definition, we must
// state that it is a member of the class through the class and the scope
// resolution operator (::)
School::School() {
  enrollment_ = 100;
}

void School::SetEnrollment(int x) {
  if ( x > 0 )
    enrollment_ = x;
}
