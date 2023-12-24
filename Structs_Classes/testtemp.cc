// Copyright 2023 Jesse Caro
// Test drive the functionality of the Temperature class
#include<iostream>
using std::cout;
using std::endl;
#include"temperature.h"

int main() {
  // when calling the default constructor, DON'T place empty parenthesis after
  // the variable name
  Temperature t;
  t.Print();
  t.Convert("Fahrenheit");
  t.Print();
  t.Convert("Kelvin");
  t.Print();
  t.Convert("Celsius");
  t.Print();
  cout << t.GetValue() << " " << t.GetUnits() << endl;
  t.SetValue(70);
  t.SetUnits("Fahrenheit");
  cout << t.GetValue() << " " << t.GetUnits() << endl;
  Temperature t2(50), t3(75, "Fahrenheit");
  cout << t2.GetValue() << " " << t2.GetUnits() << endl;
  t3 = t;  // the default assignment operator will do a memberwise copy of the
           // data members. That's good in this case. Will have issues if we
           // have pointers as data members
  cout << t3.GetValue() << " " << t3.GetUnits() << endl;
  return 0;
}
