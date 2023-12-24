// Copyright 2023 Jesse Caro
// source file with implementation of Set class member function
#include"set.h"

namespace csce240_set {

template <class T>
Set<T>::Set(const Set& to_copy) {
  size_ = 0;
  values_ = nullptr;
  SetValues(to_copy.size_, to_copy.values_);
}

template<class T>
Set<T>& Set<T>::operator = ( const Set& to_copy ) {
  SetValues(to_copy.size_, to_copy.values_);
  return *this;  // return the newly updated object the operator
                 // was called on
}

}  // namespace csce240_set
