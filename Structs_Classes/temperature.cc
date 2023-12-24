// Copyright 2023 Jesse Caro
// Implement the functionality of the Temperature class
#include"temperature.h"
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

// toy example to show when the destructor is called
// This will be important if we have any house-cleaning that needs to be done
// when we're finished with an object - specific ex when the object has pointers
// to dynamically allocated memory as data members
Temperature::~Temperature() {
  cout << "Destructor called for " << value_ << " " << units_ << endl;
}

// member initializer list comes between the construcor's paramaters ()
// and the body of the function {}
// used to initialize data members with values - if the data member is an object
// of a class, this calls the constructor for that object in the specified way
Temperature::Temperature(double v, string u) : value_(0), units_("Celsius") {
//  value_ = 0;
//  units_ = "Celsius";
  SetValue(v);
  SetUnits(u);
}

void Temperature::SetValue(double v) {
  value_ = v;
}

void Temperature::SetUnits(string u) {
  if ( u == "Farhenheit" || u == "Celsius" || u == "Kelvin" )
    units_ = u;
}

void Temperature::Print() const {
  cout << value_ << " degrees " << units_ << endl;
}

void Temperature::Convert(string u) {
  if ( units_ == u )
    return;
  if ( units_ == "Fahrenheit" ) {
    if ( u == "Celsius" ) {
      value_ = 5 / 9.0 * ( value_ - 32 );
      units_ = u;
    } else if ( u == "Kelvin" ) {
      value_ = 5 / 9.0 * ( value_ - 32 ) - 273.15;
      units_ = u;
    }
  } else if ( units_ == "Celsius" ) {
    if ( u == "Fahrenheit" ) {
      value_ = 9 / 5.0 * value_ + 32;
      units_ = u;
    } else if ( u == "Kelvin" ) {
      value_ -= 273.15;
      units_ = u;
    }
  } else if ( units_ == "Kelvin" ) {
    if ( u == "Farenheit" ) {
      value_ = 9 / 5.0 * (value_ + 273.15 ) + 32;
      units_ = u;
    } else if ( u == "Celsius" ) {

      value_ += 273.15;
      units_ = u;
    }
  }
}
