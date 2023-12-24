// Copyright 2023 bhipp
// test drive the functionality of our Polynomial class
#include<iostream>
using std::cout;
using std::endl;
#include"polynomial.h"

int main() {
  Polynomial p;
  cout << p << endl;
  p[3] = 6;
  cout << p << endl;
  p[5] = 2;
  cout << p << endl;



 /* Polynomial p1, p2(3);
  // +    p1 + p2      operator + ( p1, p2)  if the operator is a stand alone
  //                                         function
  //                   p1.operator +(p2) if the operator is a member of the 
  //                                     Polynomial class
  // <<   cout << p1   we can't make << a member of the Polynomial class
  //                   because the left operand is not a Polynomial
  cout << p1 << "\n" << p2 << endl;
  p1.SetDegree(6);
  p1 = p2;  // if not overloaded explicitly, assignment operator will be created
            // for us to do a memberwises copy - this is BAD if we have pointers
            // as data members, so we'll need to overload this ourselves
  cout << p1 << endl;
  p1.SetDegree(10);
  cout << p1 << endl;
  cout << p2 << endl;

// static functions can be called on objects OR
//  p2.SetVariable('p');
// through the class name - non-static can't be called this second way
  Polynomial::SetVariable('w'); 
  p1.SetDegree(2);
  cout << p1 << endl;
  p1.SetDegree(2);
  cout << p1 << endl;
  p1.SetDegree(-8);
  cout << p1 << endl;

  Polynomial p3 = p2;  // Polynomial p3(p2);
  p2.SetDegree(10);
  cout << p2 << "\n" << p3 << endl;
  p3[2] = 4;
  p3[1] = -2;
  p3[0] = 6;
  p3[-30] = 12;
  cout << p3 << endl;

  const Polynomial p4;
  cout << p4[0] << endl;
*/
}
