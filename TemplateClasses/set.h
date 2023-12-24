// Copyright 2023 Jesse Caro
// Define our Set template class
// set - unordered (the order of the values doesn't matter) collection of
//       distinct objects (since the objects can be of any type, we'll make
//       this a template class)
#ifndef _SET_H_
#define _SET_H_
#include<iostream>
using std::cout;
using std::endl;

namespace csce240_set {

template<class T>
class Set {
 public:
  Set() {
    size_ = 0;
    values_ = nullptr;
  }
  // Destructor
  ~Set() {
    if ( values_ != nullptr )
      delete [] values_;
  }
  // Copy constructor
  Set(const Set& to_copy);
  
  // assignment operator
  Set& operator = (const Set& to_copy);

  // pre-conditions - the second argument points to a block of at least
  //                  new_size T's (currently not checking for duplicates)
  void SetValues(int new_size, const T * new_values) {
    if ( new_size < 0 )
      return;
    if ( new_size != size_ ) {
      if ( size_ != 0 )
        delete [] values_;
      if ( new_size == 0 )
        values_ = nullptr;
      else
        values_ = new T[new_size];
    }
    int position = 0;
    for ( int i = 0; i < new_size; ++i ) {
      bool already_in_there = false;
      for ( int j = 0; j < position && !already_in_there; ++j ) {
        already_in_there = values_[j] == new_values[i];
      }
      if ( !already_in_there )
        values_[position++] = new_values[i];
    }
    size_ = position;
    cout << "size: " << size_ << endl;
  }
  void Print() const {
    cout << "{";
    for ( int i = 0; i < size_; ++i )
      cout << values_[i] << (i < size_ - 1 ? ", " : "");
    cout << "}" << endl;
  }
 
  // Is a subset of
  bool IsASubset(const Set& possible_subset) const {
    bool answer = true;
    int i = 0;
    while ( answer && i < possible_subset.size_ ) {
      answer = false;
      for ( int j = 0; j < size_ && !answer; ++j )
        answer = values_[j] == possible_subset.values_[i];
      ++i;
    }
    return answer; 
  }

  // is an element of
  bool IsAnElementOf(const T& the_value) const {
    bool found = false;
    int i = 0;
    while ( i < size_ && !found )
      found = values_[i++] == the_value;
    return found;
  }

 private:
  // utility function - called by our member functions but not directly on
  //                    objects
  int size_;  // cardinality
  T * values_;
};  // class Set

}  // namespace csce240_set

#endif  // _SET_H_
