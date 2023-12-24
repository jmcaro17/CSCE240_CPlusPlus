// Copyright 2023 bhipp
// Define a class to hold a Polynomial in one variable
// ex 3x^2 - 5x + 1
// hold data members for the degree of the polynomial object
//      and the coefficients
#ifndef _POLYNOMIAL_H_
#define _POLYNOMIAL_H_

#include<iostream>
using std::ostream;

class Polynomial {
  // the stream insertion operator can't be a member of our class because
  // the left operand is not a Polynomial
  // we'll make it a friend, giving it access to the private members of our
  // class
  // cout << x << " " << y << endl;
  // cout << x;
  // cout << " ";
  // cout << y;
  // cout << endl;
  friend ostream& operator << (ostream& whereto, const Polynomial& toprint);

 public:
  // we'll make any constructor that can be called with exactly one argument
  // explicit so that objects are only created when we explicitly call the
  // constructor
  explicit Polynomial(int degree = 0);

  // Any time we have pointers as data member we must
  // - overload the assignment operator
  // - write a copy constructor
  // - write a destructor to free up dynamically allocated memory

  // since the left operand is a Polynomial, we can make this operator a member
  // of our Polynomial class
  // x = y = z;  in order to make this work as the two lines below, we need to
  //             have the operator return a polynomial
  // y = z;
  // x = y;
  Polynomial& operator = (const Polynomial& rightoperand);
  Polynomial(const Polynomial& tocopy);
  ~Polynomial() { delete [] coefficients_; }

  void SetDegree(int degree);

  static void SetVariable(char var);

  // overload the [] operator to obtain coefficient of a particular term
  double& operator [] (int term);
  double operator [] (int term) const;

  // overload the + operator - since the left operand is a Polynomial, the
  // operator can be a member of the Polynomial class
  Polynomial operator + (const Polynomial& rightoperand) const;
 
 private:
  // static data members will be a single member for the entire class, not
  // separate variables for each object
  static char variable_;

  int degree_;  // should always hold a non-negative integer
  double * coefficients_;  // points to a block of degree_ + 1 doubles
};

#endif  // end _POLYNOMIAL_H_
