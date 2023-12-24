// Copyright 2023 Jesse Caro
// Define the Temperature class
#ifndef _TEMPERATURE_H_
#define _TEMPERATURE_H_

#include<string>  // class in the standard library
using std::string;  // string is in the std namespace

class Temperature {
 public:
   // constructor
   // if we have a constructor that can take exactly one argument,
   // we'll make that constructor explicit - this means that the compiler
   // can't create a Temperature out of a double (the one argument) without
   // us explicitly telling it to do so. MORE LATER
   explicit Temperature(double v = 0,  string u = "Celsius");
   
   // destructor
   ~Temperature();
   
   // accessor functions
   double GetValue() const { return value_; }
   string GetUnits() const { return units_; }
   // mutator functions
   void SetValue(double v);
   void SetUnits(string u);
   
   void Print() const;
   void Convert(string newunits);
 private:
   double value_;
   // composition - when a class "has a(n)" object of another class
   // as a data member
   string units_;
};

#endif // end _TEMPERATURE_H_
