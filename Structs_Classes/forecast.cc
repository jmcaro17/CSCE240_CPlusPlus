// Copyright 2023 bhipp
// Implement the functionality of the Forecast class
#include"forecast.h"
#include"temperature.h"  // this is already included by forecast.h but we're
                         // listing it for clarity
#include<iostream>
using std::cout;
using std::endl;

void Forecast::SetChanceOfRain(double rain) {
  if ( rain >= 0 && rain <= 100 )
    chance_of_rain_ = rain;
}

void Forecast::SetLow(const Temperature& low) {
  if ( low < high_ ) {
    low_.SetValue(low.GetValue());
    low_.SetUnits(low.GetUnits());
  }
}

void Forecast::SetHigh(const Temperature& high) {
  if ( low_ < high ) {
    high_.SetValue(high.GetValue());
    high_.SetUnits(high.GetUnits());
  }
}

// low_(low) sends a Temperature object as an argument for our constructor
// this copy constructor is made for us to do a memberwise copy (like the =
// operator) which is fine as long as none of our data members are pointers
Forecast::Forecast(const Temperature& low, const Temperature& high,
                   double rain) : low_(low), high_(low) {
  chance_of_rain_ = 0;
  SetChanceOfRain(rain);
//  SetLow(
  SetHigh(high);
}

void Forecast::Print() const {
  cout << "Forecast low: ";  // << low_.value_; can't directly access the
                             // Temperature object's private data member
                             // could call the get functions
  low_.Print();
  cout << "Forecast high: ";
  high_.Print();
  cout << "Chance of Precipitation: " << chance_of_rain_ << "%" << endl;
}
