// Copyright 2023 Jesse Caro
// Define the School class
#ifndef _SCHOOL_H_
#define _SCHOOL_H_

class School {
  public:
    // default constructor = constructor with no arguments
    School(); /*{
      enrollment_ = 100;
    } */
    // accessor function - public member function that returns the copy of the
    // value of a private data member
    // const on the end of the function prototype states that the function will
    // not change the object that it's called on
    int GetEnrollment() const { return enrollment_; }

    // mutator function - member function that modifies the value of a private
    //                    data member
    void SetEnrollment(int x);
  private: // we'll make members private if they shouldn't be directly accessible
           // on objects
           // if we want to restrict the values in some way so that the object
           // remains in a consistent state (so the values make sense for an
           // object of this type)
    int enrollment_;
};

#endif // _SCHOOL_H_
